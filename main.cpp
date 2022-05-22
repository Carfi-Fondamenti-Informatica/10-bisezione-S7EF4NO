#include <iostream>
#include "cmath"
#include "iomanip"

using namespace std;

float funzione(float c)
{
    float y;
    y = (c*c * cos(c)) + 1;
    return y;
}

int main() {

    float a, b,err,x;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    } while (funzione(a) * funzione(b) >= 0);

    do {
        x = (a + b) / 2;
        if (funzione(x) == 0) {
            cout<<int(x*10000.0)/10000.0<<endl;
            //return 0;
        } else {
            if (funzione(a) * funzione(x) < 0) {
                b = x;
            } else {
                a = x;
            }

             err = abs((b - a) / 2);

        }
    } while(err>=1e-6);
    cout<<int(x*10000.0)/10000.0<<endl;
    return 0;
}
