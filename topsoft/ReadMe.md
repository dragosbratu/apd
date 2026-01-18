# Proiect: Asamblarea și Programarea Robotului Omni 4WD [Rover]

## Echipa

**Nume echipă: TopSoft**

- Gavriluță Raul
- Dumitru Iulian
- Ichim Vlad
- Ionașcu Andi

## Descriere Generală

Acest proiect documentează etapele de asamblare, configurare hardware și programare a robotului mobil **10008 Omni 4WS V1.1**. Scopul final este realizarea unui vehicul autonom capabil de mișcare holonomică (omnidirecțională) controlată prin placa de dezvoltare Arduino. Documentația acoperă lista de componente, pașii de montaj, setările mediului de dezvoltare și codul sursă utilizat pentru demonstrarea funcționalităților.

---

## Checklist Componente și Resurse

Pentru asamblarea corectă, am verificat integritatea pachetului kit-ului 4WD. Mai jos este lista componentelor critice și resurse vizuale utile pentru montaj.

| Nr. | Componentă | Cod | Cantitate | Resurse utile (Link-uri) |
|-----|-------------|-----|------------|---------------------------|
| 1 | 100mm Plastic Omni Wheel | 14041 | 4 | Structura roții Omni (Nexus) |
| 2 | Șuruburi și accesorii roți | 80020 | 1 | Set complet prindere |
| 3 | Motoare DC cu Encoder | - | 4 | Specificatii motor Faulhaber 12V|
| 4 | Hex Screwdrivers & Spanner | 95002 | 1 | Unelte incluse (imbus 2-5mm) |
| 5 | Arduino Microcontroller | 328 | 1 | [Pinout & Datasheet ATmega328P](https://components101.com/microcontrollers/atmega328p-pinout-features-datasheet) |
| 6 | IO Expansion Shield | - | 1 | Shield conectică senzori/motoare |
| 7 | Cablu USB Arduino | 71005 | 1 | Conectare PC - Placă |

---

## Asamblare Mecanică

### 1. Montarea roților Omni

Procesul începe cu pregătirea celor 4 roți omnidirecționale. Este esențială respectarea ordinii șaibelor pentru a preveni blocarea roții sau desfacerea șurubului în timpul vibrațiilor:

1. Se introduce șurubul lung prin axul roții.
2. Se adaugă piesa neagră de distanțare (spacer).
3. Pe partea opusă, se montează **șaiba plată**, urmată de **șaiba elastică** (Grower).
4. Se strânge ferm piulița, verificând ca roata să se învârtă liber, fără joc lateral excesiv.

### 2. Fixarea pe șasiu

Fiecare ansamblu roată-motor se fixează pe șasiul de aluminiu. Cablurile motoarelor și encoderelor trebuie orientate spre interiorul șasiului pentru a putea fi conectate ulterior la Shield-ul de expansiune.

### 3. Electronică

Placa Arduino Atmega328 se montează pe distanțiere, iar deasupra se atașează IO Expansion Shield. Conectarea motoarelor se face respectând diagrama pinilor din cod (Digital 3, 11, 9, 10 pentru PWM).

---

# Specificații Tehnice: Arduino & ATmega328P

Creierul robotului este o placă de dezvoltare bazată pe microcontrolerul **ATmega328P** (arhitectură AVR pe 8 biți). Aceasta gestionează toate calculele cinematice pentru deplasarea omnidirecțională și procesarea semnalelor de la encodere.

### Arhitectura Microcontrolerului (ATmega328P)

Simbolul "P" din denumire semnifică tehnologia **PicoPower**, optimizată pentru consum redus de energie, ideală pentru roboți mobili.
- **Memorie Flash:** 32 KB (spațiu pentru stocarea codului), din care aproximativ 0.5 KB sunt ocupați de bootloader.
- **Memorie SRAM:** 2 KB (pentru variabile și date temporare în timpul rulării).
- **Memorie EEPROM:** 1 KB (permite stocarea datelor permanente).
- **Frecvență:** Placa rulează la 16 MHz, viteză suficientă pentru calculele PID în timp real.

### Conectivitate și Alimentare

Placa expune pinii microcontrolerului pentru interfațarea cu shield-ul și senzorii:
- **Pini Digitali I/O:** 14 pini, cu o limită de curent de **20mA per pin** (suficient pentru senzori, dar necesită drivere pentru motoare).
- **Pini Analogici:** 6 intrări (A0-A5) cu rezoluție de 10 biți.
- **Alimentare (Vin):** Placa acceptă o tensiune de intrare între **6V și 20V**, însă recomandarea pentru stabilitate termică este între **7V și 12V**.

### Comunicarea Serială

Pentru programare și debugging, placa utilizează protocolul UART (Serial) prin pinii 0 (RX) și 1 (TX). Conexiunea USB la calculator este intermediată de un chip dedicat, care creează un port COM virtual (ex. COM5), permițând încărcarea codului direct din Arduino IDE.

---

# Configurare Software

Pentru controlul robotului, am utilizat mediul **Arduino IDE** și un set specific de librării care gestionează calculul PID și cinematica roților omnidirecționale.

### Detalii Configurare

- **Board:** Arduino Duemilanove or Diecimila
- **Procesor:** ATmega328P
- **Port Serial:** COM5
- **Drivere necesare:** În Windows a fost necesară instalarea manuală a driverelor FTDI pentru detectarea portului COM5.

### Librării Incluse

Proiectul depinde de următoarele librării (trebuie copiate în folderul `/libraries` al Arduino IDE):

- `PinChangeInt` - Gestionarea întreruperilor pentru encodere.
- `MotorWheel` - Controlul individual al motoarelor.
- `Omni4WD` - Coordonarea mișcării ansamblului.
- `PID_Beta6` - Algoritmul de control pentru menținerea vitezei constante.

---

# Codul Sursă și Explicații

Programul încărcat pe robot execută o secvență demonstrativă care evidențiază stabilitatea deplasării liniare și precizia rotației.

### Funcționalitatea Codului

1. **Inițializare:** Configurează timer-ele interne pentru PWM la 31kHz (pentru a reduce zgomotul motoarelor) și activează sistemul PID.
2. **Secvența Loop:**
    - Robotul avansează liniar pe o distanță scurtă.
    - Face o pauză pentru stabilizare.
    - Execută o rotație pe loc (spot turn) controlată, simulând o scanare de 360 de grade.
    - Se oprește complet.

### Codul Complet

```cpp
#include <PinChangeInt.h>
#include <PinChangeIntConfig.h>
#include <EEPROM.h>
#include <fuzzy_table.h>
#include <PID_Beta6.h>
#include <MotorWheel.h>
#include <Omni4WD.h>

irqISR(irq1,isr1);
MotorWheel wheel1(3,2,4,5,&irq1);

irqISR(irq2,isr2);
MotorWheel wheel2(11,12,14,15,&irq2);

irqISR(irq3,isr3);
MotorWheel wheel3(9,8,16,17,&irq3);

irqISR(irq4,isr4);
MotorWheel wheel4(10,7,18,19,&irq4);


void setup() {

  TCCR1B=TCCR1B&0xf8|0x01;    
  TCCR2B=TCCR2B&0xf8|0x01;    
    

  Omni.PIDEnable(0.31,0.01,0,10);
}

void loop() {
  Omni.setCarAdvance(200);
  Omni.delayMS(1500); 

  Omni.setCarSlow2Stop(300);
  Omni.delayMS(500); 

 
  Omni.setCarRotate(200); 
  
  Omni.delayMS(3800); 

  Omni.setCarSlow2Stop(300);
  Omni.delayMS(2000); 
}

```

## Progresul Echipei

| Nr. | Etapă | Descriere scurtă | Status | Data finalizării |
|-----|-------|------------------|--------|------------------|
| 1 | Verificare componente | Inventarierea pieselor și verificarea integrității | ✅ | 12.11.2025 |
| 2 | Montaj mecanic | Asamblarea bazei, fixarea motoarelor, șuruburi etc. | ✅ | 19.11.2025 |
| 3 | Conectare electronică | Conectarea controlerului, cabluri, alimentare | ✅ | 19.11.2025 |
| 4 | Test inițial mișcare | Verificarea mișcărilor de bază / cod test | ✅ | 03.12.2025 |
| 5 | Configurare software | Instalare librării, upload cod, calibrare | ✅ | 03.12.2025 |
| 6 | Test final | Verificare completă a funcționării robotului | ✅ | 10.12.2025 |
| 7 | Documentare și imagini | Scriere README, poze, diagrame, linkuri utile | ✅ | 10.12.2025 |
| 8 | Prezentare finală | Demonstrație funcțională în laborator | ✅ | 10.12.2025 |

Legenda status:  
✅ = Finalizat &emsp; ⏳ = În desfășurare &emsp; ❌ = Neînceput
