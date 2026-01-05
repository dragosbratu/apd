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
Asamblarea robotului 4WD Omni-Directional începe cu pregătirea spațiului de lucru și verificarea componentelor din kit, pentru a ne asigura că toate piesele necesare sunt prezente. Șasiul din aluminiu se poziționează pe masă și se fixează elementele structurale astfel încât cadrul să fie stabil. Următorul pas este montarea motoarelor DC cu encoder în locașurile dedicate din șasiu, având grijă ca axele să fie orientate spre exterior și să nu existe joc mecanic. După fixarea lor, se montează roțile omni pe fiecare ax, acestea fiind prinse ferm și verificate manual pentru a se roti liber atât normal, cât și lateral.
![enter image description here](https://github.com/dragosbratu/apd/blob/50138bd6e5674b997c9494053641db3b6fa8f878/13.jpeg)
După ce partea mecanică este completă, se trece la electronica robotului. Placa Arduino se fixează pe șasiu, iar peste ea se montează placa de expansiune IO, care va permite conectarea tuturor motoarelor. Motoarele și encoderele sunt conectate la conectorii corespunzători de pe placă, cu atenție la polaritate și ordine. Ulterior, se configurează alimentarea robotului, conectând bateria la sistem și verificând că tensiunile sunt corecte.
![enter image description here](https://github.com/dragosbratu/apd/blob/5dc46374088c6fcb5b964e0a95e5e5be5dd7ffb1/14.jpeg)
Înainte de prima pornire se face o verificare finală a șuruburilor, cablurilor și stabilității structurii. Arduino se conectează la computer prin USB, se încarcă programul de test și robotul este testat pentru mișcare înainte, înapoi, lateral și rotație pe loc. Dacă apar inversări de direcție, acestea se corectează din conexiuni sau din cod. După aceste verificări, robotul este complet funcțional și pregătit pentru testare și utilizare.

## Configurare software
Configurarea software a robotului 4WD Omni-Directional s-a realizat în **Visual Studio Code**, folosind extensiile dedicate pentru Arduino / PlatformIO, ceea ce permite dezvoltarea structurată a proiectului, gestionarea dependențelor și încărcarea rapidă a codului pe placă. Mediul a fost configurat astfel încât placa Arduino 328 să fie recunoscută automat iar compilatorul să folosească setările corecte pentru frecvența de lucru de 16 MHz și arhitectura AVR.

În prima etapă a fost inițializat proiectul și definită configurația plăcii, portului serial și vitezei de comunicație. Acest lucru este important deoarece, fără selectarea corectă a plăcii și a portului, încărcarea nu este posibilă. În plus, baud rate-ul trebuie să fie corespunzător pentru debugging (de obicei 9600 sau 115200), astfel încât eventualele mesaje trimise prin Serial Monitor să poată fi analizate în timpul testelor.

Platforma software se bazează pe librării specializate pentru roboți omni-direcționali. Librăria **MotorWheel** se ocupă de controlul la nivel de motor individual (semnale PWM, sens de rotație, citirea encoderelor), în timp ce **Omni4WD** gestionează mișcarea holonomică la nivel de robot complet. Practic, dezvoltatorul nu mai trebuie să calculeze manual viteza fiecărei roți pentru fiecare direcție, deoarece librăria face conversia dintre vectorul de mișcare dorit și valorile PWM pentru fiecare motor. Acest lucru este extrem de important pentru stabilitatea și precizia deplasării.

Un alt aspect tehnic important este utilizarea encoderelor motoarelor și a întreruperilor (prin librăriile PinChangeInt). În funcție de configurația hardware, acestea permit controlul în buclă închisă (feedback), adică robotul poate menține viteza stabilă și constantă chiar dacă sarcina sau suprafața de rulare se schimbă. De asemenea, codul configurează timerele PWM (TCCR0B, TCCR1B), fapt esențial deoarece robotul are nevoie de frecvență corectă pentru funcționarea fluidă a motoarelor și pentru evitarea vibrațiilor sau oscilațiilor nedorite.

După configurarea mediului, includerea librăriilor și setarea pinilor conform conexiunilor reale dintre Arduino, shield și motoare, proiectul a fost compilat și încărcat pe placă direct din Visual Studio Code. A urmat etapa de testare software, unde au fost verificate funcțiile de bază: pornire motoare, direcții corecte pentru fiecare roată, deplasare înainte/înapoi, lateral și rotație pe loc. Testele au confirmat funcționarea corectă a hardware-ului și validitatea configurației software.

Acest fragment de cod reprezintă programul principal folosit pentru controlul robotului 4WD Omni-Directional. Codul utilizează librăriile MotorWheel și Omni4WD pentru a controla fiecare roată individual și pentru a realiza mișcări holonomice. Sunt definite cele patru motoare, se configurează temporizatoarele pentru semnalul PWM, iar în funcția `loop()` robotul execută o serie de mișcări de test: deplasare înainte, lateral stânga/dreapta și rotație în ambele sensuri.

    #include <MotorWheel.h>
    #include <Omni4WD.h>
    #include <PinChangeInt.h>
    #include <PinChangeIntConfig.h>
   
    MotorWheel wheel1(9, 8, 6, 7, &irq1);
    MotorWheel wheel2(10, 11, 14, 15, &irq2);
    MotorWheel wheel3(16, 17, 18, 19, &irq3);
    MotorWheel wheel4(3, 2, 4, 5, &irq4);
    
    Omni4WD Omni(&wheel1, &wheel2, &wheel3, &wheel4);
    
    void setup() {
        // Configurare timere pentru PWM
        TCCR0B = TCCR0B & 0xf8 | 0x01;
        TCCR1B = TCCR1B & 0xf8 | 0x01;
    
        Omni.setCarStop();
    }
    
    void loop() {
        Omni.setCarAdvance(100);
        delay(2000);
    
        Omni.setCarLeft(100);
        delay(2000);
    
        Omni.setCarRight(100);
        delay(2000);
    
        Omni.setCarRotateLeft(100);
        delay(1500);
    
        Omni.setCarRotateRight(100);
        delay(1500);
    
        Omni.setCarStop();
        delay(1500);
    }
Acest cod este utilizat pentru testarea inițială a robotului și confirmă că toate cele patru roți reacționează corect și sincronizat. În urma rulării lui, robotul demonstrează capacitatea de deplasare în toate direcțiile și rotație pe loc, validând atât configurarea software, cât și funcționarea corectă a hardware-ului.
Puteăți urmări deplasarea robotului in acest [video](https://www.youtube.com/watch?v=HBdZzmTGeaI).

# Principiul de funcționare
Robotul 4WD Omni-Directional utilizează patru roți omni de 100 mm, fiecare având role perpendiculare pe circumferința principală. Acest tip de roată permite robotului să se deplaseze nu doar înainte și înapoi, ca un robot clasic (non-holonomic), ci și lateral sau diagonal, fără a fi nevoie să își schimbe orientarea. Astfel robotul devine **holonomic**, având control complet pe axele X, Y și rotație.

Fiecare roată este acționată de un motor DC echipat cu encoder. Encoderele oferă feedback despre viteză și rotație, permițând control mai precis și stabil, în special atunci când se folosesc algoritmi de reglare (PID). Controlul mișcării se realizează prin modificarea vitezei și direcției individuale a fiecărui motor. Pentru mișcare înainte toate roțile se rotesc în același sens, pentru mișcare laterală roțile au sensuri diferite, iar pentru rotație pe loc perechile de roți se rotesc în sens opus.

La nivel software, librăria **Omni4WD** transformă comenzile de deplasare în comenzi individuale pentru motoare. Astfel, utilizatorul lucrează la nivel de „robot” (“mergi înainte”, “rotație stânga”), iar librăria calculează intern vitezele fiecărei roți.

    // mișcare înainte
    Omni.setCarAdvance(120);
    
    // mișcare lateral dreapta
    Omni.setCarRight(120);
    
    // rotație pe loc
    Omni.setCarRotateLeft(100);   
Aceste funcții arată clar principiul: nu controlăm manual fiecare motor, ci dăm comenzi „logice”, iar librăria se ocupă de calculul cinematicii pentru robotul holonomic.

# Arhitectura sistemului
Arhitectura sistemului robotului 4WD Omni-Directional este bazată pe o colaborare directă între platforma hardware și structura software dezvoltată. Hardware-ul asigură partea fizică de acționare – motoarele, roțile omni și encoderele –, în timp ce software-ul gestionează logica mișcării și transformă comenzile abstracte în acțiuni reale. Placa Arduino reprezintă elementul central al sistemului, fiind responsabilă cu interpretarea codului încărcat și transmiterea semnalelor de control către fiecare motor prin intermediul plăcii IO Expansion. Astfel, fiecare comandă scrisă în codul sursă are un corespondent direct într-o acțiune fizică a robotului.

La nivel software, librăria Omni4WD controlează comportamentul robotului ca sistem holistic. Atunci când în program se apelează funcții precum `setCarAdvance()`, `setCarLeft()` sau `setCarRotateLeft()`, acestea nu acționează direct o singură roată, ci calculează automat viteza și direcția potrivite pentru fiecare dintre cele patru motoare. Informațiile sunt apoi convertite în semnale PWM și semnale logice de direcție, care sunt trimise prin pinii Arduino către fiecare modul MotorWheel. În același timp, encoderele montate pe motoare trimit impulsuri înapoi către microcontroler, permițând sistemului să cunoască numărul de rotații și viteza reală, menținând astfel mișcarea stabilă și controlată.

În acest fel, software-ul nu doar comandă, ci și „înțelege” comportamentul mecanic al robotului, iar hardware-ul nu doar execută, ci și oferă feedback. Această relație bidirecțională dintre Arduino, librăriile de control și ansamblul mecanic transformă robotul într-un sistem inteligent capabil să se deplaseze precis în orice direcție.

Un exemplu de cod care reflectă această arhitectură este inițializarea sistemului Omni4WD, unde fiecare motor fizic este legat explicit de o instanță software:

    MotorWheel wheel1(9, 8, 6, 7, &irq1);
    MotorWheel wheel2(10, 11, 14, 15, &irq2);
    MotorWheel wheel3(16, 17, 18, 19, &irq3);
    MotorWheel wheel4(3, 2, 4, 5, &irq4);
    
    Omni4WD Omni(&wheel1, &wheel2, &wheel3, &wheel4);

Aceste linii de cod reprezintă punctul în care arhitectura software „se conectează” la arhitectura hardware: fiecare obiect `MotorWheel` corespunde unui motor real, fiecare pin declarat este o conexiune fizică pe placă, iar instanța `Omni4WD` devine controllerul general care coordonează întregul ansamblu mecanic.


# Conexiuni hardware și schema electrică
Conexiunile hardware sunt esențiale pentru funcționarea corectă a platformei. Arduino și placa IO Expansion acționează ca interfață între motoare, encodere și alimentare. Fiecare motor este conectat cu:

-   doi pini pentru control (PWM + direcție)
-   doi pini pentru encoder (semnale A și B)
-   alimentare

Alimentația motoarelor este separată de alimentația logică Arduino, pentru a evita fluctuațiile care ar putea resetă microcontrolerul. IO Expansion Board distribuie tensiunea către motoare și semnalele de control către Arduino.

Encoderele sunt conectate pe pini care suportă întreruperi, motiv pentru care se folosesc librăriile **PinChangeInt**. Acest lucru permite numărare precisă a impulsurilor chiar și la viteză ridicată.

    // (PWM, DIRECTION, ENCODER_A, ENCODER_B)
    MotorWheel wheel1(9, 8, 6, 7, &irq1);
    MotorWheel wheel2(10, 11, 14, 15, &irq2);
    MotorWheel wheel3(16, 17, 18, 19, &irq3);
    MotorWheel wheel4(3, 2, 4, 5, &irq4);
Aici putem observa un fragment de cod care reflectă conexiunile:
-   fiecare motor are pini de control proprii
-   fiecare encoder are doi pini
-   fiecare motor este declarat explicit
-   apoi toate sunt integrate în sistemul Omni4WD

# Exercițiu: mișcarea robotului în cerc
În cadrul proiectului a fost realizat și un exercițiu practic în care s-a urmărit obținerea unei mișcări circulare a robotului. Scopul a fost observarea modului în care distribuția tracțiunii pe roțile omni influențează traiectoria și verificarea răspunsului mecanic al platformei în condiții ușor „asimetrice”.

Din punct de vedere teoretic, o mișcare circulară regulată se poate obține prin combinarea adecvată a vitezelor celor patru roți, astfel încât rezultanta vectorială a vitezelor să descrie o traiectorie curbată în jurul unui centru fix. În practică, însă, pentru a simplifica experimentul și a pune în evidență efectul controlului diferențiat al roților, s-a adoptat o soluție mai directă: robotul a fost configurat să se deplaseze cu **doar două roți active**, în timp ce celelalte două au fost lăsate neacționate. Această asimetrie generează un moment de rotație în jurul unei axe dinamice, ceea ce face ca robotul să descrie o traiectorie aproximativ circulară.

La nivel de cod, s-a folosit aceeași arhitectură software descrisă anterior, bazată pe librăria `Omni4WD`. Codul de control pentru acest exercițiu a fost redus la o comandă simplă de deplasare menținută constant, iar configurația hardware (două roți active și două roți pasive) a determinat apariția mișcării circulare, fără a fi necesare calcule suplimentare în software. Fragmentul de cod utilizat a păstrat logica standard de „avans”, însă comportamentul fizic al robotului a fost modificat de modul în care au fost alocate roțile active.

    #include <MotorWheel.h>
    #include <Omni4WD.h>
    #include <PinChangeInt.h>
    #include <PinChangeIntConfig.h>
    
    // Definirea motoarelor (pin PWM, pin direcție, pin encoder A, pin encoder B)
    MotorWheel wheel1(9, 8, 6, 7, &irq1);
    MotorWheel wheel2(10, 11, 14, 15, &irq2);
    MotorWheel wheel3(16, 17, 18, 19, &irq3);
    MotorWheel wheel4(3, 2, 4, 5, &irq4);
    
    // Interfața Omni4WD asociată celor 4 roți
    Omni4WD Omni(&wheel1, &wheel2, &wheel3, &wheel4);
    
    void setup() {
        // Configurare timere pentru PWM
        TCCR0B = TCCR0B & 0xf8 | 0x01;
        TCCR1B = TCCR1B & 0xf8 | 0x01;
    
        // Robot oprit la inițializare
        Omni.setCarStop();
    
        // aici, la nivel hardware, sunt alimentate/folosite doar două roți,
        // celelalte două fiind lăsate pasive (neconectate / dezactivate)
    }
    
    void loop() {
        // Comandă de avans constantă; din cauza faptului
        // că doar două roți sunt active, robotul descrie o traiectorie circulară
        Omni.setCarAdvance(120);
        delay(20);
    }


La finalul exercițiului, robotul a reușit să descrie o traiectorie circulară stabilă, demonstrând influența semnificativă a distribuției tracțiunii asupra direcției de deplasare. Pentru a evidenția clar rezultatul, a fost realizată și o filmare demonstrativă, care surprinde vizual comportamentul robotului în timpul executării mișcării circulare.
![enter image description here](https://github.com/dragosbratu/apd/blob/69aae17c5c22ade49e3dcd5b618dd69f0fc4784f/15.mp4)

## Progres echipă

| Nr. | Etapă                         | Descriere scurtă                                  | Status | Data finalizării |
|-----|-------------------------------|--------------------------------------------------|---------|------------------|
| 1 | Verificare componente          | Inventarierea pieselor și verificarea integrității | ✅ | 12.11.2025 |
| 2 | Montaj mecanic                 | Asamblarea bazei, fixarea motoarelor, șuruburi etc. |  ✅ | 12.11.2025 |
| 3 | Conectare electronică          | Conectarea controlerului, cabluri, alimentare     |  ✅ | 19.11.2025 |
| 4 | Test inițial mișcare           | Verificarea mișcărilor de bază / cod test         | ✅ | 26.11.2025 |
| 5 | Configurare software           | Instalare librării, upload cod, calibrare         | ✅ | 03.12.2025 |
| 6 | Test final                     | Verificare completă a funcționării robotului      | ✅ | 10.12.2025 |
| 7 | Documentare și imagini         | Scriere README, poze, diagrame, linkuri utile     | ✅ | 17.12.2025 |
| 8 | Prezentare finală              | Demonstrație funcțională în laborator             | ✅ | 14.01.2026 |

Legenda status:  
✅ = Finalizat  ⏳ = În desfășurare  ❌ = Neînceput
