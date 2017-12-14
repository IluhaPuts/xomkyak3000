#include <EEPROM.h>

//ВНИМАНИЕ! ВСАВЛЯТЬ В VOID SETUP()
Serial.begin(9600);
Serial.println(EEPROM.read(1));
//EEPROM.read(1)
