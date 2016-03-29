#ifndef __LIGHT_SENSOR_H
#define __LIGHT_SENSOR_H

#include <Arduino.h>

class LightSensorClass{
  public:
    LightSensorClass(); //Constructor
    ~LightSensorClass(); //Deconstructor

    int getRawValue();
    int getAveragedValue(int8_t times);

  private:
    int pAvg;
};

extern LightSensorClass LightSensor;

#endif /* __Light_Sensor_H */
