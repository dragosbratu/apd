#include <PinChangeInt.h>
#include <PinChangeIntConfig.h>
#include <EEPROM.h>
#include <fuzzy_table.h>
#include <PID_Beta6.h>
#include <MotorWheel.h>
#include <Omni4WD.h>

#include <fuzzy_table.h>
#include <PID_Beta6.h>

/*

            \                    /
   wheel1   \                    /   wheel4
   Left     \                    /   Right
    
    
                              power switch
    
            /                    \
   wheel2   /                    \   wheel3
   Right    /                    \   Left

 */

/*
irqISR(irq1,isr1);
MotorWheel wheel1(5,4,12,13,&irq1);

irqISR(irq2,isr2);
MotorWheel wheel2(6,7,14,15,&irq2);

irqISR(irq3,isr3);
MotorWheel wheel3(9,8,16,17,&irq3);

irqISR(irq4,isr4);
MotorWheel wheel4(10,11,18,19,&irq4);
 */

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
	//TCCR0B=TCCR0B&0xf8|0x01;    // warning!! it will change millis()
	TCCR1B=TCCR1B&0xf8|0x01;    // Pin9,Pin10 PWM 31250Hz
	TCCR2B=TCCR2B&0xf8|0x01;    // Pin3,Pin11 PWM 31250Hz
    
	Omni.PIDEnable(0.31,0.01,0,10);
    
}

void loop() {

  // -------------------------------
  // 1 MERGE ÎNAINTE
  // -------------------------------
  Omni.setCarAdvance(0);
  Omni.setCarSpeedMMPS(200, 500);
  Omni.delayMS(1500);
  Omni.setCarSlow2Stop(300);
  Omni.delayMS(500);


  // -------------------------------
  // 2 CERC STÂNGA
  // -------------------------------
  Omni.setCarMove(200, 0, 3.0);
  Omni.delayMS(2000);
  Omni.setCarSlow2Stop(300);
  Omni.delayMS(400);




  // -------------------------------
  // 3 MERGE ÎNAINTE A DOUA OARĂ
  // -------------------------------
  Omni.setCarAdvance(0);
  Omni.setCarSpeedMMPS(200, 500);
  Omni.delayMS(1500);
  Omni.setCarSlow2Stop(300);
  Omni.delayMS(500);


  // -------------------------------
  // 4 CERC DREAPTA
  // -------------------------------
  Omni.setCarMove(200, 0, -3.0);
  Omni.delayMS(2000);
  Omni.setCarSlow2Stop(300);
  Omni.delayMS(400);



  // -------------------------------
  // 5 ÎNTOARCERE LA START
  // -------------------------------
  Omni.setCarBackoff(0);
  Omni.setCarSpeedMMPS(200, 500);
  Omni.delayMS(3000);
  Omni.setCarSlow2Stop(400);

  Omni.delayMS(2000);
}