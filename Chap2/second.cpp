//second.cpp -- Przelicznik mil morskich na metry

#include <iostream>
int przelicznik(int);

int main()
{
	using namespace std;
	cout << "Prosze podac odleglosc w milach morskich: ";
	int mile;
	cin >> mile;
	int metters = przelicznik(mile);
	cout << mile << " mil morskich to: " << metters << " metrow" << endl;
	cin.get();
	cin.get();
	return 0;
}

int przelicznik(int n)
{
	return 1852 * n;
}