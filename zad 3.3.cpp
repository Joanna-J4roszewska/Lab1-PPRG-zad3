#include <iostream>
#include <cmath> // Dodana biblioteka do funkcji sqrt

int main() {
	double a, b, c, delta, x1, x2;

	std::cout << "Wzor na rownanie kwadratowe wyglada nastepujaco: ax^2 + bx + c = 0." << std::endl;
	std::cout << "Podaj wspolczynniki a. b. c." << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << "Podane wspolczynniki przez uzytkownika to: a = " << a << ", b = " << b << ", c = " << c << "." << std::endl;

	// Sprawdzenie, czy a != 0, aby upewnić się, że równanie jest kwadratowe
	if (a == 0) {
		std::cout << "To nie jest rownanie kwadratowe (a = 0)." << std::endl;
		return 0;
	}

	delta = b * b - (4 * a * c);

	if (delta < 0) {
		std::cout << "Brak rozwiazan." << std::endl;
		return 0;
	}
	
	if (delta == 0) {
		std::cout << "Rownanie ma jedno rozwiazanie." << std::endl;
		x1 = -b / (2 * a);
		std::cout << "x_0 = " << -b / (2 * a);
		return 0;
	}
	
		delta = sqrt(delta);
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);
	
	std::cout << "Rownanie ma dwa rozwiazania:";
	std::cout << "x_1 = " << x1 << "   x_2 = " << x2;
	return 0;

}

