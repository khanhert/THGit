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

 
void chanle(int x)
{
	cout <<"Nhap vao so can kiem: ";
	cin >> x;
	if(x%2==0)
		cout<<"so chan";
	else
		cout<<"so le";
}


int tong(int a, int b) {
	return a + b;
}





int main()
{
	int a, b ,x;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,) ";
	cin >> phepToan;
		cout << "ket qua phep tru" << hieu(a, b);

		cout <<"ket qua cua phep +"<<tong(a, b);

	if(strcmp(phepToan, +)==true)
		cout<<"ket qua cua phep +"<<tong(a, b);


	if (strcmp(pheptoan, *) == true)
		cout << "ket qua phep nhan" << tich(a, b);
	chanle(x);
	system("pause");
	return 0;
}