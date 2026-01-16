
# Proiect: Asamblarea și documentarea robotului 4WD Omni-Directional Rover




## Echipa
- Nume echipă: 5Stars
- Moto Echipa: Nu ti-l asambleaza nimeni cum ti-l asamblam noi
- Membrii: 
1. Bizon Stefan
2. Cambur Ioana-Maria
3. Dragan Ionut-Razvan
4. Negulescu Ana
5. Niculae Maria-Cristina 

## Descriere generală
Scopul proiectului este asamblarea și testarea robotului 4WD Omni-Directional Rover, în cadrul laboratoarelor de APD.  
Documentația include pașii de montaj, configurare, testare și eventuale îmbunătățiri aduse.

---

## Checklist componente


Exemplu:
| Nr. | Componentă | Cod / Denumire | Cantitate | Accesorii
|-----|-------------|----------------|------------|-------------|
| 1 | 100mm Plastic Omni Wheel| 14041 | 4 |  |
| 2 | Screws Accesories for 100mm Omni Wheels| 80020 | 1 |  |
| 3 | Plug Converter| 76008 | 1 | (EU,US,AU,UK Standard) |
| 4 | Hex Screwdrivers | 95002 | 1 | 2mm,3mm,4mm,5mm |
| 5 | Spanner | 95003 | 1 | 8-10mm |
| 6 | NI-MH Battery Charger, 100mA| 76007 | 1 |  |
| 6 | Arduino USB Cable| 71005 | 1 |  |
---

## Asamblare pas cu pas
La partea de asamblare, ne-am folosit de surubelnita, saibe si suruburuile din kit pentru a asambla cele 4 roti pe scheletul masinii.
### Poze:

![enter image description here](https://cdn.discordapp.com/attachments/1440978772122669067/1461696693304299573/5e6c48f6-7644-415e-85fb-f4f19e40ce75.png?ex=696b7ea0&is=696a2d20&hm=f8592340047d205e2dc3e686af9f190bad6147055ec3dc0addfda39f073f9690&)
![`enter image description here`](https://cdn.discordapp.com/attachments/1440978772122669067/1461686108189495326/29b02a2a-72c8-462d-86d2-e55831b75170.png?ex=696b74c5&is=696a2345&hm=6ecedcef7d515dab44b3b1a8a85a6dc5421af82e7793477b8c43c7f7d15c1717&)


![enter image description here](https://media.discordapp.net/attachments/1440978772122669067/1461686135528095848/34a50ad2-be38-4e01-b7ce-111a9fe57a07.png?ex=696b74cb&is=696a234b&hm=b742d092f166da2a6934622ba423240aba5172a07cbc56d0dc15e64e432fb131&=&format=webp&quality=lossless&width=698&height=930)
---



## Configurare software
- Platformă: Arduino IDE
- Librării folosite: Arduino AVR Boards
- Exemple de rulare:
```C
    #include <PinChangeInt.h> 
    #include <PinChangeIntConfig.h> 
    #include <EEPROM.h> 
    #include <fuzzy_table.h> 
    #include <PID_Beta6.h> 
    #include <MotorWheel.h> 
    #include <Omni4WD.h> 
    #include <fuzzy_table.h> 
    #include <PID_Beta6.h> 
    
    irqISR(irq1,isr1); 
    MotorWheel wheel1(5,4,12,13,&irq1); 
    irqISR(irq2,isr2); 
    MotorWheel wheel2(6,7,14,15,&irq2); 
    irqISR(irq3,isr3); 
    MotorWheel wheel3(9,8,16,17,&irq3); 
    irqISR(irq4,isr4); 
    MotorWheel wheel4(10,11,18,19,&irq4);
    irqISR(irq1,isr1); 
    MotorWheel wheel1(3,2,4,5,&irq1); 
    irqISR(irq2,isr2); 
    MotorWheel wheel2(11,12,14,15,&irq2); 
    irqISR(irq3,isr3); 
    MotorWheel wheel3(9,8,16,17,&irq3); 
    irqISR(irq4,isr4); 
    MotorWheel wheel4(10,7,18,19,&irq4); 
    Omni4WD Omni(&wheel1,&wheel2,&wheel3,&wheel4); 
     
     void setup() { 
     
    Omni.PIDEnable(0.31,0.01,0,10);  
    int speed = 300;  
    long distance = 1000;  
    long time_ms = (distance_ 1000L) / speed;
    Omni.setCarAdvance(speed);  
    Omni.delayMS(1000);
    Omni.setCarStop(4000); 
    } 
    
    void loop() {  
    }
```

# Compilare și upload
1.  Instalarea Arduino IDE
Am descarcat si instalat ultima versiune de pe site-ul oficial Arduino. Am selectat placa corecta (Arduino Duemilanove) din meniul Tools > Board.
2. Conectarea robotului 
Am conectat placa microcontroller la PC cu un cablu USB. În Arduino IDE, în Tools > Port, am selectat portul serial USB corespunzător. 
3. Încărcarea codului sursă
Am deschis fișierele de cod sursă incluse în pachetul kit-ului.
4. Compilare: 
Apasam pe butonul Verify/Compile. IDE-ul a analizat codul, a rezolvat dependențele și a generat un fișier binar (hex). Erorile de sintaxă sau de bibliotecă  au foist afișate dacă erau probleme.
5. Upload
După o compilare fără erori, inainte de a da Upload (săgeată →) pentru a transfera programul pe microcontroller, a trebuit sa scoatem shield-ul de pe placa Arduino, deoarece acesta bloca upload-ul. Mesajele din IDE au indicat succesul încărcării, dupa care am instalat shield-ul inapoi si am pornit robotelul.

![robotul cu shiel-dul scos](https://media.discordapp.net/attachments/1440978772122669067/1461686470476562517/598c9731-095e-4420-967e-cee3092c8207.png?ex=696b751b&is=696a239b&hm=328779e29d25b1ec64cd03dfd4b5cba11995a0b6a025de459d024f75e7ab4a76&=&format=webp&quality=lossless&width=698&height=930)

Robotul fara shield


![enter image description here](https://cdn.discordapp.com/attachments/1440978772122669067/1461696357751590998/image.png?ex=696b7e50&is=696a2cd0&hm=d387a7895583ec73d728e4aa83a43f7cecf3901c9359b3779fbab286b0d50f82&)

cod de pe laptop
## Progres echipă

| Nr. | Etapă                         | Descriere scurtă                                  | Status | Data finalizării |
|-----|-------------------------------|--------------------------------------------------|---------|------------------|
| 1 | Verificare componente          | Inventarierea pieselor și verificarea integrității | ✅ | 12.11.2025 |
| 2 | Montaj mecanic                 | Asamblarea bazei, fixarea motoarelor, șuruburi etc. |  ✅ | 12.11.2025 |
| 3 | Conectare electronică          | Conectarea controlerului, cabluri, alimentare     |  ✅ | 19.11.2025 |
| 4 | Test inițial mișcare           | Verificarea mișcărilor de bază / cod test         | ✅ | 03.11.2025 |
| 5 | Configurare software           | Instalare librării, upload cod, calibrare         | ✅ |03.11.2025  |
| 6 | Test final                     | Verificare completă a funcționării robotului      | ✅ | 03.11.2025 |
| 7 | Documentare și imagini         | Scriere README, poze, diagrame, linkuri utile     | ✅ | 27/28.12.2025 |
| 8 | Prezentare finală              | Demonstrație funcțională în laborator             | ✅ | 03.12.2025 |

Legenda status:  
✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput


## Link-uri utile
[Manual Instructiuni 4WD Omni Directional Rover](chrome-extension://efaidnbmnnnibpcajpcglclefindmkaj/https://cdn.robotshop.com/media/n/nex/rb-nex-06/pdf/4wd_omni-directional_manual.pdf?_gl=1*16cu802*_gcl_au*MTMyMjM0OTQxOS4xNzY4NTYxMTc3*_ga*MTg3MzA0NjM0NS4xNzY4NTYxMTc4*_ga_FXHVC4EYRV*czE3Njg1NjExNzckbzEkZzAkdDE3Njg1NjExNzckajYwJGwwJGgw)

[Manual pentru verificare placa Arduino Duemilanove](chrome-extension://efaidnbmnnnibpcajpcglclefindmkaj/https://cdn.robotshop.com/media/n/nex/rb-nex-06/pdf/arduino-io-expansion-10008.pdf?_gl=1*48ylmq*_gcl_au*MTMyMjM0OTQxOS4xNzY4NTYxMTc3*_ga*MTg3MzA0NjM0NS4xNzY4NTYxMTc4*_ga_FXHVC4EYRV*czE3Njg1NjI5OTYkbzIkZzAkdDE3Njg1NjI5OTYkajYwJGwwJGgw)

[Instalare Arduino](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)

