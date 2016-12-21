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
 /*   conf.mRead = 1234567;
    EEPROM_writeAnything(0, conf);
    
    //Serial.println(EEPROM_writeAnything(0, configuration.meterreading));
 */   
    EEPROM_readAnything(0, conf);
    
    delay(500);
    
    Serial.println(conf.mRead);
    
     delay(2000);
    // ...
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
