#include <iostream>
using namespace std;
int main()
{
    int Bintang;
    
    cout << "Mauskan Tinggi Bintang: ";
    cin >> Bintang;
        
    // ini dengan do-While bagian B
    int i=0;
    
    cout << "Dengan Do-While\n";
    do{
    	i++;
    	int j=0;
    	do{
    		j++;
    		cout <<"*";
		}while(j<i);
		cout << endl;
	}while(i<=4);
    
	cin.get();
	return 0;    
}
