#include <iostream>
using namespace std;

int main() {

	cout << "sizes: double = " << sizeof(double);
	cout << ", long = " << sizeof(long);
	cout << ", int = " << sizeof(int);
	cout << ", char = " << sizeof(char) << endl;

	double d;
	double *dp;
	long *lp;
	int *ip;
	char *cp;

	dp = &d;
	lp = (long *)&d;
	ip = (int *)&d;
	cp = (char *)&d;

	printf("dp == %p, lp == %p\nip == %p, cp == %p\n\n", dp, lp, ip, cp);


	cout << "dp == " << dp << ", lp = " << lp << endl;
	cout << "ip == " << ip << ", cp = " << cp << "\n\n";

	d = 42.0;
	printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << endl;
}