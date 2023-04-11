#include <iostream>
#include "H1.h"


//Простые объекты препроцессора
#define _PI 3.14 // Такая константа занимает 0 места памяти в ПК
#define forever for (int fori =0;;fori++)
#define begin {// Так можно заменять любые символы или слова 
#define end }
#define A 440, 500
//Макросы препроцессора 
//Задача Сумма двух чисел 
#define sum(a, b) a + b

// Вызываем макрос sum на этапе препроцессинга
// Макросы работают с текстом (Значит можно написать все что угодно)

//С помощю макроса вывод массива
 //Продление строчки это символ обратный слэшь

#define print_arr(a, s) std::cout <<'[';\
for (int i = 0; i < s; i++)\
	std::cout << a[i] <<", ";\
std::cout<< "\b\b]\n"

// Условная компиляция  if и endif  и else Изменяя > условия компилятор сам гасит неиспользуемый код
#if 5 < 4

#define var 666
#elif 5 == 4 // elif Как или За место if else 

#define var 0

#else

//Операторы превращения в строку
//ТО что лежит в   превратиться в строку
#define show(p) std::cout << #p << std::endl

#define var(name) std::cout << #name << " = " << name << std::endl

//Конкатинация кода =  Соединение текста
#define concat(a, b) a ## b

#endif

#ifdef _PI

void foo(){}

#endif // _PI




int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;
//Простые объекты препроцессора
	/*std::cout << "PI = " << _PI << std::endl;// _PI заменяется на 3.14 после обработки препроцессора
	//_PI = 3;//Это Ошибка !!!
	//forever std::cout << '.';//Варианты вывода
	//for (;;) std::cout << '.';//Варианты вывода
	forever begin                  //Варианты вывода
		std::cout << '.';
	if (fori >= 20)
		break;
	end
		(A);*/

	//Макросы препроцессора (Их можно назвать функции) МАКРОСЫ ВСЕГДА СО СКОБКАМИ()!!!!!
	// задача 1 вывести сумму чисел с помощью маскросов
	/*std::cout << "Enter the tow namber -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;*/

	//С помощю макроса вывод массива
	/*const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/

	//Операторы превращения в строку
	show(I jove C++);
	n = 10;
	var(n);
	double tmp = 1.55;
	var(tmp);

	//Конкатинация кода  = Соединение текста
	std::cout << "tmp = " << concat(t, mp) << std::endl;

	// Остановка Замены Текста
//#undef  Дает команду предпроцессору остановки процесса
	std::cout << _PI << std::endl;
    #undef _PI // Будет всегда выполнен Ему не важно окружение кода.

	//std::cout << _PI << std::endl;// ОШИБКА так как уже после препроцессора #undef

#define _PI 3

	std::cout << _PI << std::endl;



	return 0;
}