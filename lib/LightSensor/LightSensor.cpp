#include "LightSensor.h"

LightSensorClass::LightSensorClass(){}
LightSensorClass::~LightSensorClass(){}

int LightSensorClass::getRawValue(){
  int value = analogRead(A0);
  return value;
}

int LightSensorClass::getAveragedValue(int8_t times){
  int average;
  for (size_t i = 0; i < times; i++) {
    average += analogRead(A0);
  }
  return average/times;
}

LightSensorClass LightSensor;
