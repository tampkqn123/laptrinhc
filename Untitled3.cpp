#include <stdio.h>
#include <string.h>
main ()
{
	char hoten[50];
	float toan, ly, hoa, DTB;
	printf ("Nhap ho ten: ");
	gets(hoten);
	printf ("Nhap diem TOAN: \n");
	scanf ("%f, &toan");
	printf ("Nhap diem LY: \n");
	scanf ("%f, &ly");
	printf ("Nhap diem HOA: \n");
	scanf ("%f, &hoa");
	DTB = (toan+ly+hoa)/3;
	printf ("Diem TB cua sinh vien '%s' la : %f", hoten, DTB);
	return 0;
}

		
