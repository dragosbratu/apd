
# Proiect: Asamblarea și documentarea roboților

  

## Descriere generală

  

Scopul proiectului este asamblarea și documentarea robotului din laborator, utilizand GitHub pentru colaborare și versionare.

  

Robotul utilizat este:
 [Lynxmotion SES-V2 Robotic Arm (3 DoF) w/ Smart Servos Kit](https://eu.robotshop.com/products/lynxmotion-lss-3-dof-robotic-arm-kit)
  


# Proiect: Asamblarea Lynxmotion SES-V2 Robotic Arm (3 DoF)

  

## Echipa

- Nume echipă: SamsungWhirlpoolTV

- Moto Echipa: Nu ne chemati, nici noi nu stim:D
 
      Baduceanu Daniel
      Birladeanu Denis
      Cojocaru Gabriel
      Motoasca Sebastian
      Nita Robert
      

## Descriere generală

Scopul proiectului este asamblarea și testarea robotului Lynxmotion LSS 3 DoF Arm, în cadrul laboratorului APD.

Am utilizat robotul: Lynxmotion SES-V2 Robotic Arm (3 DoF) ([https://eu.robotshop.com/products/lynxmotion-lss-3-dof-robotic-arm-kit](https://eu.robotshop.com/products/lynxmotion-lss-3-dof-robotic-arm-kit))

  

---

# Componente Lynxmotion SES-V2 Robotic Arm (3 DoF)

| Nr | Imagine | Componentă | Cod/Denumire | Cantitate | Observații |
|:--:|:---:|:---|:---|:--:|:---|
| **A** | | **Kituri & Motoare** | | | |
| 1 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-servos/ses-lynxmotion-smart-servo/WebHome/LSS-ST1-HORNS.PNG" width="100"> | Servo Inteligente | `LSS-ST1` | 3 | LSS Standard |
| 2 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/lss-base-rotate/lss-base-rotate-g10-assembly/WebHome/LSS-BR-KT-Ghost.PNG" width="100"> | Kit Rotire Bază | `LSS-BR-KT` | 1 | Base Rotate Kit |
| 3 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/ses-v2-arms/ses-v2-mini-gripper-rc/WebHome/SES-MG-KT.PNG" width="100"> | Kit Mini Gripper | `SES-MG-KT` | 1 | Mini Gripper Kit |
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
| 33 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-nuts/WebHome/SLN-03.PNG" width="100"> | Piulițe | `SLN-03` | 8 | M3 Locknut |
| 34 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-screws/WebHome/PHTS-01.PNG" width="100"> | Autofiletant #2 | `PHTS-01` | 15 | #2 x 1/4" |
| 35 | <img src="https://wiki.lynxmotion.com/info/wiki/lynxmotion/download/servo-erector-set-system/ses-mechanics/ses-washers/WebHome/SW-04.png" width="100"> | Șaibe | `SW-04` | 26 | 3 x 5.6mm |

---


## Asamblare pas cu pas

poze (CJ)

  

---

  


## Configurare software

- Platformă: LSS FlowArm (Windows)

- Exemple de rulare: https://youtube.com/shorts/_G3lMXUCUkE?si=kFqkilaSGQVpvdnp

  

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
|  4 |  Test inițial mișcare  |      Verificarea mișcărilor de bază / cod test     |    ⏳   |
|  5 |  Configurare software  |      Instalare librării, upload cod, calibrare     |    ⏳   |
|  6 |       Test final       |    Verificare completă a funcționării robotului    |    ⏳   |
|  7 | Documentare și imagini |    Scriere README, poze, diagrame, linkuri utile   |    ✅   |
|  8 |    Prezentare finală   |        Demonstrație funcțională în laborator       |    ⏳   |
  

Legenda status:

✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput
