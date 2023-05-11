#include <iostream>
#include <cstring>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


int value_c = 200;

void add(int *a)
{
	*a = *a + 230;
	// a = &value_c;
}

void Pointer_To_Pointer(int **a)
{
	*a = &value_c;
}

int main( )
{
    /* Pointer cascat Test */ 
	int a = 2555555;
	short *p = (short*)&a;
	int b = *((int*)p);
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<b<<endl;  // Output : 2555555
	cout<<&b<<endl;

    /* Memcpy Test */ 
	int  * source , dest;
	*source = 65535;
	memcpy(&dest, source, 2);
	cout<<dest<<endl; // Output : 65535

    /* Char Test */
    char * book = "abc";
    printf("%c\n",book[1]); // Output : b

	/* C++ : Assign memory pointer */ 
	int *p_array = new int[3]{0,1,100};
	cout<<*(p_array+2)<<endl; // Output : 100
	delete [] p_array;

	/* C++ : 不同的陣列配置記憶體 */ 
	int *array1 = new int[10];
	array1[3] = 501;
	cout<<array1[3]<<endl;  // Output : 501

	/* Only C : 配置陣列記憶體 */ 
	int *array2 = (int *)malloc(10 * sizeof(int));
	array2[3] = 501;
	printf("%d\n", array2[3]); // Output : 501


	/* C : Assign memory pointer */
	int *pp = (int *)malloc(10 * sizeof(int)); // Used malloc need include stdlib.h
	*(pp+9) = 123;
	cout<<*(pp+9)<<endl; // Output : 123
	free(pp);

	/* Call by pointer to chage value */
	int *pa = (int *)malloc(sizeof(int));
	*pa = 250;
	cout<<*pa<<endl; // Output: 250
	add(pa);
	cout<<*pa<<endl; // Output: 480 , PS:230+250=480

	/* Used double pointer to chage value */
	int *pb = (int *)malloc(sizeof(int));
	Pointer_To_Pointer(&pb);
	cout<<*pb<<endl; // Output: 200


	return 0;
}

