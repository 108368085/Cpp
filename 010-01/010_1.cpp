#include <iostream>
#include <cstring>
using namespace std;


int main() {
	/*
	char wordA[11];
	char wordB[11] = {'1','2','3'};
	char wordC[11] = "12345";
	char wordD[] = "12345";
	cout<<wordA<<endl;
	cout<<wordB<<endl;
	cout<<wordC<<endl;
	cout<<wordD<<endl;
	*/


	/*
	char * wordA;
	char * wordB = "12345";
	char * wordC = new char[11];
	cout<<wordA<<endl;
	cout<<wordB<<endl;
	cout<<wordC<<endl;
	*/


	/* size_t strlen(const char * str)  API*/    
	//const char * str = "12345";
	//const char * str = new char[5];
	/*
	char wordA[111];
	const char * str = wordA;
	*/


	/*
	char wordA[1111] = "12345";
	const char * str = wordA;
	*/

	
	char wordA[] = "12345";
	int st = strlen(wordA);
	cout<<st<<endl; // 5

	int a = 0;
	memcpy(&a, wordA + 1, 1);
	cout<<a<<endl;			// 50
	cout<<wordA[2]<<endl;	// 3
 	
	
	/* 
    // 字元指標也可以單獨列印
	char * abc = new char[10];
	strcpy(abc , "12345");
	printf("%d\n" , abc[0]);	 // 49
	cout<< strlen(abc) << endl;  // 5
	 */

	return 0;
}



























/*declare
	 //�ŧi�r���}�C
	char test1[10] = {'1','2'};
	char test2[10] = "01234567";
	char test3[] = "Hello World!";
	cout<<test1<<"\t"<<test2<<"\t"<<test3<<endl;
	int i[] = {1,2}; //�u���r���}�C�|��ܤ��e.
	cout<<i<<endl;
	*/

/*declare
	//�ŧi�r������
	char * test;
	char * test2 = "Hello World";
	char * test3 = new char[11];
	cout<<test<<"\t"<<test2<<"\t"<<test3<<endl;
	*/

