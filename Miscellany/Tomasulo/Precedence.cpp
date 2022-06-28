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
public:

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
		int inst_index = -1;
		int vj_broadcasted_cycle = -1;
		int vk_broadcasted_cycle = -1;
		int last_time_write = -1;

	}
};

class multiplier {

	int index, result, instance_index, vj_broadcasted_cycle, vk_broadcasted_cycle, last_time_write;

public:

	multiplier(int i) {
		index = i;
		string name = "Mult_" + to_string(i);
		int time = -1;
		bool busy = false;
		bool op = NULL;
		bool vj = NULL;
		bool vk = NULL;
		bool qj = NULL;
		bool qk = NULL;
		result = 0;
		instance_index = -1;
		vj_broadcasted_cycle = -1;
		vk_broadcasted_cycle = -1;
		last_time_write = -1;
	}

	void reset() {

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