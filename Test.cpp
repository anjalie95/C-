#include <iostream>
#include <string>
using namespace std;

/*
Compile and run using g++ on windows command prompt
command to compile -> g++ Test.cpp -o Test
command to run -> Test
*/

#define SIZE 256 

int Alphabet[SIZE];

void CalculateLast(string P);
int Last(char c);
void test(char c, int last_occ);
void testCase1(void);
void testCase2(void);
void testCase3(void);
void testCase4(void);


int main(void){
	testCase1();
	testCase2();
	testCase3();
	testCase4();
	return 0;
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

void test(char c, int last_occ){
	int x = Last(c);
	if(x == last_occ){
		cout << "Last Occurance matched" << endl;
	}
	else{
		cout << "Last Occurance didnt match" << endl;
	}
}

void testCase1(void){
	string P = "abcdaefghc";
	CalculateLast(P);
	test('0',-1);
	test('a',4);
	test('b',1);
	test('c',9);
	test('d',3);
	test('e',5);
	test('f',6);
	test('g',7);
	test('z',-1);
	test('@',-1);
	cout << "Test Case 1 is over" << endl;
}

void testCase2(void){
	string P = "1234567890";        
	CalculateLast(P);
	test('0',9);
	test('1',0);
	test('2',1);
	test('3',2);
	test('4',3);
	test('5',4);
	test('6',5);
	test('a',-1);
	test('b',-1);
	test('+',-1);
	cout << "Test Case 2 is over" << endl;
}

void testCase3(void){
	string P = "`!@#$%^&*()-=";        
	CalculateLast(P);
	test('0',-1);
	test('1',-1);
	test('2',-1);
	test('`',0);
	test('&',7);
	test('*',8);
	test('(',9);
	test('a',-1);
	test('b',-1);
	test('c',-1);
	cout << "Test Case 3 is over" << endl;
}

void testCase4(void){
	string P = "";
	CalculateLast(P);
	test('0',-1);
	test('1',-1);
	test('2',-1);
	test('a',-1);
	test('b',-1);
	test('c',-1);
	test('`',-1);
	test('!',-1);
	test('@',-1);
	test('#',-1);
	cout << "Test Case 4 is over" << endl;
	
}
