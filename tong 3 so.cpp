#include <stdio.h>
#include <iostream>
using namespace std;
int Tong (int a, int b, int c);
main ()
{
	int soA, soB, soC, kq;
	cin >> soA >> soB >> soC;
	kq = Tong(soA, soB, soC);
	cout << kq;
}
int Tong (int a, int b, int c)
{
	return a + b + c;
}

