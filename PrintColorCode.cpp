#include <iostream>
#include <assert.h>
#include "PrintColorCode.h"

// This has a error in the code
// int printColorMap() {
//     const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
//     const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
//     int i = 0, j = 0;
//     for(i = 0; i < 5; i++) {
//         for(j = 0; j < 5; j++) {
//             std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
//         }
//     }
//     return i * j;
// }

//After refactoring the above code, because the std cout is a tightly coupled dependency
void printOnTerminal(int colorCode,const char* majorColor,const char* mincorColor){
    std::cout<<colorCode<<"|"<<majorColor<<"|"<<minorColor<<std::endl;
}
int printColorMap(void (*printer)(int colorCode,const char* majorColor,const char* mincorColor)) {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printer(i * 5 + j , majorColor[i], minorColor[i] );
            //std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}
