#include<iostream>

using namespace std;

class NUM{
	int x;
	int y;
public:
NUM():x(7), y(10){};
	NUM(int x, int y) { this->x = x; this->y = y;};
	void printNUM();

};

void NUM::printNUM(){
	cout << " x = " << x << ", y = " << y << endl;
}

int main(){
	NUM a; // without init
	NUM b(1, 2); // user define init
	
	a.printNUM();
	b.printNUM();
	
	return 0;
}