#include "druzyna.hpp"

void Druzyna::Wyswietl() {
	std::cout << nazwa << "-" << liczba_wygranych << "-" << liczba_remisow << "-" <<
		liczba_przegranych << "-" << liczba_bramek << "-" << liczba_straconych_bramek << std::endl;
}

