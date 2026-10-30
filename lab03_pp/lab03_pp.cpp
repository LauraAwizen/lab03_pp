

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//zad.1
	/*int a, b;
	cout << "podaj a:";
	cin >> a;
	cout << "podaj b:";
	cin >> b;
	if (a == b) {
		cout << "a=b";
	}
	else if (a < b) {
		cout << "a<b";
	}
	else if (a > b){
		cout << "a>b";
	}*/
	//zad.2
	/*int a, b;
	cout << "podaj a:";
	cin >> a;
	cout << "podaj b:";
	cin >> b;
	if (a == b) {
		cout << "a=b";
	}
	else {
		if (a > b) {
			cout << "a>b";
		}
		if (a < b) {
			cout << "a<b";
		}
	}*/
	//zad.3
	/*double r;
	cout << "podaj r:";
	cin >> r;
	if (0.7 <= r && r <=1 ) {
		cout << "bardzo silna korelacja dodatnia";
	}
	else if (0.5 <= r) {
		cout <<	"silna korelacja dodatnia";

		}
	else if (0.3 <= r) {
		cout <<	"umiarkowana korelacja dodatnia";
		}
	else if (0.2 <= r) {
			cout << "slaba korelacja dodatnia";
		}
	else if (0 <= r) {
			cout << "brak korelacji";
		}*/
	//zad.4
	/*double x, y;
	char znak;
	cout << "podaj 2 liczby:";
	cin >> x >> y;
	cout << "znak dzialania:";
	cin >> znak;
	if (znak == '+') {
		cout << x + y;
	}
	else if (znak == '-') {
		cout << x - y;
	}
	else if (znak == '*') {
		cout << x * y;
	}
	else if (znak == '/' && y == 0) {
		cout << "nie mozna dzielic przez 0!!!";
	}
	else if (znak == '/') {
		cout << x / y;
	}*/
	//zad.5
	/*int i;
	i = 1;
	while(1) {
		cout << i;
	}*/
	
	//zad.6
	double x, y;
	char znak;
	cout << "podaj 2 liczby:";
	cin >> x >> y;
	cout << "znak dzialania:";
	cin >> znak;
	if (znak == '+') {
		cout << x + y;
	}
	else if (znak == '-') {
		cout << x - y;
	}
	else if (znak == '*') {
		cout << x * y;
	}
	else if (znak == '/' && y == 0) {
		cout << "nie mozna dzielic przez 0!!!";
	}
	else if (znak == '/') {
		cout << x / y;
	}
	//zad.7
	int i;
	i = 0;
    while (1) {
		if (i == 200) {
		break;
			}
		if (i % 2 == 0) {
		continue;
			}
		cout << i;
		i++;
	}
	//zad.8

	



return 0;
}