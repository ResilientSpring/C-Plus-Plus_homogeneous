#include <algorithm>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

class Tomasulo {
public:

	Tomasulo(string insts, int adder_num, int multiplier_num, int load_buffer_num, int store_buffer_num, 
		int float_reg_num, int int_reg_num, int mem_size) {

	}
};

class reservation_station {
public:

	reservation_station(int address_num, int multiplier_num) {

	}
};

class adder {
	adder(int i) {
		int index = i;
		string name = "Add_" + to_string(i);
		int time = -1;
		bool busy = false;
		bool op = NULL;
		bool vj = NULL;
		bool vk = NULL;
		bool qj = NULL;
		bool qk = NULL;
		int result = 0;
	}
};

int main() {
	string LD = "LD";
	string SD = "SD";
	string ADDD = "ADD.D";
	string SUBD = "SUB.D";
	string MULD = "MUL.D";
	string DIVD = "DIV.D";
}