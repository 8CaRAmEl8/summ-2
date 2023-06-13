#include<iostream>
using namespace std;

double summ(double a,double b) {
	return a + b;
}
int main() {
	double a, b;
	cin >> a;
	cin >> b;
	cout << summ(a, b) << endl;
	return 0;
}