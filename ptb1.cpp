#include <iostream>
using namespace std;
int Giaipt ( int a, int b)
{
	if(a==0 && b==0)
	{
	return 0;
	}
	else if (a==0 && b!=0)
	{
	return -1;
	}
	else 
	{
		return -b/a;
	}
}

main ()
{
	int a,b;
	float kq;
	cin >> a >> b;
	kq = Giaipt (a,b);
	if (kq == 0)
	{
		cout << "phuong trinh co vo so nghiem";
	}
	else if (kq == -1)
	{
		cout << "phuong trinh vo nghiem";
	}
	else 
	{
		cout << "phuong trinh co mot nghiem duy nhat : " << kq;
	}
}

