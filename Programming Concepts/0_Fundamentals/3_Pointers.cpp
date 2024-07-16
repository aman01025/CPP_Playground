/*
A pointer of type "data *" can store the address of the variable of type "data"
* is called Dereferencing operator
With the dereferencing operator, we can access and modify the value present at address it is pointing to.
*/

#include<iostream>

int main()
{
	int num {12};   //It is equivalent to int num = 12; 
	std::cout << "Value of num: " << num << std::endl;
	int* p, q; //Note that here 'p' of type integer pointer type while 'q' is of integer type variable
	q = 10;
	std::cout << "Value of q: " << q << std::endl; 
	// p = 2; will give Compilation error
	int* m, *n;  // Now both m and n are of int * type

	// Declaring pointers
	int *ptr;      //Can only store an address of a variable of type 'int'
	int *ptr_1 {};   // {} --> Inplicitly initialize with nullptr
	int *ptr_2 = nullptr; // or int *ptr_2 {nullptr};  //Explicitly initialize to nullptr

	//Size of different types of Pointers
	char *p0;
	float *p1;
	double *p2;
	long *p3;
	std::cout << "Size of char: " << sizeof(char) << " and size of char *: " << sizeof(p0) << std::endl;
	std::cout << "Size of int: " << sizeof(int) << " and size of int *: " << sizeof(ptr) << std::endl;
	std::cout << "Size of float: " << sizeof(float) << " and size of float *: " << sizeof(p1) << std::endl;
	std::cout << "Size of double: " << sizeof(double) << " and size of char *: " << sizeof(p2) << std::endl;
	std::cout << "Size of long: " << sizeof(long) << " and size of long *: " << sizeof(p3) << std::endl;
	//From the output we can conclude that all pointers have the same size of 8 bytes

	//Initialzing Pointers
	ptr = &num; //storing the address of num //Or int *ptr {&num}; dec and ini at the same time
	std::cout << "Value of ptr: " << ptr << std::endl;
	std::cout << "Value of &num: " << &num << std::endl;
	std::cout << "Value of *ptr: " << *ptr << std::endl;
	std::cout << "Value of num: " << num << std::endl;
	std::cout << "Value of &ptr: " << &ptr << std::endl;
	std::cout << "Size of num: " << sizeof(num) << std::endl;
	std::cout << "Size of *ptr: " << sizeof(*ptr) << std::endl;
	std::cout << "Size of &num: " << sizeof(&num) << std::endl; // Will print size of address viz. 8 (not 4)
	// p1 = &num; // will give Compilation error for trying to convert *int to *float
	// Size of variable num can be calculated by passing pointer to num

	//Modifying values using pointers
	std::cout << "Modifying the value of num through ptr\n";
	*ptr = 20;
	std::cout << "New value of *ptr: " << *ptr << std::endl;
	std::cout << "Value of num: " << num << std::endl; //Value of num has also changed

	//Playing with unitialized pointers or pointers to nullptr
	//std::cout << "Value of *p0: " << *p0 << std::endl;
	//p0 is an uninitialised pointer of char* tpye and printing this will print any random character or garbage character. Can also give core dump
	
	//Playing with pointers to nullptr
	//std::cout << "Value of *ptr_1: " << *ptr_1 << std::endl;
	//std::cout << "Value of *ptr_2: " << *ptr_2 << std::endl;
	//Printing any of the above two will give "Segmentation fault (core dumped)" error. Code will crash at this point.
	int num1 = 12;
	// double *p = &num1; will give Compilation Error

	int* p4 {nullptr};
	int num2 = 10;
	p4 = &num2;
	std::cout << "This is valid. Value of num2: " << *p4 << std::endl;
}
