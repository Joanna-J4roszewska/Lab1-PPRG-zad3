#include <iostream>
#include  <vector>//zastosowanie wektora dwuwymiarowego dlatego potrzebujemy biblioteki do przechowywania wartosci trojkata

int main() {
	int n;
	std::cout << "Podaj liczbe.";
	std::cin >> n;

	std::vector<std::vector<int>> pascalTriangle(n);//stworzenie owego wektora pascaltriangle + std::vector<int> ktory przechowa rozne dlugosci wierszy

	//generacja trojkata 
	for (int i = 0; i < n; ++i) {
		pascalTriangle[i].resize(i + 1);//kazdy wiersz ma o jedna liczbe wiecej
	    pascalTriangle[i][0] = 1;//pierwszy element bedzie zawsze 1
		pascalTriangle[i][i] = 1;// tez ale ostatni element

		for (int j = 1; j < i; ++j) { //petla element pascala to suma 2 elementow zapisanych w poprzednim wierszu
			pascalTriangle[i][j]= pascalTriangle[i-1][j-1] + pascalTriangle[i - 1][j];

		}

	}
	 //wysewietlanie pascala
	for (int i = 0; i < n; ++i) { //przechodzenie przez wiersze pascal
		//odstepy
		for (int j = 0; j < n - i - 1; ++j) {//odstepy ktore maleja z kolejnym wierszem
			std::cout << " ";
		}
		//drukowanie nastepujacych  liczb w trojkacie
		for (int j = 0; j <= i; ++j) {
			std::cout << pascalTriangle[i][j] << " ";
		}
		std::cout << std::endl;
		
	}
	std::cout << "Trojkat Pascala bazowany na liczbie podanej przez uzytkownika, " << n <<"."<< std::endl;
	return 0;

}

