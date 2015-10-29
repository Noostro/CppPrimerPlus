//Write a C++ program that asks for a distance in furlongs and converts it to yards.
//(One furlong is 220 yards.)

#include <iostream>
int przelicznik(int);

int main()
{
	using namespace std;
	cout << "Enter the distance in farlongs: ";
	int furlongs;
	cin >> furlongs;
	int yards = przelicznik(furlongs);
	cout << furlongs << " furlongs is a: " << yards << " yards" << endl;
	cin.get();
	cin.get();
	return 0;
}

int przelicznik(int n)
{
	return 220 * n;
}