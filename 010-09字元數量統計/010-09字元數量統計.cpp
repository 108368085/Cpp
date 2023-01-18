

#include <iostream>
#include <string>
using namespace std;


// Video 010-014
int main() {
	char * word = new char[2000];
	// cin.getline(word, 2000); // 接收大量的輸入 ,　並給予２０００個Ｂｙｔｅ
	cin>>word;
	string sWord = word;
	int a,b,c,d,e;
	a = b = c = d = e = 0;
	for(size_t i = 0 ; i < sWord.size(); i++){
		char x = sWord[i];
		if( x >= 65 && x <= 'Z'){  		 // 數字大寫a=65
			a++;
		}else if( x >= 97 && x <= 'z'){  // 數數字小寫a=97
			b++;
		}else if( x >= 48 && x <= '9'){  // 數字0=48
			c++;
		}else if( x == ' '){
			d++;
		}else{
			e++;
		}
	}

	cout<<"uppercase letter :"<<a<<endl;  // 大寫字母
	cout<<"lowercase letter :"<<b<<endl;  // 小寫字母
	cout<<"Numbers :"<<c<<endl; // 數字
	cout<<"Space :"<<d<<endl;   // 空白鍵
	cout<<"else :"<<e<<endl; 				// 其他符號

	return 0;
}
