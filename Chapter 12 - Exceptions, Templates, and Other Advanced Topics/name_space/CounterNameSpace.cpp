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
	};

}