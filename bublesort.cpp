#include <iostream>
using namespace std;

int a[20];//Deklarasi
int n;

void input () //Input
{
    while (true)
    {
        cout << "Masukan Panjang Array : ";
        cin >> n;
        
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "Error : Maksimal input Array adalah 20\n";
        }
    }
    
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;
    
    for (int i = 0; i < n; i++)// i++ / i = i + i .....
    {
        cout << "Masukkan Nilai ke - " << i + 1 << " : ";
        cin >> a[i];
    }
}


void display ()//Display
{
    cout << endl;
    cout << "==========================" << endl;
    cout << "Elemen Array telah terurut" << endl;
    cout << "==========================" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke -" << i << " : " << a[i] << endl;
    }
}
