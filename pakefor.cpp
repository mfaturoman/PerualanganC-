#include <iostream>
using namespace std;
int main()
{
    int Bintang;
    
    cout << "Masukan Tinggi Bintang: ";
    cin >> Bintang;
    
    // ini dengan for bagian C
    cout << "Dengan FOR\n";
    
    for(int i = 1; i <= Bintang; i++){
    	for(int j = 1; j <= i; j++){
    		cout << "*" ;
		}
		cout << endl;
	}
    
	cin.get();
	return 0;    
}
