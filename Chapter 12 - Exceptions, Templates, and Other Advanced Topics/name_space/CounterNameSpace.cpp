// Demonstrate a namespace

namespace CounterNameSpace {

	int upperbound;
	int lowerbound;

	class counter {
		int count;

	public:
		counter(int n) {
			if (n <= upperbound) count = n;
			else count = upperbound;
		}

		void reset(int n) {
			if (n <= upperbound) count = n;
		}

		int run() {
			if (count > lowerbound)
				return count--;
			else
				return lowerbound;
		}

	};

}


int main() {

	//Explicitly refer to members of CounterNameSpace. Note the use of scope resolution operator.
	CounterNameSpace::upperbound = 100;
	CounterNameSpace::lowerbound = 0;

	CounterNameSpace::counter ob1(10);

	int i;

	do
	{

	} while (i > CounterNameSpace::lowerbound);

}
