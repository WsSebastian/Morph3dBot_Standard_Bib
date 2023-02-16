#ifndef morph3dLibrary_H
#define morph3dLibrary_H

#include "Arduino.h"

class Farbarray
{
private:
    /* data */
public:
    Farbarray(/* args */);
    
};

class Ultraschall
{
private:
    /* data */
public:
    #define SLAVE_ADDR 9
    #define MAX_DISTANCE 260
    int trigger;
    int echo;
    long dauer;
    long entfernung;
    int distance[4];
    int bcount = 0;

    //  Sebastian
    void setupUltraschallPins(int echoPin, int triggerPin);
    void entfernungMessenUltraschallCm();
    void entfernungMessenUltraschallMm();
    void masterDatenEmpfangen();
    void slaveDatenSenden();
    void setUpI2CVerbindung();

    // Armand

    // Tobias
class Wetterstation{
    public:
    int temperatureSensorPin;
    int brightnessSensorPin;
    int temperatureValue;
    int brightnessValue;
    int mappedTemperatureValue;

    Wetterstation(int temperatureSensorPin,int brightnessSensorPin);
    void datenAufnehmen();
    void setUpI2CConnection();
    
}      
};

#endif /* morph3dLibrary_H */
