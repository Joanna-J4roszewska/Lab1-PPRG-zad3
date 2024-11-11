#include <iostream>
#include <iomanip> //od fixed i setpreciison

int main() {
	float x, y, iloczyn;
	std::cout << "Podaj liczbe x i y." << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::cout << "Liczba x wynosi " << x << " a podana liczba y wynosi " << y << "." << std::endl;

	std::cout << std::fixed << std::setprecision(2);

	std::cout << "Suma " << x << " + " << y << " = " << (x + y) << std::endl;
	std::cout << "Roznica " << x << " - " << y << " = " << (x - y) << std::endl;
	std::cout << "Iloczyn (" << x << " * " << y << ") = " << (x * y) << std::endl;
	if (y != 0) {
		std::cout << "Iloraz (" << x << " / " << y << ") = " << (x / y) << std::endl;
	}
	else {
		std::cout << "Iloraz: nie dzielimy przez 0" << std::endl;
	}
	return 0;
}
