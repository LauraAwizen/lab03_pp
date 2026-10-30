

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
	int n;
	double granica;
	bool x;
	granica = sqrt(n);
	x = false;
	cout << "podaj n:";
	cin >> n;
	for(int i = 2;i <= granica; i++) {
		if(n%i==0) {
			cout <<"dzielnik "<<n<<" to:" << i;
			x = true;
			break;
		}
	}
	if (!x) {
		cout << "nie znaleziono dzielnika dla " << n;
	}
	//zad.9
	int t;
	cout << "podaj temperature:";
	cin >> t;
	if (t < 0) {
		cout << "mroz";
	}
	else if (t >= 0 && t < 10) {
		cout << "zimno";
	}
	else if (t >= 10 && t < 20) {
		cout << "umiarkowano";
	}
	else if (t >= 20 && t <30) {
		cout << "cieplo";
	}
	else if (t >= 30) {
		cout << "goraco";
	}
	//zad.10
	int a, b, c;
	cout << "podaj 3 liczby:";
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << a;
	}
	else if (a == b && a!= c) {
		if (a> c) {
			cout << a;
		}
		else if (c > a) {
			cout << c;
		}
	}
	else if (c == a && c != b) {
		if (c > b) {
			cout << c;
		}
		else if (b > c) {
			cout << b;
		}
	}
	else if (b == c && b != a) {
		if (b > a) {
			cout << b;
		}
		else if (a > b) {
			cout << a;
		}
	}
	else if (a > b && a > c) {
		cout << a;
	}
	else if (b > a && b > c) {
		cout << b;
	}
	else if (c > a && c > b) {
		cout << c;
	}
	//zad.11
	int rok;
	cout << "podaj rok:";
	cin >> rok;
	if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
		cout << "rok przestepny";
	}
	else {
		cout << "rok nieprzestepny";
	}
	//zad.12
	
	cout<<

	
	



return 0;
}