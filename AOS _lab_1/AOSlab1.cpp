// AOSlab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <iostream>
long long int iter=10000000;
int operations = 20;
template <typename T>
double assignment_loop()
{
	T  a1 = 7, a2 = 15, a3 = 84, a4 = 65, a5 = 28,
		 a6 = 7, a7 = 1093, a8 =21000, a9 = 56, a10 = 328,
		 a11 = 2222, a12 = 6547, a13 = 8726, a14 = 876,
		 a15 = 908, a16 = 20, a17 = 8765, a18 = 7865, a19 = 19, a20 = 443;
	clock_t start, finish;
	double  duration;
	start = clock();
	for (long long int i = 0; i < iter; ++i) {
		a1 = a8;
		a2 = a9;
		a3 = a10;
		a4 = a11;
		a5 = a12;
		a6 = a13;
		a7 = a14;
		a8 = a15;
		a9 = a16;
		a10 = a17;
		a11 = a18;
		a12 = a19;
		a13 = a20;
		a14 = a1;
		a15 = a2;
		a16 = a3;
		a17 = a4;
		a18 = a5;
		a19 = a6;
		a20 = a7;
	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	return duration;
}

template <typename T>
double add_time(){
clock_t start, finish;
double  duration;
T  a1 = 7, a2 = 15, a3 = 84, a4 = 65, a5 = 28,
a6 = 7, a7 = 1093, a8 = 21000, a9 = 56, a10 = 328,
a11 = 2222, a12 = 6547, a13 = 8726, a14 = 876,
a15 = 908, a16 = 20, a17 = 8765, a18 = 7865, a19 = 19, a20 = 443;
start = clock();
for (long long int i = 0; i < iter; ++i) {
	a1 = a8 + a5;
	a2 = a9 + a6;
	a3 = a10 + a7;
	a4 = a11 + a8;
	a5 = a12 + a9;
	a6 = a13 + a10;
	a7 = a14 + a11;
	a8 = a15 + a12;
	a9 = a16 + a13;
	a10 = a17 + a14;
	a11 = a18 + a15;
	a12 = a19 + a16;
	a13 = a20 + a17;
	a14 = a1 + a18;
	a15 = a2 + a19;
	a16 = a3 + a20;
	a17 = a4 + a1;
	a18 = a5 + a2;
	a19 = a6 + a3;
	a20 = a7 + a4;
}
finish = clock();
duration = (double)(finish - start) / CLOCKS_PER_SEC;

return duration - assignment_loop<T>();
} 
int main()
{
	

			std::cout << "velocity add int: " << (double)iter*operations/add_time <int>() << std::endl;
			std::cout << "velocity add long: " << (double)iter*operations / add_time <long>() << std::endl;
			std::cout << "velocity add  char: " << (double)iter*operations / add_time < char>() << std::endl;
			std::cout << "velocity add  float: " << (double)iter*operations / add_time < float>() << std::endl;
			std::cout << "velocity add  double: " << (double)iter*operations / add_time <double>() << std::endl;
	
	system("pause");
    return 0;
}

