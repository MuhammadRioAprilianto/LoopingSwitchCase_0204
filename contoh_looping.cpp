#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{//deklarasi variable
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //perulangan dengan FOR

    cout << "perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang " << endl; 
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;
    
    cout << "perulangan for pencacah turun" << endl;
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang " << endl; 
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;
}
