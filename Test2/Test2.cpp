#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main( )
{
    // Pointer cascat Test
	int a = 2555555;
	short *p = (short*)&a;
	int b = *((int*)p);
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<b<<endl;
	cout<<&b<<endl;

    // Memcpy Test
	int  * source , dest;
	*source = 65535;
	memcpy(&dest, source, 2);
	cout<<dest<<endl;

    // Char Test
    char * book = "abc";
    printf("%c\n",book[1]);
}

