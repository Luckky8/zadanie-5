#include <iostream>
#include <algorithm>
#include <vector>

#include "druzyna.hpp"


void obliczPunkty(std::vector<Druzyna>& liga) {
	for (int i = 0; i < 10; i++) {
		Druzyna& druzyna = liga[i];
		druzyna.punkty = druzyna.liczba_wygranych * 3 + druzyna.liczba_remisow * 1 
			+ druzyna.liczba_przegranych * 0;
	}
}
int main() {
	std::vector<Druzyna> liga{
		{"Trawnicy",6,2,2,0,15,5},
		{"Husarzy",7,1,2,0,14,6},
		{"Utopce",2,0,8,0,4,20},
		{"Korniki",4,4,2,0,8,9},
		{"Kolejarze",4,4,2,0,8,5},
		{"Farmerzy",2,0,8,0,4,15},
		{"Bazylia",5,4,1,0,10,5},
		{"Patrioci",6,2,3,0,14,6},
		{"Kozaki",7,1,2,0,15,6},
		{"Lamusy",1,1,8,0,2,25}
	};
	obliczPunkty(liga);
	std::sort(liga.begin(), liga.end(), [](const Druzyna& a, const Druzyna& b) {
		if (a.punkty != b.punkty) {
			return a.punkty > b.punkty;
		}
		if (a.liczba_wygranych != b.liczba_wygranych)
			return a.liczba_wygranych > b.liczba_wygranych;
		if (a.liczba_przegranych != b.liczba_przegranych)
			return a.liczba_przegranych < b.liczba_przegranych;
		if (a.liczba_bramek != b.liczba_bramek)
			return a.liczba_bramek > b.liczba_bramek;
		if (a.liczba_straconych_bramek != b.liczba_straconych_bramek)
			return a.liczba_straconych_bramek < b.liczba_straconych_bramek;
		});
	
	for (auto& druzynka : liga) {
		std::cout << druzynka.nazwa << "-" << druzynka.liczba_wygranych << "-" << druzynka.liczba_remisow << "-" <<
			druzynka.liczba_przegranych << "-" << druzynka.liczba_bramek << "-" << druzynka.liczba_straconych_bramek << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}