# Proiect: Asamblarea robotului 4WD Omni-Directional Mobile Robot Kit

## Echipa
- Nume echipă: **VoltageX**
- Moto Echipa: **Puterea se mișcă în toate direcțiile.**
## Descriere generală
Scopul proiectului este **asamblarea și testarea robotului 4WD Omni-Directional Mobile Robot Kit** în cadrul laboratorului APD, precum și documentarea etapelor de montaj, configurare și testare. Platforma utilizează un cadru din aluminiu, patru roți omni de 100 mm și motoare DC cu encoder, putând atinge ~0.6 m/s și deplasându-se **în orice direcție fără schimbarea orientării**.
Roțile omni permit mișcare frontală, laterală și rotație pe loc, transformând robotul dintr-un sistem **non-holonomic** într-unul **holonomic** cu control complet pe axele X, Y și rotație. Integrarea microcontrolerului Arduino și a plăcii IO Expansion facilitează controlul motoarelor și conectarea senzorilor, oferind un cadru ideal pentru studierea principiilor de navigație și control al mișcării.



## Checklist componente

| Nr. | Componentă | Cod / Denumire | Cantitate | Accesorii | Observatii | Imagini |
|-----|-------------|----------------|------------|-------------|-----|------|
| 1 | 100mm Plastic Omni Wheel | 14041 | 4 |  | Permite mișcare în toate direcțiile; oferă stabilitate și precizie. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/1.jpg?raw=true) |
| 2 | Screws Accesories for 10mm Omni Wheels | 80020 | 1 |  | Set de șuruburi pentru fixarea roților pe arbori. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/2.jpg?raw=true) |
| 3 | Plug Converter | 76008 | 1 | (EU, US, AU, UK Standard) | Adaptor pentru diferite standarde de priză. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/3.jpg?raw=true) |
| 4 | Hex Screwdrivers | 95002 | 1 | 2mm, 3mm, 4mm, 5mm | Șurubelnițe imbus pentru montaj precis al componentelor. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/4.jpg?raw=true) |
| 5 | Spanner | 95003 | 1 | 8-10mm | Cheie fixă pentru strângerea piulițelor și șuruburilor. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/5.jpg?raw=true) |
| 6 | NI-MH Battery Charger, 1000mA | 76007 | 1 |  | Încărcător pentru acumulatorii robotului. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/6.jpg?raw=true) |
| 7 | Arduino USB Cable | 71005 | 1 |  | Conectează placa Arduino la PC pentru programare. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/7.jpg?raw=true) |
| 8 | Placa Arduino 328 microcontroller  | | 1 | | Placă principală de control; gestionează motoarele și senzorii. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/8.png?raw=true) |
| 9 | Arduino IO Expansion Board  | | 1 | | Extinde pinii I/O; permite conectarea senzorilor și a comunicației RS485. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/11.png?raw=true) |
| 10 | Motor DC cu encoder  | | 1 | | Motoarele principale ale robotului; encoderele permit control precis al vitezei și direcției. | ![enter image description here](https://m.media-amazon.com/images/I/51+JncrV17L.jpg) |
| 11 | Șasiu aluminiu 4WD  | | 1 | | Structura principală; rezistent și ușor; permite montarea componentelor modulare. | ![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/10.jpg?raw=true) |


### Arduino 328 Microcontroller Board
![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/12.png?raw=true)
Placa Arduino 328 este baza de control a robotului și gestionează motoarele, senzorii și comunicațiile. Are următoarele caracteristici esențiale:

 **Specificații hardware:**
-   Microcontroler: **ATmega168/328** 
-   **14 pini digitali I/O**, dintre care **6 PWM** (3,5,6,9,10,11)
-  **8 intrări analogice** (rezoluție 10-bit)
-   **16 MHz cristal oscilator**
-   Port **USB** pentru programare
-   **Jack alimentare** (7–12V extern)
-   **ICSP header** pentru bootloader
-   **UART serial** (pini 0 - RX, 1 - TX)
-   Alimentare automată USB / externă

**Funcționalități în proiect:**
-   Controlează **motoarele DC** prin pinii 4,5,6,7 (prin jumperi)
-   Permite comunicare serială (pentru debugging comenzi motoare)
-   Poate gestiona senzori suplimentari prin I2C, analog sau digital
-   Este compatibil cu IO Expansion Board

 **Părți fizice importante:**
-   **Regulated Motor Power Input** (6–12V pentru motoare)
-   **Unregulated Servo Power Input** (4–7.2V)
-   **Reset Button**
-   **Header APC220** – pentru modul wireless


### Arduino IO Expansion Board
![enter image description here](https://github.com/dragosbratu/apd/blob/team/VoltageX/9.png?raw=true)

Această placă extinde pinii Arduino, permitand robotului să conecteze toate cele **4 motoare cu encoder**, dar și alte componente.  

**Funcții importante:**
-   **Suport XBee / Bluetooth Bee** pentru comunicație wireless
-   **Port RS485 integrat** – necesar pentru senzorii ultrasonic DUS
-   **PWM dedicate** compatibile cu conectori servo
-   **Auto-switch** între alimentare internă/externă
-   **Suport SD-card** (necesită modul suplimentar)
-   **IIC/I2C/TWI** pentru senzori adiționali

### **Configurație Arduino pentru robot:**
-   **Motor Control Jumper** — alocă pinii 4,5,6,7 pentru control motoare  
-   **Wireless Select Jumper** — permite upload/sketch sau modul wireless  
-   **Servo Power Select Jumper** – decide sursa de alimentare pentru servo  

## Asamblare pas cu pas
Video Tutoriale si imagini poate chiar de la voi 

---

## Configurare software
- Platformă: Arduino IDE / Python / altă platformă
- Librării folosite:
- Servo.h
- LSS-Config
- Adafruit_MotorShield
- Exemple de rulare:

# Compilare și upload
TODO

# ETC



## Progres 
## Progres echipă

| Nr. | Etapă                         | Descriere scurtă                                  | Status | Data finalizării |
|-----|-------------------------------|--------------------------------------------------|---------|------------------|
| 1 | Verificare componente          | Inventarierea pieselor și verificarea integrității | ✅ |  |
| 2 | Montaj mecanic                 | Asamblarea bazei, fixarea motoarelor, șuruburi etc. |  ❌ |  |
| 3 | Conectare electronică          | Conectarea controlerului, cabluri, alimentare     |  ❌ |  |
| 4 | Test inițial mișcare           | Verificarea mișcărilor de bază / cod test         | ❌ |  |
| 5 | Configurare software           | Instalare librării, upload cod, calibrare         | ❌ |  |
| 6 | Test final                     | Verificare completă a funcționării robotului      | ❌ |  |
| 7 | Documentare și imagini         | Scriere README, poze, diagrame, linkuri utile     | ❌ |  |
| 8 | Prezentare finală              | Demonstrație funcțională în laborator             | ❌ |  |

Legenda status:  
✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput
