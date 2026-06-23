class IamBaseClass {

public:

	int a;

};

class Derived_Class :public IamBaseClass {

public:

	int b;

};

int main() {

	IamBaseClass base;

	Derived_Class derivation;

	base = derivation;

}