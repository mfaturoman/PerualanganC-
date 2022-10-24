#include <iostream>
using namespace std;
int main()
{
    int Bintang;
    
    cout << "Mauskan Tinggi Bintang: ";
    cin >> Bintang;
    
    // ini dengan Nested Loop bagian D
    cout << "Dengan Nested Loop\n";
    
    for(int i = 1; i <= Bintang; i++){
    	for(int j = 1; j <= i; j++){
    		cout << "*" ;
		}
		i++;
		Bintang++;
		cout << endl;
	}
    
	cin.get();
	return 0;    
}
