#include <iostream>
using namespace std;

class Seasons {
public:
	enum seasons {
		Spring = 1,
		Summer,
		Autumn,
		Winter
	};
public:
	int s;
	void seasonchange(int f) {
		s = f;
		switch (s) {
		case Spring:s = Summer; break;
		case Summer:s = Autumn; break;
		case Autumn:s = Winter; break;
		case Winter:s = Spring; break;
		}
	};
	void returnseason() {
		if (s == Spring) {
			cout << "Now is spring\n";
		}
		if (s == Summer) {
			cout << "Now is summer\n";
		}
		if (s == Autumn) {
			cout << "Now is autumn\n";
		}
		if (s == Winter) {
			cout << "Now is winter\n";
		}
	}
};
	
class ReverseSeason : public Seasons {
public:
	void seasonchange(int f) {
		s = f;
		switch (s) {
		case Spring:s = Winter; break;
		case Summer:s = Spring; break;
		case Autumn:s = Summer; break;
		case Winter:s = Autumn; break;
		}
	}
};
	
	
	int main() {
		int n;
		cout << "Enter current season(1 for Spring, 2 for Summer, 3 for Autumn, 4 for Winter): ";
		cin >> n;
		Seasons season;
		ReverseSeason reverse;
		season.seasonchange(n);
		cout<<"Season changed!\n";
		season.returnseason();
		cout << "---------------------------------------------------------\n";
		reverse.seasonchange(n);
		cout << "Season changed!\n";
		reverse.returnseason();
	}