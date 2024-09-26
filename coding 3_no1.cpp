#include<iostream>
using namespace std;

int main(){
    int a, b, c, n;
    int sumganjil = 0;
    int sumgenap = 0;
    int sumprima = 0;

cout<<"menampikan bilangan ganjil kurang dari 10: ";
    for(a = 1; a <= 10; a+=2){
        cout << a << " ";
        sumganjil += a;
}
cout<<endl;
cout<<"menampikan bilangan genap  kurang dari 10: ";
    for(b = 2; b <= 10; b+=2){
        cout << b<< " ";
        sumgenap += b;

}
cout<<endl;
cout<<"menampikan bilangan prima  kurang dari 10: ";
    for(c = 2; c <= 10; c++){
        if(c==4){
            continue;;
        }else if(c==6){
            continue;
        }else if(c==8){
            break;
        }
        cout << c << " ";
        sumprima += c;

}
    cout << "\n \n";

    cout << "Jumlah bilangan ganjil : " << sumganjil << endl;
    cout << "Jumlah bilangan genap  : " << sumgenap << endl;
    cout << "Jumlah bilangan prima  : " << sumprima << endl;

    int sumtotal;
    sumtotal = sumganjil + sumgenap + sumprima;

    cout << "Jumlah total semua bilangan : " << sumtotal;

    cout << "\n \n";
    return 0;
}
