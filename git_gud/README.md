# Proiect: Asamblarea și documentarea roboților

## Descriere generală

Scopul proiectului este asamblarea și documentarea robotului din laborator, utilizând GitHub pentru colaborare și versionare.

Robotul folosit este:

Lynxmotion SES-V2 Robotic Arm (3 DoF) w/ Smart Servos Kit (https://eu.robotshop.com/products/lynxmotion-lss-3-dof-robotic-arm-kit)


# Proiect: Asamblarea robotului Lynxmotion LSS 3 DoF Arm

## Echipa
- Nume echipă: git_gud
- Moto Echipa: Git commit. Git push. Git Gud.

## Descriere generală
Scopul proiectului este asamblarea și testarea robotului Lynxmotion LSS 3 DoF Arm, în cadrul laboratorului APD.  
Documentația include pașii de montaj, configurare, testare și eventuale îmbunătățiri aduse.

Robotul folosit este:
Lynxmotion SES-V2 Robotic Arm (3 DoF) w/ Smart Servos Kit (https://eu.robotshop.com/products/lynxmotion-lss-3-dof-robotic-arm-kit)

---


# Lista Componente - Lynxmotion LSS 3 DoF Arm

| Nr | Imagine | Componentă | Cod/Denumire | Cantitate | Observații |
|:--:|:---:|:---|:---|:--:|:---|
| **A** | | **Kituri & Motoare** | | | |
| 1 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-base-rotate/lss-base-rotate-g10-assembly/WebHome/LSS-BR-KT-Ghost.PNG" width="100"> | Kit Rotire Bază | `LSS-BR-KT` | 1 | Base Rotate Kit |
| 2 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/ses-v2-mini-gripper-rc/WebHome/SES-MG-KT.PNG" width="100"> | Kit Mini Gripper | `SES-MG-KT` | 1 | Mini Gripper Kit |
| 3 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-servos/ses-lynxmotion-smart-servo/WebHome/LSS-ST1-HORNS.PNG" width="100"> | Servo Inteligente | `LSS-ST1` | 3 | LSS Standard |
| **B** | | **Electronică** | | | |
| 4 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-modules/lss-adapter-board/WebHome/LSS-ADA.png" width="100"> | Adaptor LSS | `LSS-ADA` | 1 | Placă interfață |
| 5 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-modules/lss-2io-board/WebHome/LSS-2IO.PNG" width="100"> | Microcontroler | `LSS-2IO` | 1 | Modul programabil |
| 6 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-modules/lss-5vr/WebHome/LSS-5VR.PNG" width="100"> | Regulator Tensiune | `LSS-5VR` | 1 | Modul 5V |
| 7 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wall-adapters/WebHome/BX-12006000-XT60.PNG" width="100"> | Sursă Alimentare | `BX-12006000-XT60`| 1 | 12V cu XT60 |
| 8 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/USBC-02.PNG" width="100"> | Cablu USB | `USBC-02` | 1 | USB la Mini B |
| 9 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/LSS-C-100.png" width="100"> | Cablu date | `LSS-C-100-S` | 3 | 100mm |
| 10 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/LSS-C-100Y.png" width="100"> | Cablu Y | `LSS-C-150-Y` | 1 | 150mm |
| 11 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/SEA-01.PNG" width="100"> | Extensie Cablu | `SEA-01` | 1 | 6 inch |
| 12 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/SEA-02.PNG" width="100"> | Extensie Cablu | `SEA-02` | 1 | 12 inch |
| **C** | | **Structură** | | | |
| 13 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-01.PNG" width="100"> | Segment Braț #1 | `LSS-3DOF-L-01` | 1 | Link #1 |
| 14 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-02.PNG" width="100"> | Segment Braț #2 | `LSS-3DOF-L-02` | 5 | Link #2 |
| 15 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-03.PNG" width="100"> | Segment Braț #3 | `LSS-3DOF-L-03` | 1 | Link #3 |
| 16 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-04.PNG" width="100"> | Segment Braț #4 | `LSS-3DOF-L-04` | 2 | Link #4 |
| 17 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-05.PNG" width="100"> | Segment Braț #5 | `LSS-3DOF-L-05` | 1 | Link #5 |
| 18 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-link-06.PNG" width="100"> | Segment Braț #6 | `LSS-3DOF-L-06` | 1 | Link #6 |
| 19 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-base.PNG" width="100"> | Placă Bază | `LSS-3DOF-BP` | 1 | Base Plate |
| 20 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-bs.PNG" width="100"> | Suport Spate | `LSS-3DOF-BS` | 1 | Back Support |
| 21 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-ct-s.PNG" width="100"> | Suport Cablu Mic | `LSS-3DOF-CT-S` | 2 | Small Support |
| 22 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/3dof-parts/WebHome/lss-3-dof-ct-l.PNG" width="100"> | Suport Cablu Mare | `LSS-3DOF-CT-L` | 2 | Large Support |
| **D** | | **Suporturi Metalice** | | | |
| 23 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-brackets/WebHome/ASB-28.png" width="100"> | Suport Lat | `ASB-28` | 2 | Single Wide |
| 24 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-brackets/WebHome/ASB-43.PNG" width="100"> | Suport Mini C | `ASB-43` | 1 | Mini C |
| 25 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-electronics/ses-wiring/WebHome/ZT-07in.PNG" width="100"> | Coliere | `ZT-07in` | 4 | Zip Tie |
| 26 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-miscellaneous/WebHome/AHS-EC.PNG" width="100"> | Clips Electronic | `AHS-EC` | 2 | Electronic Clip |
| **E** | | **Șuruburi** | | | |
| 27 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-02.png" width="100"> | Șurub 2-56 1/4" | `PHS-02` | 27 | Imperial |
| 28 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-16.png" width="100"> | Șurub M3 10mm | `PHS-16` | 2 | Metric |
| 29 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-17.PNG" width="100"> | Șurub M3 20mm | `PHS-17` | 4 | Metric |
| 30 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-18.PNG" width="100"> | Șurub M3 30mm | `PHS-18` | 2 | Metric |
| 31 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-19.PNG" width="100"> | Șurub M3 40mm | `PHS-19` | 2 | Metric |
| 32 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHS-05.png" width="100"> | Șurub 2-56 1/2" | `PHS-05` | 12 | Imperial |
| 33 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHTS-01.PNG" width="100"> | Autofiletant #2 | `PHTS-01` | 15 | #2 x 1/4" |
| 34 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-washers/WebHome/SW-04.png" width="100"> | Șaibe | `SW-04` | 26 | 3 x 5.6mm |
| 35 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-nuts/WebHome/SLN-03.PNG" width="100"> | Piulițe | `SLN-03` | 8 | M3 Locknut |
---

## Asamblare pas cu pas

Pașii urmați se pot găsi în documentația robotului: https://wiki.lynxmotion.com/info/wiki/lynxmotion/view/ses-v2/ses-v2-arms/lss-3-dof-arm/3dof-arm-quickstart/

<img width="1934" height="2048" alt="image" src="https://github.com/user-attachments/assets/347e0998-8067-42b2-be09-b0873ded6bab" />

### 1. Servo Setup

* ID-urile unice: **1** (Base), **2** (Shoulder) și **3** (Elbow).

*  **Motor ID 1 (Base):** Am instalat discul de transmisie **LSS-DH** pe axul motorului pentru a permite rotația întregii structuri superioare.

*  **Motor ID 2 (Shoulder):** Am montat suportul metalic tip "U" **ASB-28** pe flanșa motorului, fixat cu 4 șuruburi **PHS-02**.

*  **Motor ID 3 (Elbow):** Am instalat un suport **ASB-28** pentru conexiunea cu segmentul superior și am pregătit axul pentru cuplarea cu suportul gripper-ului.

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/dc7d01f6-4c89-4967-a0af-2fd054446d5e" />

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/fb0ff405-f906-4e44-9604-f350060f465c" />

  

### 2. Base

*  **Montarea** motorului **ID 1** pe placa de mijloc `LSS-BR-M1`impreuna cu placa intermediara `LSS-BR-M2`.

* Instalarea celor 5 distanțiere `AHS-19`.

* Cuplarea horn-ului impreuna cu baza `LSS-3DOF-B`, placa superioara `LSS-BR-T` si placa inferioara `LSS-BR-B`.

*  **Integrarea** microcontrolerului `LSS-2IO-KT` si a regulatorului de tensiune `LSS-5VR-KT`.

<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/791817f9-e1d9-429e-89fb-d22674369140" />


### 3. Preparation

*  **Pregătire Servo Shoulder:** Fixarea segmentului `link-01` pe hornul motorului **ID 2** folosind șuruburi `PHS-02`.

*  **Pregătire Servo Elbow:** Atașarea `link-05` pe horn-ul motorului **ID 3**, pregătind axul pentru restul structurii.

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/27878d11-1e77-4361-a16b-faf3adf02268" />

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/8c729cc8-2afd-450f-b35d-1e940c033829" />

  

### 4. Links

* Interconectarea link-urilor pe motoarele **ID 2** si **ID 3**.

* Strângerea hardware-ului pe întregul lanț, rezultând brațul mecanic complet, gata pentru efectorul final.

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/6b270087-665d-4aff-9ea6-2df3a655e6c6" />

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/e3afb1e8-c9d6-41c9-be05-48d03a924e60" />

  

### 5. Mini Gripper

*  **Asamblarea kit-ului mecanic de prindere**  `SES-MG-KT`.

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/5c94b283-e125-4936-8bc0-f990201983c7" />

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/39f8592b-3061-4c51-bc02-6e271f6d6108" />

  
### 6. Final

* Fixarea cleștelui asamblat la Pasul 5 pe suportul `ASB-43` și cuplarea acestuia direct pe axul motorului **ID 3**.

* Montarea bratului pe placa baza.

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/a6f0eb1c-2231-4ed1-b208-17fca03e6ecd" />


  

### 7. Wiring

* Conectarea adaptorului `LSS-ADA`, a jumperului, microcontrolerului, regulatorului si a sursei cu cabluri `LSS-C-150-Y`, `LSS-C-100-S`, `USBC-02`, `SEA-01` si asigurarea lor cu curele de siguranță `ZT-07in`.

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/aadb52a0-0b94-41b8-8e53-d02d2fee4c28" />

<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/4ef7ec80-2f44-4392-90ba-9fffb56d354f" />


---

## Configurare software

- Platformă: LSS FlowArm (aplicație Windows, control GUI)

<img width="1522" height="869" alt="image" src="https://github.com/user-attachments/assets/abf08df3-1caa-4e56-9fff-d1c28c9b93ef" />

- Exemple de rulare: https://www.youtube.com/watch?v=SLJi2BDQgF8

# Compilare și upload
TODO

# ETC


## Progres 
## Progres echipă

| Nr |          Etapă         |                  Descriere scurtă                  | Status |
|:--:|:----------------------:|:--------------------------------------------------:|:------:|
|  1 |  Verificare componente | Inventarierea pieselor și verificarea integrității |    ✅   |
|  2 |     Montaj mecanic     |   Asamblarea bazei, fixarea motoarelor, șuruburi   |    ✅   |
|  3 |  Conectare electronică |    Conectarea controlerului, cabluri, alimentare   |    ✅   |
|  4 |  Test inițial mișcare  |      Verificarea mișcărilor de bază / cod test     |    ✅   |
|  5 |  Configurare software  |      Instalare librării, upload cod, calibrare     |    ✅   |
|  6 |       Test final       |    Verificare completă a funcționării robotului    |    ⏳   |
|  7 | Documentare și imagini |    Scriere README, poze, diagrame, linkuri utile   |    ✅   |
|  8 |    Prezentare finală   |        Demonstrație funcțională în laborator       |    ⏳   |
  


Legenda status:  
✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput




