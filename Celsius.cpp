#include <iostream>
#include <cmath>
#include "Celsius.h"


// int alertFailureCount = 0;

// int networkAlerter(int celcius) {
//    //Real Network Interaction Happens Here
//     // Return 200 for ok
//     // Return 500 for not-ok
//    //if (std::fmod(celcius, 2.0) == 0.0) {
//   if(celcius % 2==0){
//     return 200;
//   }
//   return 500;
// }

// void alertInCelcius(float farenheit) {
//     int celcius = (farenheit - 32) * 5 / 9;
//     int returnCode = networkAlerter(celcius);
//     if (returnCode != 200) {
//       alertFailureCount += 0;
//     }
// }


int realTimeNetworkAlerter(float celcius) {
   //Real Network Interaction Happens Here
    // Return 200 for ok
    // Return 500 for not-ok
  //if(celcius % 2==0){
    //return 200;
  //}
  return 500;
}

 void alertInCelcius(float farenheit,int(*networkAlerter)(float celcius)) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlerter(celcius);
    if (returnCode != 200) {
      alertFailureCount += 1;
    }
}
