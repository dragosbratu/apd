
# Proiect: Asamblarea robotului [Rover]

## Echipa
**Nume echipă: Robot_Creators**
- Ungureanu Bianca
- Enachescu Izabela
- Stingu Diana
- Soto Noelia
- Simion Alexandru
## Descriere Generală
Scopul proiectului este asamblarea și testarea robotului 10008 Omni 4WS V1.1, în cadrul laboratorului APD.  
Documentația include pașii de montaj, configurare, testare și eventuale îmbunătățiri aduse.

---

## Checklist Componente

| Nr. | Componentă | Cod / Denumire | Cantitate | Observații |  
|-----|-------------|----------------|------------|-------------|
| 1 | 100mm Plastic Onmi Wheel | 14041 | 4 | ![Omni Wheels](https://iili.io/fdrEZTQ.jpg) |
| 2 | Screws Accessories for 100mm Omni Wheels | 80020 | 1 |  |
| 3 | Plug Converter (EU, US, AU, UK Standard) | 76008 | 1 | ![Plug Converter](https://iili.io/fdr62qX.md.jpg) |
| 4 | Hex Screwdrivers | 95002 | 1 | 2mm, 3mm, 4mm, 5mm |
| 5 | Spanner | 95003 | 1 | 8-10mm |
| 6 | NI-MH Battery Charger, 1000mA | 76007 | 1 | ![Battery Charger](https://iili.io/fdrg0Xt.md.jpg) |
| 7 | Arduino USB Cable | 71005 | 1 | ![Arduino Cable](https://iili.io/fd49OSp.png) |

---

## Asamblare pas cu pas
Această secțiune descrie pașii principali pentru asamblarea robotului cu roți omni, folosind kitul 4WD și [tutorial video](https://www.youtube.com/watch?v=HBdZzmTGeaI) de referință .
Înainte de asamblare se verifică prezența tuturor pieselor menționate în secțiunea **Checklist Componente**.

### Elementele de prindere ale roții
Pentru prinderea fiecărei roți se folosește un șurub central, împreună cu o șaibă plată, o șaibă elastică și o piuliță.  
Șurubul trece prin centrul roții și prin piesa neagră de distanțare. Pe partea interioară, peste șurub, se montează mai întâi șaiba plată, apoi șaiba elastică. La final, ansamblul se strânge cu piulița.

Șaiba plată are rolul de a proteja piesele, iar șaiba elastică împiedică desfacerea accidentală a piuliței în timpul funcționării robotului.
![Adaptorul de prindere pentru roata omni (piesă șurub–adaptor)](https://iili.io/fd47cQe.jpg)

### Instalarea roților omni
După asamblarea șurubului cu șaibele și piulița, roata se fixează pe motor împreună cu piesa neagră de distanțare. Piesa de distanțare se așază între roată și motor, astfel încât roata să fie centrată și să nu atingă șasiul robotului.

Ansamblul se strânge până când roata devine stabilă, dar se poate roti liber. Este important să nu se strângă excesiv, deoarece rolele laterale ar putea să nu mai funcționeze corect. După montaj, se verifică dacă roata nu are joc lateral și dacă se învârte ușor.

![Roata omni de 100 mm complet asamblată](https://iili.io/fd4AXpt.jpg)

### Fixarea roților pe șasiu

La final, aceeași procedură se repetă pentru toate cele patru roți. Fiecare roată se introduce pe axul motorului cu encoder și se strânge în același mod, folosind un imbus, având grijă ca piesa neagră de distanțare să fie poziționată corect între roată și suport.
![Ansamblul al robotului](https://iili.io/fd4Xd4S.png)

### Verificarea finală
Înainte de alimentare:
-   roțile trebuie să se miște liber,
-   toate șuruburile trebuie strânse,
-   cablurile nu trebuie să interfereze cu mecanica robotului.
Robotul este astfel pregătit pentru etapa electronică și pentru testele de funcționare.
---

# Configurare software
Setările de bază necesare pentru compilarea și rularea codului robotului omni-direcțional.
- Platformă: Arduino Atmega328
- Librării folosite: PinChangeInt, EEPROM, fuzzy_table, PID_Beta6, MotorWheel, Omni4WD – necesare pentru citirea encoderelor, control PID și funcționarea mecanicii omni-direcționale.
- Exemple de rulare: Programul controlează robotul prin comenzi de deplasare precum mers înainte, mers înapoi, setare viteză, oprire graduala și mișcare circulara. 

# Placa Arduino
### Descrierea placii Atmega328
Robotul foloseste placa [Arduino Atmega 328](https://shorturl.at/xd3dV), bazata pe placa 168. Aceasta primeste semnale de la senzori si poate controla luminile, motoarele, precum si elementele de actionare. Placa are 14 pini de I/O, 6 pini analogici de input, un oscilator de cristal de 16 MHz, un port USB, un port power jack, un conector de programare seriala in circuit si un buton de reset. Aceasta se poate porni folosind un cablu USB conectat la computer sau cu o baterie. De asemenea, placa Atmega328 beneficiaza de 32KB de memorie (0.5KB folositi pentru bootloader), 2KB de SRAM si 1KB de EEPROM.

### Comunicarea cu computerul
Pentru acest proiect, placa Arduino Atmega328 a fost conectata la computer folosind portul USB. Aceasta se face folosind un chip secundar de pe placa arduino, Atmega8U2. Firmware-ul foloseste drivere USB COM standard, nefiind necesare drivere in plus, totusi, pe Windows este nevoie de un fisier .inf. In Arduino IDE, package-ul folosit pentru programare a fost Arduino Duemilanove or Diecimila.

### I/O Expansion shield
Placa de expansiune Arduino ([Arduino I/O Expansion Shield](https://shorturl.at/xd3dV)) este o placa folosita pentru a simplifica conexiunea dintre placa Arduino si dispozitivele externe (senzori, motoare, etc.) adaugand pini digitali de I/O aditionali, precum si conectori dedicati pentru alimentare si masa

În timpul programării, shield-ul este utilizat doar pentru realizarea conexiunilor. După încărcarea codului pe placă, acesta trebuie îndepărtat, deoarece poate bloca anumiți pini necesari pentru pornirea corectă a programului. După deconectarea shield-ului, Arduino funcționează normal cu programul încărcat.

# Compilare și upload
Această secțiune descrie structura programului utilizat pentru controlul robotului omni-direcțional și explică principalele funcții care gestionează mișcarea acestuia. 

## Cod: Mers înainte și înapoi
Codul de mai jos constituie primul program al robotului. Acesta este împărțit în patru părți importante:
1. Importul bibliotecilor: Liniile necesare pentru a activa PID-ul, encoderele și controlul roților. 
2. Inițializarea obiectelor MotorWheel și Omni4WD: Definirea pinilor și a întreruperilor pentru fiecare roată.
3. Configurarea PWM și PID în `setup()`: Stabilirea frecvenței PWM și activarea controlului PID. 
4. Bucla principală `loop()`: Implementarea efectivă a mișcărilor înainte și înapoi. 

### Importul bibliotecilor
```cpp
#include <PinChangeInt.h>
#include <PinChangeIntConfig.h>
#include <EEPROM.h>
#include <fuzzy_table.h>
#include <PID_Beta6.h>
#include <MotorWheel.h>
#include <Omni4WD.h>
```
Aceste biblioteci permit:
- PinChangeInt: citirea encoderelor prin întreruperi.
- PID_Beta6: controlul precis al vitezei fiecărei roți. 
- MotorWheel: definirea comportamentului unei roți individuale. 
- Omni4WD: combinarea celor petru roți pentru mișcare holonomică.
Mișcarea holonomică reprezintă capacitatea robotului de a se deplasa liber în orice direcție (față, spate, lateral, diagonal) și de a roti în același timp, datorită configurației speciale a roților omni.
Robotul nu ar putea menține o viteză stabilă fără acest sistem PID + encodere. 

### Inițializarea celor patru roți
``` cpp
irqISR(irq1,isr1);
MotorWheel wheel1(3,2,4,5,&irq1);

irqISR(irq2,isr2);
MotorWheel wheel2(11,12,14,15,&irq2);

irqISR(irq3,isr3);
MotorWheel wheel3(9,8,16,17,&irq3);

irqISR(irq4,isr4);
MotorWheel wheel4(10,7,18,19,&irq4);
```
Pentru fiecare roată: 
- Funcția `irqISR()` definește funcția de întrerupere pentru encoder.
- Funcția  `MotorWheel()` primește doi pini de direcție, un pin PWM, un pin pentru encoder și pointer către întrerupere. 
Acest lucru permite monitoriarea exactă a rotației fiecărei roți și corectarea vitezei în timp real. 

### Crearea obectului robotului
``` cpp
Omni4WD Omni(&wheel1,&wheel2,&wheel3,&wheel4);
```
Clasa Omni4WD combină cele patru roți ți permite mișcări omni-direcționale: înainte/inapoi, lateral, diagonal, rotație în loc. 
În acest program se foloseste doar mișcările înainte și înapoi. 

### Configurarea PWM și activarea PID
``` cpp
TCCR1B=TCCR1B&0xf8|0x01;    // Pin9,Pin10 PWM 31250Hz
TCCR2B=TCCR2B&0xf8|0x01;    // Pin3,Pin11 PWM 31250Hz
    
Omni.PIDEnable(0.31,0.01,0,10);
```
Aici se configureaza frecvența PWM și controlul PID. Frecvența PWM la 31.25 kHz, ideală pentru motoarele DC (reduce zgomotul, crește stabilitatea). Controlul PID cu valorile Kp = 0.31 și Ki = 0.01. 
PID-ul este esențial deoarece menține viteza constantă indiferent de frecare, baterie sau greutatea robotului; face ca robotul să deplaseze drept și permite opriri line și controlate. 

### Bucla principală 
Aceasta partea este cea care spune robotului ce să facă efectiv. 

#### Mers înainte
``` cpp
Omni.setCarAdvance(0);          // selectează direcția înainte
Omni.setCarSpeedMMPS(200, 500); // viteză: 200 mm/s
Omni.delayMS(2000);             // merge 2 secunde
Omni.setCarSlow2Stop(300);      // oprire lină în 300 ms
```
- `setCarAdvance(0)` setează orientarea înainte.  
- `setCarSpeedMMPS(200, 500)` pornește roțile la o viteză controlată prin PID, 200mm/s - accelerare în 500ms.
- `delaysMS(2000)` este un delay non-blocant unde procesorul continuă să ruleze PID-ul. 
- `setCarSlow2Stop(300)` frâncează progresiv robotul. 

#### Pauză scurtă
``` cpp
Omni.delayMS(500);
```
Robotul rămâne pe loc 0.5 secunde. 

#### Mers înapoi
``` cpp
Omni.setCarBackoff(0);          // selectează direcția înapoi
Omni.setCarSpeedMMPS(200, 500);
Omni.delayMS(2000);
Omni.setCarSlow2Stop(300);
```
Logică identică cu mersul înainte, doar cu direcția inversată: robotul se deplasează înapoi 2 secunde, PID-ul menține viteza constantă și robotul frânează lin. 
![Mers inainte și înapoi](https://iili.io/fElPG1f.gif)

## Cod: Rotire
Demonstrează capacitatea robotului omni-direcțional de a realiza o rotație controlată, combinând mișcarea liniară cu o viteză de rotație constantă. 
Codul este similar ca structură cu cel pentru mers înainte/înapoi, dar introduce o funcție nouă care permite rotirea robotului în timp ce se deplasează. Aici se folosește funcția `setCarMove()`, care permite controlul simultan al vitezei pe axele X/Y și al vitezei unghiulare.
Structura programului poate fi împărțită în două părți importante:
1. Configurarea PID în `setup()`: Penrtu stabilizarea vitezei roților în timpul mișcării circulare.
2. Bucla principală `loop()`: Implementarea mișcării circulare folosind combinația dintre viteza liniară și viteza unghiulară.

### Configurarea PID
PID-ul menține viteza fiecărei roți în limite stabile, esențial atunci când robotul trebuie să execute o traiectorie curbată (cerc).
Într-o mișcare circulară, fiecare roată are o viteză diferită, iar PID-ul compensează automat aceste diferențe.
*(Aceeași configurație ca în programele anterioare; aici este prezentată doar partea relevantă)*
``` cpp
Omni.PIDEnable(0.31,0.01,0,10);
```
### Bucla principală
``` cpp
// Robotul face un cerc
Omni.setCarMove(200, 0, 0.8);   // 200 mm/s înainte + rotire 0.8 rad/s
Omni.delayMS(4000);             // timpul necesar pentru a completa cercul

Omni.setCarSlow2Stop(300);
Omni.delayMS(1000);
```
Aceasta este partea care definește comportamentul efectiv al robotului: deplasare înainte combinată cu rotație unde rezultatul este un cerc complet.
- `setCarMove(vx, vy, w)` este funcția esențială a programului. Parametrii controlează viteză inainte, fără deplasare laterală și rotație în jurul centrului robotului. Combinația `vx ≠ 0 + w ≠ 0` produce o mișcare circulară.
- `delayMS(4000)` menține mișcarea timp de 4 secunde. Ca și înainte, delay-ul nu blochează procesorul, ceea ce permite PID-ului să funcționeze în fundal.
- `setCarSlow2Stop(300)` oprește robotul gradual în 300ms, prevenind dezechilibrele mecanice după rotația prelungită. 
- `elayMS(1000)` o pauză de o secundă pentru a încheia comportamentul.

![Rotire](https://iili.io/fElmyva.gif)

## Cod: Secvență de mișcări combinate
Demonstrează o secvență completă de deplasare autonomă, în care robotul efectuează cinci mișcări distincte: mers înainte, cerc spre stânga, din nou mers înainte, cerc spre dreapta și întoarcere la poziția inițială.
Programul folosește funcțiile prezentate anterior (`setCarAdvance`, `setCarMove`, `setCarBackoff`) într-o combinație menită să evidențieze flexibilitatea platformei omni-direcționale. 
Această secțiune se concentrează exclusiv pe logica din `loop()`, întrucât părțile de inițializare au fost deja explicate în secțiunele anterioare. 

### Bucla principală `loop()`
Codul este împărțit în cinci etape. 

#### Mers înainte
``` cpp
Omni.setCarAdvance(0);
Omni.setCarSpeedMMPS(200, 500);
Omni.delayMS(1500);
Omni.setCarSlow2Stop(300);
Omni.delayMS(500);
```
Robotul se deplasează înainte cu 200mm/s, viteza crește progresiv în 500ms, rulează 1.5 secunde și apoi frânează lin și face o pauză scurtă.
- `setCarAdvance(0)` face deplasare înainte.
- `setCarSlow2Stop(ms)` face o oprire graduală.
- `delayMS(t)` menține mișcarea pentru durata specificată (non-blocant).

#### Cerc spre stânga
``` cpp
Omni.setCarMove(200, 0, 3.0);
Omni.delayMS(2000);
Omni.setCarSlow2Stop(300);
Omni.delayMS(400);
```
Robotul combina deplasare înainte, fără lateral și rotație spre stânga. Obținând ca robotul descrie un cerc spre stânga timp de 2 secunde. 
- `setCarMove(vx, vy, w)` combină translația cu rotația (folosit pentru cercuri).

#### Mers înainte (din nou)
``` cpp
Omni.setCarAdvance(0);
Omni.setCarSpeedMMPS(200, 500);
Omni.delayMS(1500);
Omni.setCarSlow2Stop(300);
Omni.delayMS(500);
```
Aceeași logică ca în etapa 1. Robotul reia deplasarea în linie dreaptă înainte de următoarea rotație.
- `setCarSpeedMMPS(v, accel)` setează viteza controlată prin PID.

#### Cerc spre dreapta
``` cpp
Omni.setCarMove(200, 0, -3.0);
Omni.delayMS(2000);
Omni.setCarSlow2Stop(300);
Omni.delayMS(400);
```
Parametrii sunt identici cu cercul de stânga, dar w este negativ pentru a efectua rotație spre dreapta. Robotul descrie simetric un cerc în partea opusă.

#### Întoarcere la poziția de start
``` cpp
Omni.setCarBackoff(0);
Omni.setCarSpeedMMPS(200, 500);
Omni.delayMS(3000);
Omni.setCarSlow2Stop(400);

Omni.delayMS(2000);
```
Robotul se deplasează înpoi cu 200mm/s, timp de 3 secunde pentru a compensa distanța avansată, frânează lin în 400ms, se oprește complet în poziția inițială și așteaptă două secunde. 
- `setCarBackoff(0)` face deplasare înapoi.
![Mișcare combinate](https://iili.io/fE02BF2.gif)
# Progres 
## Progres echipă

| Nr. | Etapă                         | Descriere scurtă                                  | Status | Data finalizării |
|-----|-------------------------------|--------------------------------------------------|---------|------------------|
| 1 | Verificare componente          | Inventarierea pieselor și verificarea integrității | ✅ |12.11.2025  |
| 2 | Montaj mecanic                 | Asamblarea bazei, fixarea motoarelor, șuruburi etc. |  ✅ | 19.11.2025 |
| 3 | Conectare electronică          | Conectarea controlerului, cabluri, alimentare     |  ✅ |  19.11.2025|
| 4 | Test inițial mișcare           | Verificarea mișcărilor de bază / cod test         | ✅ | 03.12.2025 |
| 5 | Configurare software           | Instalare librării, upload cod, calibrare         | ✅ | 03.12.2025 |
| 6 | Test final                     | Verificare completă a funcționării robotului      | ✅ | 10.12.2025 |
| 7 | Documentare și imagini         | Scriere README, poze, diagrame, linkuri utile     | ✅ | 10.12.2025 |
| 8 | Prezentare finală              | Demonstrație funcțională în laborator             | ✅ | 10.12.2025|

Legenda status:  
✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput
