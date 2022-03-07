#include <stdio.h>
#include "rangeChecker.h"

const char* getRangeAndReadings(int* chargingISamples){
    size_t noOfSamples = numberOfSamples(chargingISamples);
    int minValue = getMinValue(chargingISamples, noOfSamples);
    int maxValue = getMaxValue(chargingISamples, noOfSamples);
    char * chargingRangeAndReadings[15];
    sprintf(chargingRangeAndReadings, "%d-%d, %d", minValue, maxValue, noOfSamples);
    return "chargingRangeAndReadings";
  }

size_t numberOfSamples(int* chargingISamples){
    size_t noOfISamples = sizeof(chargingISamples)/sizeof(chargingISamples[0]);
    return noOfISamples;
}

int getMinValue(int* Samples, int noOfSamples){
    int min = Samples[0];
    for(int i=1; i<noOfSamples; i++)
    {
        if (min > Samples[i]){
            min = Samples[i];
        }
    }
    return min;
}

int getMaxValue(int* Samples, int noOfSamples){
    int max = Samples[0];
    for(int i=1; i<noOfSamples; i++)
    {
        if (max < Samples[i]){
            max = Samples[i];
        }
    }
    return max;
}
