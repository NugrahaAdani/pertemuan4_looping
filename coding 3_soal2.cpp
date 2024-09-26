#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Deret fibbonaci \n \n";
    cout<<"Menampilkan deret fibonacci ke-n: ";
    cin>>n;

    int a = 0;
    int b = 1;
    int z;

    // rumus fibonacci fn=f1+f2

    for(int i = 0; i < n; ++i){
        cout << a << " ";
        z = a + b;
        b = a;
        a = z;

    }
    cout<<"\n";

    return 0;
}
