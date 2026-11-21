#include <iostream>
#include "macros.h"

using namespace std;

#ifndef Z
#define Z 7
#endif

int main()
{
    double x;               // значення вводить користувач
    double z = Z;           // z береться з макровизначення
    double w;               // результат

    cout << "Z (macro) = " << Z << endl;
    cout << "x = "; cin >> x;

#if (Z > 5) && (Z < 10)
    // перша гілка: 5 < z < 10
    cout << "Compiled branch: 5 < z < 10" << endl;
    w = MAX(x, z) * MIN(x + z, x * z);
#else
    // друга гілка:  z <= 5 або z >= 10
    cout << "Compiled branch: z <= 5 або z >= 10" << endl;
    w = SQR(MIN(ABS(x - z), z));
#endif

    PRINT(w);
    return 0;
}