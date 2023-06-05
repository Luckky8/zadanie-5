#include <iostream>
#include <vector>
class Druzyna {
public:
	std::string nazwa;
	int liczba_wygranych;
	int liczba_remisow;
	int liczba_przegranych;
	int liczba_bramek;
	int liczba_straconych_bramek;
	int punkty;

	void Wyswietl();
	Druzyna(const std::string& n, int w, int r, int pr,int p, int b, int s) : nazwa(n),
		liczba_wygranych(w), liczba_remisow(r), liczba_przegranych(pr),punkty(p),
		liczba_bramek(b), liczba_straconych_bramek(s){}
};