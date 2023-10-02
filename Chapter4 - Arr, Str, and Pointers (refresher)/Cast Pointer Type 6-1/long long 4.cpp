#include <iostream>
using namespace std;

int main() {

	cout << "sizes: double = " << sizeof(double);
	cout << ", long long = " << sizeof(long long);
	cout << ", int = " << sizeof(int);
	cout << ", char = " << sizeof(char) << endl;


	double d;
	double *dp;
	long long *lp;
	int *ip;
	char *cp;

	dp = &d;
	cout << "How large is a memory address? " << sizeof(dp) << endl << endl;
	lp = (long long *)&d;
	ip = (int *)&d;
	cp = (char *)&d;

	printf("dp == %p, lp == %p\nip == %p, cp == %p\n\n", dp, lp, ip, cp);


	cout << "dp == " << dp << ", lp == " << lp << endl;
	cout << "ip == " << ip << ", cp == " << cp << "\n\n";  // Print memory address of a string of characters.

	d = 42.0;
	printf("*dp == %.20f, *lp == %lld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << "\n\n";

	cout << "How large is a memory address? " << sizeof(dp) << endl << endl;
	cout << dp << endl;
	cout << dp++ << endl << endl;

	*ip = 4200;
	printf("*dp == %.20f, *lp == %lld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << "\n\n";

	*cp = 42;
	printf("*dp == %.20f, *lp == %lld, *ip == %d, *cp == %d\n", *dp, *lp, *ip, *cp);
	cout << "*dp == " << *dp << ", *lp == " << *lp << ", *ip == " << *ip << ", *cp == " << *cp << "\n\n";

}