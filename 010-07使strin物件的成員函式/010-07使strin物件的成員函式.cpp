//============================================================================

//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	// From video 010-09 
	/* 
	string s1 = "Hello World!";
	string* ps1 = new string("I love C++");

	char c = s1.at(0);		// get the first character array
	cout<<c<<endl;			// H
	char c2 = ps1->at(0);   // get the first character array
	cout<<c2<<endl;		    // I
    cout<<s1[0]<<endl;	    // H , PS : 單獨列印string的第一個字元
    cout<<(*ps1)[0]<<endl;  // I , PS : 單獨列印string指標的第一個字元

    size_t size = s1.size();	// Get string size , 12
    size_t size2 = ps1->size(); // Get string size , 10
    cout<<size<<endl;
    cout<<size2<<endl;

    for(size_t i = 0; i < s1.size(); i++){
    	cout<<s1[i];
    }
    cout<<endl;

    s1.assign("New String Content");  // 指派新內容給物件，物件中的舊內容會被取代。
    *ps1 = "New String Content";
    cout<<s1<<endl;   // New String Content
    cout<<*ps1<<endl; // New String Content

    s1.append(" C++");  // PS : Append string to the end
	s1 += " 123456";    // PS : Append string to the end
    *ps1 += " Java";	// PS : Append string to the end     
    cout<<s1<<endl;     // New String Content C++ 123456
    cout<<*ps1<<endl;   // New String ContentJava
	 */


	// From video 010-10  , 字串的插入、刪除、取代與搜尋
	
	string s1 = "1245";
	cout<<s1.insert(2, "3")<<endl; // 12345 , insert是將第二號元素插入3
	s1.append(s1.insert(2, "3"));  // 將第二號元素插入3再放到最後面
	cout<<s1<<endl;	// 123345123345

	s1.erase(5, 3); // PS : 抹出第五號元素開始的三個長度
	cout<<s1<<endl; // 123343345

	s1.replace(5, 2, "67"); // PS : 取代第五號元素開始的兩個長度並插入"67"
	cout<<s1<<endl; 		// 123346745

	size_t st = s1.find("3"); // 找出字串s1裡面的3在幾號元素
	cout<<st<<endl; // 2

	st = s1.find("88");
	cout<<st<<endl; // 字串裡面沒有"88" , 所以出現亂碼
	if(st == string::npos){			// PS : string::npos代表沒有找到的意思
		cout<<"Not Found."<<endl;
	}
	


	// From video 010-11  , 將Java改成C++後置入陣列  
	/* 
	   // PS : 找到Java並改成C++
	string s1 = "I love Java. Java is good. Java is very Good.";
	string findWord = "Java";
	string replaceWord = "C++";
	size_t startPos = 0;
	do{
		size_t st = s1.find(findWord, startPos);    // PS:從第startPos的位置開始找
		if(st == string::npos){
			break;  // 如果都沒有找到則中斷迴圈 (代表都找完也會中斷)
		}
		s1.replace(st,findWord.size(),replaceWord); 
		startPos = st + replaceWord.size(); // 找到後 從st的位置再加上取代字串的長度, 代表沿續之前的長度繼續找, 如此可以加快運算速度
	}while(true);

	cout<<s1<<endl;
	 */


	/*
	string s1 = "I love Java. Java is good. Java is very Good.";
	size_t st = s1.find_first_of("aeiou"); //找到aeiou任其中一個的位置
	cout<<st<<endl;
	*/


	// 自寫複習 substr  ,
	// s1.substr(x,y)表將第x個編號至y個字串陣列做切割
	// int compare (const string& str) const; 與 str 比大小 , 正值、零、負值分別代表大於、等於、小於。
	/* 
	string s1 = "I love C++.";
	string s2 = s1.substr(2, 4); // 指定元素位置與切割長度
	string s3 = s1.substr(2); 	 // 指定元素位置 未指定切割長度, 則會列印出後面整個字串
	cout<<s2<<endl; 			 // love
	cout<<s3<<endl; 			 // love C++.
	cout<<s1.compare("z")<<endl; // -1  , 比較s1與z的第一個字母大小 
 	 */
	

	/* 
	string s1 = "C,C++,Java";
	string s2 = ",";

	int count = 0;
	size_t startPos = 0;
	do{
		size_t st = s1.find(s2, startPos);
		if(st == string::npos){
			break;
		}
		count++;
		startPos = st + s2.size();
	}while(true);

	string words[count + 1];
	startPos = 0;
	for(int i = 0; i <= count; i++){
		size_t st = s1.find(s2, startPos);
		words[i] = s1.substr(startPos, st - startPos);  // s1.substr(x,y) 表 將第x個編號至y個字串陣列做切割
		startPos = st + 1;
	}

	for(int i = 0; i <= count; i++){
		cout<<words[i] <<endl;
	}
	
	cout<<words[1][1]<<endl; // + , 單獨列印words[1]的第二個元素
	 */


	/*
	string s1 = "I love Java. Java is good. Java is very Good.";
	string s2 = s1.substr(s1.find_first_of("Jj"), 4);
	if(s2 == "Java"){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	*/


	// 將Mary,John,Bob分別分隔成三個字段, 並放入字串陣列裡面, 然後將第一個字母大小寫區分順序 , 最優先的字母會先列印出來
	/* string s1 = "Mary,John,Bob";
	string s2 = ",";
	int count = 0;
	size_t startPos = 0;
	do{
		size_t st = s1.find(s2, startPos);
		if(st == string::npos){
			break;
		}
		count++;  
		startPos = st + s2.size();
	}while(true);

	string words[count + 1]; // count==2 , PS：兩個逗點代表有三個字串陣列
	startPos = 0;
	for(int i = 0; i <= count; i++){
		size_t st = s1.find(s2, startPos);
		words[i] = s1.substr(startPos, st - startPos);
		startPos = st + 1;
	}

	for(int j = 0; j < count; j++){
		int smallestIndex = j;
		for(int i = j + 1; i <= count; i++){
			if(words[smallestIndex].compare(words[i]) > 0){
				smallestIndex = i;
			}
		}
		string temp = words[j];
		words[j] = words[smallestIndex];
		words[smallestIndex] = temp;
	}
	for(int i = 0; i <= count; i++){
		cout<<words[i] <<"\t";         // Bob     John    Mary
	}
	cout<<endl; 
	*/


	return 0;
}

