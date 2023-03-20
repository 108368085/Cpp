
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {

	// char * strcpy ( char * destination, const char * source );
	// char * dest1 = "12345";
	// char * dest2 = new char[11];
	// char temp[11];
	// char * dest3 = temp;
	// char * dest4 = dest2;

	//const char * sou1 = "12345";
	//const char * sou2 = new char[11];
	//char temp2[11];
	//const char * sou3 = temp2;
	///const char * sou4 = sou2;                        0

/* 	
	char wordA[11];
	strcpy(wordA, "12345");
	cout<<wordA<<endl; // 12345

	char * wordB = new char[11];
	strcpy(wordB, "12345");
	cout<<wordB<<endl; // 12345

	strcpy(wordA,"1234567890"); 
	strcpy(wordB,"1234567890");
	cout<<wordA<<endl; // 1234567890
	cout<<wordB<<endl; // 1234567890


	//strcpy(wordA,"1234567890123");
	wordB = new char[15];
	strcpy(wordB,"1234567890123");
	//cout<<wordA<<endl;
	cout<<wordB<<endl; // 1234567890123

	char * wordC = new char[20];
	cout<<strlen(strcpy(wordC, wordB))<<endl; // 13

	cout<<"-------------------------"<<endl;

	char * wordX = new char[21];
	strcpy(wordX, "12345");
	strcpy(wordX + 3, "67890" + 3);
	cout<<wordX<<endl; // 12390

	char * wordY = new char[21];
	strcpy(wordY, "Hi, I am Mary");
	char newName[]= "John";
	strcpy(wordY + strlen(wordY) - strlen(newName), newName);
	cout<<wordY<<endl;          // Hi, I am John
	cout<<strlen(wordY)<<endl;  // 13
	 */

/* 
	 					//Video 010-03 memcpy 介紹
	//void Pointer
	void * pv;
	int a = 9700;
	pv = &a;
	cout<<pv<<endl; 		// 列印出的是記憶體位址 : 0x61fe0c
	cout<<*(int*)pv<<endl;  // 9700 , PS : 加上(int*)是因為本身是void指標, 要轉型成int指標, 才能列印出int值

	char b = 'a';
	pv = &b;
	cout<<pv<<endl;			// 列印出的是記憶體位址 : 0x61fe0b


	cout<<*(char*)pv<<endl; // a

	int * pz = new int;
	*pz = 123;
	pv = pz;
	cout<<*(int*)pv<<endl; // 123 , PS : 加上(char*)是因為本身是void指標, 要轉型成int指標, 才能列印出int值
  */
	

/* 
  	//void * memcpy ( void * destination, const void * source, size_t num );
	char wordA[] = "123456789";
	char wordB[] = "abcde";
	//strcpy(wordA, wordB);
	char * temp = (char*)memcpy(wordA + 3, wordB + 2, 3); // 由於memcpy這個API是void指標, 因此需轉型成(char*), 才能夠給同樣屬於(char*)的temp
	cout<<temp<<endl;  // cde789 ,  由於這裡是wordB開始, 因此前面的123不保留 , 只保留cde789
	cout<<wordA<<endl; // 123cde789

	memcpy(wordA + 3, wordA + 6, 3);
	cout<<wordA<<endl; // 123789789

	int z = 97;
	memcpy(wordA, &z, 1);      // a23789789 , 97在字元裡是a , 因此打印出的就是a , PS : 對照ascii code
	cout<<wordA<<endl;
	memcpy(&z, wordA + 1, 1);
	cout<<z<<endl;		       // 50 , 2在字元裡是50 , 因此打印出的是50  PS : 對照ascii code
	 */

		//Video 010-04 strcat, strcmp, strstr 及 strtok 介紹介紹
	/* 
	//char * strcat ( char * destination, const char * source );
	char wordA[] = "12345";
	cout<<strcat(wordA, "67890")<<endl; // 1234567890
	 */


	/*
	//int strcmp ( const char * str1, const char * str2 );  PS :若 str1 的字元大於 str2 的字元，運算的結果為正值 , str1 的字元小於 str2 的字元，運算的結果為負值。
	char wordA[] = "abcde";
	char wordB[] = "abcde";
	int i = strcmp(wordA, wordB);
	cout<<i<<endl; 		// 0 , strcmp這個API是用來字串比較 , 如果相等則等於0	
	*/


	/* 
	//const char * strstr ( const char * str1, const char * str2 );  PS : 運算出 str2 在 str1 中第一次出現的位置。若不存在結果為 NULL
	char wordA[] = "123456789";
	char * pc = strstr(wordA, "456");
	cout<<pc<<endl; // 456789
	// strcpy(pc,"999999");
	// cout<<wordA<<endl;
	cout<<strcmp(strstr(wordA,"456"),"456789")<<endl; // 0
	 */


	/* 
	//char * strtok ( char * str, const char * delimiters );  PS : 依照 delimiters 的內容切割 str。delimiters 中的各個字元為或的關係。str 的內容會被改變。
	char wordA[] = "abc,def,ghi,jkl,mno";
	char * pWordA = new char[strlen(wordA)];
	strcpy(pWordA, wordA); // 由於 strtok會改變wordA , 因此這裡先用指標指派, 這樣就不會改到wordA
	char * tok = strtok(pWordA, ",");
	while(tok != NULL){
		cout<<tok<<endl;
		tok = strtok(NULL,",");
	}
	cout<<wordA<<endl;
	 */


	/* 
 	char * wordA = new char[10];
	gets(wordA);  //相當於 Cin , 但若使用Cin則遇到第一個空格就會列印 , 因此在這裡使用傳統C語言的gets
	puts(wordA);  //相當於 Cout
	 */


	/*自己練習*/
	/* char * dest1 = new char[20];
	strcpy(dest1 , "123456");
	cout<<dest1<<endl; */


	return 0;
}

