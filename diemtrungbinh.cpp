#include <stdio.h>
#include <iostream>
using namespace std;
float dtb(float a, float b, float c);
main ()
{
	float soA, soB, soC, kq;
	cin >> soA >> soB >> soC;
	kq = dtb(soA, soB, soC);
	cout << kq;
}
float dtb(float a, float b, float c)
{
	return (a+b+c)/3;
}
