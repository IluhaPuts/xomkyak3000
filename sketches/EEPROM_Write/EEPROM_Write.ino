#include <EEPROM.h>

//ВНИМАНИЕ! ВСАВЛЯТЬ В VOID SETUP()
Serial.begin(9600);
EEPROM.write(1,животное); //См docs/saves.md
Serial.println("1_Zapisano");
EEPROM.write(2,время выдачи корма); //См docs/saves.md
Serial.println("2_Zapisano");
EEPROM.write(3,температура); //См docs/saves.md
Serial.println("3_Zapisano");
