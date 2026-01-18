#include <PinChangeInt.h>
#include <PinChangeIntConfig.h>
#include <EEPROM.h>
#include <fuzzy_table.h>
#include <PID_Beta6.h>
#include <MotorWheel.h>
#include <Omni4WD.h>

// --- Configurare Hardware ---
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
  TCCR1B=TCCR1B&0xf8|0x01;    
  TCCR2B=TCCR2B&0xf8|0x01;    
    

  Omni.PIDEnable(0.31,0.01,0,10);
}

void loop() {
  int speed = 200;       
  int duration = 2000;   
  

  Omni.setCarAdvance(speed);
  Omni.delayMS(duration); 

  Omni.setCarStop(); 
  Omni.delayMS(1000); 

  Omni.setCarBackoff(speed);
  Omni.delayMS(duration); 

  Omni.setCarStop(); 
  Omni.delayMS(1000); 
}