//hashmat_file.cpp
// Dela Cruz, Aaron Christian C.
// CPEPROGLA2 E21

#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("hashmat.txt");
	
	int hashmat, opponent;
	FILE *fp;
	fp = fopen ("hashmat.txt", "r");
	
	if(!fp){
		cout << "cannot open the file";
		system("pause");
		exit(1);
	}
	char c;
	while (f>>hashmat>>opponent){

	cout << abs(hashmat-opponent) << endl;
	}

	system ("pause>0");
	return 0;
}
