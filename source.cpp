#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b) 
{
	return a - b;
}
=======
int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b);
>>>>>>> 6f9df58ab02614fcd88409512c55b2d87030f3c8

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
<<<<<<< HEAD
	if (strcmp(pheptoan, -) == true)
		cout << "ket qua phep tru" << hieu(a, b);
=======
	if(strcmp(phepToan, +)==true)
		cout<<"ket qua cua phep +"<<tong(a, b);
>>>>>>> 6f9df58ab02614fcd88409512c55b2d87030f3c8
	system("pause");
	return 0;
}