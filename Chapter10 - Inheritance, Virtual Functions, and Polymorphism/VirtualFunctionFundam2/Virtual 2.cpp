// A short example that uses a virtual function.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>    // [1]
using namespace std;

class B {

public:

	// Declare a virtual function.
	virtual void who() {
		cout << "Base\n";
	}

	void when() { 

		time_t rawtime;
		struct tm * timeinfo;

		time(&rawtime);
		timeinfo = localtime(&rawtime);
		printf("Current local time and date: %s", asctime(timeinfo));

	}

};

class D1 : public B {

public:

	// redefine who() for D1
	void who() {

		cout << "First derivation\n";

	}

	void when() {

		time_t now = time(0); // Get the system time


	}

};

class D2 : public B {

public:

	// redefine who() for D2
	void who() {

		cout << "Second derivation\n";

	}

	void when() {

		time_t mytime = time(NULL);
		char * time_str = ctime(&mytime);
		time_str[strlen(time_str) - 1] = '\0';

		printf("Current Time : %s\n", time_str);

	}

};


int main() {

	B base_obj;

	B* p;

	D1 D1_obj;
	D2 D2_obj;

	p = &base_obj;

	p->who();
	p->when(); 

	p = &D1_obj;
	p->who();
	p->when();

	// Since when() is not declared as a virtual function in the base class, a base class pointer can
	// be used to access only those parts of a derived class' object that were inherited from the 
	// base class.

	p = &D2_obj;
	p->who();
	p->when();

	// In other words, normally, a base class pointer can only access parts of a derived class' object
	// that were inherited from base class.
}

// Reference: 
// 1. https://stackoverflow.com/questions/5141960/get-the-current-time-in-c