#include <iostream>
#include "H1.h"


//������� ������� �������������
#define _PI 3.14 // ����� ��������� �������� 0 ����� ������ � ��
#define forever for (int fori =0;;fori++)
#define begin {// ��� ����� �������� ����� ������� ��� ����� 
#define end }
#define A 440, 500
//������� ������������� 
//������ ����� ���� ����� 
#define sum(a, b) a + b

// �������� ������ sum �� ����� ��������������
// ������� �������� � ������� (������ ����� �������� ��� ��� ������)

//� ������ ������� ����� �������
 //��������� ������� ��� ������ �������� �����

#define print_arr(a, s) std::cout <<'[';\
for (int i = 0; i < s; i++)\
	std::cout << a[i] <<", ";\
std::cout<< "\b\b]\n"

// �������� ����������  if � endif  � else ������� > ������� ���������� ��� ����� �������������� ���
#if 5 < 4

#define var 666
#elif 5 == 4 // elif ��� ��� �� ����� if else 

#define var 0

#else

//��������� ����������� � ������
//�� ��� ����� �   ������������ � ������
#define show(p) std::cout << #p << std::endl

#define var(name) std::cout << #name << " = " << name << std::endl

//������������ ���� =  ���������� ������
#define concat(a, b) a ## b

#endif

#ifdef _PI

void foo(){}

#endif // _PI




int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;
//������� ������� �������������
	/*std::cout << "PI = " << _PI << std::endl;// _PI ���������� �� 3.14 ����� ��������� �������������
	//_PI = 3;//��� ������ !!!
	//forever std::cout << '.';//�������� ������
	//for (;;) std::cout << '.';//�������� ������
	forever begin                  //�������� ������
		std::cout << '.';
	if (fori >= 20)
		break;
	end
		(A);*/

	//������� ������������� (�� ����� ������� �������) ������� ������ �� ��������()!!!!!
	// ������ 1 ������� ����� ����� � ������� ���������
	/*std::cout << "Enter the tow namber -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;*/

	//� ������ ������� ����� �������
	/*const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/

	//��������� ����������� � ������
	show(I jove C++);
	n = 10;
	var(n);
	double tmp = 1.55;
	var(tmp);

	//������������ ����  = ���������� ������
	std::cout << "tmp = " << concat(t, mp) << std::endl;

	// ��������� ������ ������
//#undef  ���� ������� �������������� ��������� ��������
	std::cout << _PI << std::endl;
    #undef _PI // ����� ������ �������� ��� �� ����� ��������� ����.

	//std::cout << _PI << std::endl;// ������ ��� ��� ��� ����� ������������� #undef

#define _PI 3

	std::cout << _PI << std::endl;



	return 0;
}