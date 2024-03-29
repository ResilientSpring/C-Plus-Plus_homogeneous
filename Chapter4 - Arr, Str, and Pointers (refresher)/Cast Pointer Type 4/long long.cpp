#include <iostream>
using namespace std;

int main() {

	cout << "sizes: double = " << sizeof(double);
	cout << ", long long = " << sizeof(long long);
	cout << ", long = " << sizeof(long);
	cout << ", int = " << sizeof(int);
	cout << ", char = " << sizeof(char) << endl;

	double d;
	double *dp;
	long long *llp;
	long *lp;
	int *ip;
	char *cp;

	dp = &d;
	llp = (long long *)&d;
	lp = (long *)&d;
	ip = (int *)&d;
	cp = (char *)&d;

	printf("dp == %p, llp == %p, lp == %p\nip == %p, cp == %p\n\n", dp, llp, lp, ip, cp);


	cout << "dp == " << dp << ", llp == " << llp << ", lp == " << lp << endl;
	cout << "ip == " << ip << ", cp == " << cp << "\n\n";  // Print memory address of a string of characters.

	d = 42.0;
	printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << "\n\n";

	*ip = 4200;
	printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << "\n\n";

	*cp = 42;
	printf("*dp == %.20f, *lp == %ld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << "\n\n";

}