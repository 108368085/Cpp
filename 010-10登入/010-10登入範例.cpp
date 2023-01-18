/* 使用者輸入帳密，
	正確則印出Correct

	帳 : abcd
	密 : 1234
*/
#include <iostream>
#include <string>
using namespace std;

/* Video 010-06 */
int main() {
	string name , password;
	int count = 1;
	bool login = false;
	do{
		cout<<"Please input your name =>";
		cin>>name;
		cout<<"Please input your password =>";
		cin>>password;
		if(name.compare("abcd") == 0 && password == "1234"){
			cout<<"Welcome"<<endl;
			login = true;
			break;
		}else{
			if(count <= 2){
				cout<<"Name or password is wrong."<<endl;
				count++;
			}else{
				cout<<"Over three times."<<endl;
				break;
				//return 0;
			}
		}
	}while(!login);

	if(login){
		cout<<" Correct"<<endl;
	}else{
		cout<<"bye bye."<<endl;
	}

	return 0;
}
