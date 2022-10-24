#include <iostream>
using namespace std;
int main()
{
    int Bintang;
    
    cout << "Mauskan Tinggi Bintang: ";
    cin >> Bintang;
        
    // ini dengan While bagian A
    int i=0;
    int j;
    
    cout << "Dengan While" << endl;
    while(i<5){
    j=0;
		while(j<=i){
		cout <<"*";
		j++;
		}
		i++;
		cout <<"\n";
	}
    
	cin.get();
	return 0;    
}
