#include <iostream>

int main() {
	char znak;
	std::cout << "Podaj kolejne znaki.Program zakonczy sie po wpisaniu znaku t." << std::endl;
	do {
		std::cin >> znak;
		std::cout << "Wprowadzono: " << znak << std::endl;
	} while (znak != 't');
	std::cout << "Koniec.";
	return 0;
}