#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
main()
{
    // int counter;
    // counter = 1;
    // while (counter < 6)
    // {
    //     printf("%d*", counter);
    //     cout << endl;
    //     cout << "$" << counter << endl;
    //     counter++;
    // }

    int a;
    for (a = 0; a <= 4; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}