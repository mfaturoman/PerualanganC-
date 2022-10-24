#include <iostream>
using namespace std;

int main(){
    int a,b, bintang;
    cout<<"Masukkan jumlah bintang : ";cin>>bintang;
    
    // dengan Nested looping
    cout << "Dengan Nested Looping\n";

    for (a=1; a<=bintang; a++){
        for (b=1; b<=a; b++){
            cout<<"*";
        }
        cout<<endl;
    }
}
