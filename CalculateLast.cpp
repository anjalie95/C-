#include <iostream>
#include <string>
using namespace std;

/*
Instructions to compile,run and test
Compile and run using g++ on windows command prompt
command to compile -> g++ CalculateLast.cpp -o CalculateLast
To test the code compile and run Test.cpp
*/

#define SIZE 256 

int Alphabet[SIZE];

void CalculateLast(string P);
int Last(char c);

int main(){
    void CalculateLast(string P);
    int Last(char c);
    cout << "Compiled Successfully!" << endl;
}

void CalculateLast(string P){
	
	for(int i = 0; i < SIZE; i++){
		Alphabet[i] = -1;
	}
	
	for(int j = (P.length() - 1); j >= 0; j--){
		if(Alphabet[ (int) P[j] ] == -1){
			Alphabet[ (int) P[j] ] = j;
		}
	}
}

int Last(char c){
	return Alphabet[ (int) c ];
}
