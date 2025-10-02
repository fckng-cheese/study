#include <iostream>
using namespace std;
int catet1;
int catet2;
float gepotinuza;
float perimetr;

int main(){
    cin >> catet1;
    cin >> catet2;

    gepotinuza = sqrt(catet1*catet1 + catet2*catet2);
    perimetr = gepotinuza + catet1 + catet2;

    cout << "гипотенуза = ";
    cout << gepotinuza;
    cout << "\n периметр = ";
    cout << perimetr;
    cout << "\n *Обе переменные имеют тип float"<<endl;
    
    cout << sizeof(int)*8 <<endl;
    cout <<  numeric_limits<int>::max()<<endl;
    cout << -numeric_limits<int>::max()<<endl;

    cout << sizeof(float)*8 <<endl;
    cout <<  numeric_limits<float>::max()<<endl;
    cout << -numeric_limits<float>::max()<<endl;
}