#include "mpu_6050.h"

void setup(){
  Serial.begin(115200);
  define_mpu_6050(); //Define mpu and delay 100      
}

void loop(){
    angle_meajure();
    Serial.println(coordArray[0]);
    Serial.println(coordArray[1]);
    Serial.println("__________________________");
}
