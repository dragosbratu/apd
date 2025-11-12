# Proiect: Asamblarea robotului Lynxmotion SES-V2 Robotic Arm (3 DoF) w/ Smart Servos Kit

## Echipa
- Nume echipă: CONA IT Solutions
- Moto: in viata o data iti merge rau, dupa iti merge si mai rau.

## Descriere generală
Scopul proiectului este asamblarea și testarea robotului Lynxmotion SES-V2 Robotic Arm (3 DoF) w/ Smart Servos Kit, în cadrul laboratorului APD.  
Documentația include pașii de montaj, configurare, testare și eventuale îmbunătățiri aduse.

---

## Checklist componente

| Nr. | Imagine                                                                                                                                                      | Componentă                            | Cod / Denumire   | Cantitate | Observații                                        |
| --- | ------------------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------- | ---------------- | --------- | ------------------------------------------------- |
| 1   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-base-rotate/lss-base-rotate-g10-assembly/WebHome/LSS-BR-KT-Ghost.PNG)       | Kit bază de rotație                   | LSS-BR-KT        | 1x        | Include șuruburi de montaj                        |
| 2   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/ses-v2-mini-gripper-rc/WebHome/SES-MG-KT.PNG)                                   | Kit clește (gripper)                  | SES-MG-KT        | 1x        | Clește paralel, deschidere 40 mm                  |
| 3   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-servos/ses-lynxmotion-smart-servo/WebHome/LSS-ST1-HORNS.PNG)   | Servomotor standard                   | LSS-ST1          | 3x        | Pentru bază, umăr și cot                          |
| 4   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-modules/lss-adapter-board/WebHome/LSS-ADA.png) | Adaptor LSS                           | LSS-ADA          | 1x        | Permite conexiunea la PC / Arduino / Raspberry Pi |
| 5   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-modules/lss-2io-board/WebHome/LSS-2IO.PNG)     | Modul 2IO                             | LSS-2IO          | 1x        | Controlează servomotorul cleștelui                |
| 6   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-modules/lss-5vr/WebHome/LSS-5VR.PNG)           | Regulator tensiune 5V                 | LSS-5VR          | 1x        | Asigură alimentarea pentru servo RC               |
| 7   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wall-adapters/WebHome/BX-12006000-XT60.PNG)    | Alimentator 12V / 6A cu conector XT60 | BX-12006000-XT60 | 1x        | Sursă de alimentare principală                    |
| 8   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/USBC-02.PNG)                    | Cablu USB la Mini-B                   | USBC-02          | 1x        | Pentru conectarea la computer                     |
| 9   | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/ZT-07in.PNG)                    | Coliere de prindere (șoricei)         | ZT-07in          | 4x        | Pentru organizarea cablurilor                     |
| 10  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/LSS-C-100.png)                  | Cablu 100 mm                          | LSS-C-100-S      | 3x        | Cablu standard servo                              |
| 11  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/LSS-C-100Y.png)                 | Cablu Y 150 mm                        | LSS-C-150-Y      | 1x        | Pentru împărțirea semnalului                      |
| 12  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/SEA-01.PNG)                     | Extensie 6 inchi                      | SEA-01           | 1x        | Cablu prelungitor                                 |
| 13  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/SEA-02.PNG)                     | Extensie 12 inchi                     | SEA-02           | 1x        | Cablu prelungitor                                 |
| 14  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-brackets/WebHome/ASB-28.png)                     | Suport lat simplu                     | ASB-28           | 2x        | Piesă structurală SES                             |
| 15  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-brackets/WebHome/ASB-43.PNG)                     | Brachet Mini C                        | ASB-43           | 1x        | Pentru montarea cleștelui                         |
| 16  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-02.png)                       | Șurub 2-56 x 1/4"                     | PHS-02           | 27x       | Element de fixare                                 |
| 17  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-16.png)                       | Șurub M3 x 10mm                       | PHS-16           | 2x        | Element de fixare                                 |
| 18  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-17.PNG)                       | Șurub M3 x 20mm                       | PHS-17           | 4x        | Element de fixare                                 |
| 19  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-18.PNG)                       | Șurub M3 x 30mm                       | PHS-18           | 2x        | Element de fixare                                 |
| 20  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-19.PNG)                       | Șurub M3 x 40mm                       | PHS-19           | 2x        | Element de fixare                                 |
| 21  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-05.png)                       | Șurub 2-56 x 1/2"                     | PHS-05           | 12x       | Element de fixare                                 |
| 22  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-miscellaneous/WebHome/AHS-EC.PNG)                | Clips electronic                      | AHS-EC           | 2x        | Fixare cabluri                                    |
| 23  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHTS-01.PNG)                      | Șurub #2 x 1/4"                       | PHTS-01          | 15x       | Șurub autofiletant                                |
| 24  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-washers/WebHome/SW-04.png)                       | Șaibă 3 x 5.6mm                       | SW-04            | 26x       | Șaibe metalice                                    |
| 25  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-nuts/WebHome/SLN-03.PNG)                         | Piuliță autoblocantă M3               | SLN-03           | 8x        | Asigură prindere sigură                           |
| 26  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-01.PNG)     | Piesă LSS-3DOF-L-01                   | Link #1          | 1x        | Piesă G10 compozit                                |
| 27  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-02.PNG)     | Piesă LSS-3DOF-L-02                   | Link #2          | 5x        | Piesă structurală repetată                        |
| 28  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-03.PNG)     | Piesă LSS-3DOF-L-03                   | Link #3          | 1x        | Piesă G10 compozit                                |
| 29  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-04.PNG)     | Piesă LSS-3DOF-L-04                   | Link #4          | 2x        | Piesă G10 compozit                                |
| 30  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-05.PNG)     | Piesă LSS-3DOF-L-05                   | Link #5          | 1x        | Piesă G10 compozit                                |
| 31  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-06.PNG)     | Piesă LSS-3DOF-L-06                   | Link #6          | 1x        | Piesă G10 compozit                                |
| 32  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-base.PNG)        | Placă de bază                         | LSS-3DOF-BP      | 1x        | Baza brațului                                     |
| 33  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-bs.PNG)          | Suport posterior                      | LSS-3DOF-BS      | 1x        | Suport structural                                 |
| 34  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-ct-s.PNG)        | Suport mic                            | LSS-3DOF-CT-S    | 2x        | Plăci de legătură                                 |
| 35  | ![img](https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-ct-l.PNG)        | Suport mare                           | LSS-3DOF-CT-L    | 2x        | Plăci de legătură                                 |


---

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

## Compilare și upload
TODO

## ETC



## Progres 
## Progres echipă

| Nr. | Etapă                         | Descriere scurtă                                  | Status | Data finalizării |
|-----|-------------------------------|--------------------------------------------------|--------|------------------|
| 1 | Verificare componente          | Inventarierea pieselor și verificarea integrității | ✅ | 12.11.2025       |
| 2 | Montaj mecanic                 | Asamblarea bazei, fixarea motoarelor, șuruburi etc. |  ⏳ |                  |
| 3 | Conectare electronică          | Conectarea controlerului, cabluri, alimentare     |  ❌ |                  |
| 4 | Test inițial mișcare           | Verificarea mișcărilor de bază / cod test         | ❌ |                  |
| 5 | Configurare software           | Instalare librării, upload cod, calibrare         | ❌ |                  |
| 6 | Test final                     | Verificare completă a funcționării robotului      | ❌ |                  |
| 7 | Documentare și imagini         | Scriere README, poze, diagrame, linkuri utile     | ❌ |                  |
| 8 | Prezentare finală              | Demonstrație funcțională în laborator             | ❌ |                  |

Legenda status:  
✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput
