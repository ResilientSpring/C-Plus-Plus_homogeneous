#include <algorithm>
#include <queue>
#include <string>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
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

	int index, time, result, instance_index, vj_broadcasted_cycle, vk_broadcasted_cycle, last_time_write;
	bool busy, op, vj, vk, qj, qk;

public:

	multiplier(int i) {
		index = i;
		string name = "Mult_" + to_string(i);
		time = -1;
		busy = false;
		op = NULL;
		vj = NULL;
		vk = NULL;
		qj = NULL;
		qk = NULL;
		result = 0;
		instance_index = -1;
		vj_broadcasted_cycle = -1;
		vk_broadcasted_cycle = -1;
		last_time_write = -1;
	}

	void reset() {
		time = 1;
		busy = false;
		op = NULL;
		vj = NULL;
		vk = NULL;
		qj = NULL;
		qk = NULL;
		// result = 0;
		// inst_index = -1;
		vj_broadcasted_cycle = -1;
		vk_broadcasted_cycle = -1;
	}
};

class load_buffer {
	int index, time, address, result, inst_index, vj_broadcasted_cycle, last_time_write;
	string name;
	bool busy, vj, vk, qj;
public:
	load_buffer(int i) {
		index = i;
		name = "Load_" + to_string(i);
		time = -1;
		busy = false;
		vj = NULL;
		qj = NULL;
		address = 0;
		result = 0;
		inst_index = -1;
		vj_broadcasted_cycle = -1;
		last_time_write = -1;
	}

	void reset() {
		time = -1;
		busy = false;
		vj = NULL;
		qj = NULL;
		address = 0;
		// result = 0;
		// inst_index = -1;
		vj_broadcasted_cycle = -1;
	}

	void print() {
		if (busy == false)
			busy = false;
		else
			busy = true;

		if (qj == NULL)
			qj = NULL;
		else
			qj = true;

		cout << "\t\t" << name << " \t " << busy << " \t " << address << " \t\t " << qj;
	}
};

class store_buffer {
	int index, time, address, result, inst_index, vk_broadcasted_cycle, last_time_write;

public:

};

int main() {
	string LD = "LD";
	string SD = "SD";
	string ADDD = "ADD.D";
	string SUBD = "SUB.D";
	string MULD = "MUL.D";
	string DIVD = "DIV.D";
}