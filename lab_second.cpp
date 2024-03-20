#include <iostream>
using namespace std;


void function1(int n, int& result) {
	// Функція, яка обчислює суму чисел від 20 до 2*n-1 та зберігає результат у змінну result.
	int sum = 0; // Ініціалізація змінної 
	for (int i = 20; i <= 2 * n - 1; i++) {
		sum += i; // Додавання числа
	}
	result = sum; // Збереження суми у змінній result
}

template <class T> void fun(T n, T& result) {
	// Шаблонна функція, яка обчислює суму чисел від 20 до 2*n-1 та зберігає результат у змінну result.
	T sum = 0; // Ініціалізація змінної 
	for (int i = 20; i <= 2 * n - 1; i++) {
		sum += i; // Додавання числа 
	}
	result = sum; // Збереження суми у змінній result
}

int main()
{
	setlocale(LC_CTYPE, "ukr"); 

	int n;
	cout << "Ведiть значення n:"; // Виведення повідомлення для введення значення n
	cin >> n; // Від значення n з консолі

	int sum;
	function1(n, sum); // Виклик функції function1 для обчислення суми 
	fun<int>(n, sum); // Виклик шаблонної функції fun 
	cout << sum << endl; // Виведення суми на екран
}
