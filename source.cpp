#include <iostream>
using namespace std;



int hieu(int a, int b) 
{
	return a - b;
}

int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b);

int tich(int a,int b)
{
	return a*b;
}
=======

int tong(int a, int b) {
	return a + b;
}




int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,) ";
	cin >> phepToan;

	if (strcmp(pheptoan, -) == true)
		cout << "ket qua phep tru" << hieu(a, b);

	if(strcmp(phepToan, +)==true)
		cout<<"ket qua cua phep +"<<tong(a, b);


	if (strcmp(pheptoan, *) == true)
		cout << "ket qua phep nhan" << tich(a, b);

	system("pause");
	return 0;
}