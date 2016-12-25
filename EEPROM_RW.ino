#include <EEPROM.h>
#include "EEPROMAnything.h"

struct config_t
{
    long mRead;
    //int mode;
} conf;

void setup()
{
    Serial.begin(9600);
//    conf.mRead = 7991206;
//    EEPROM_writeAnything(0, conf);
    
    //Serial.println(EEPROM_writeAnything(0, configuration.meterreading));
    delay(500);
    EEPROM_readAnything(0, conf);
    
    delay(500);
    Serial.print("This is a long: ");
    Serial.println(conf.mRead);
    //char buf[7];
    //sprintf(buf,"%1u",conf.mRead);
    //ltoa(conf.mRead,buf,7);
    String t = String(conf.mRead);
    
     delay(500);
     Serial.print("This is a string: ");
     Serial.println(t);
     String rr = "7991206";
     if(t == rr){
       
       Serial.println("Equal");
     }else Serial.println("Not Equal");
    // ...
    long r = t.toInt();
    Serial.print("This is a long again: ");
    Serial.println(r);
    if(conf.mRead = r){
       
       Serial.println("Equal");
     }else Serial.println("Not Equal");
}
void loop()
{
    // let the user adjust their alarm settings
    // let the user adjust their mode settings
    // ...
/*
    // if they push the "Save" button, save their configuration
    if (digitalRead(13) == HIGH){
        conf.mRead++;
        EEPROM_writeAnything(0, conf.mRead);
    //
   
    }
    
     
        EEPROM_readAnything(0, conf);
        delay(500);
    Serial.println(conf.mRead);
    delay(500);
   */
}
