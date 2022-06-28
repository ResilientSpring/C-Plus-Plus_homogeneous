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

string LD = "LD";
string SD = "SD";
string ADDD = "ADD.D";
string SUBD = "SUB.D";
string MULD = "MUL.D";
string DIVD = "DIV.D";

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
	string name;
	bool busy, vj, vk, qj, qk;

public:
	store_buffer(int i) {
		index = i;
		name = "Store_" + to_string(i);
		time = -1;
		busy = false;
		vj = NULL;
		vk = NULL;
		qj = NULL;
		qk = NULL;
		address = 0;
		result = 0;
		inst_index = -1;
		vk_broadcasted_cycle = -1;
		last_time_write = -1;
	}

	void reset() {
		time = -1;
		busy = false;
		vj = NULL;
		vk = NULL;
		qj = NULL;
		qk = NULL;
		address = 0;
		// result = 0;
		// inst_index = 0'

		vk_broadcasted_cycle = -1;
	}

	void print() {
		if (busy == false)
			busy = false;
		else
			busy = true;

		if (qk == NULL)
			qk == NULL;
		else
			qk = true;

		cout << "\t\t" << name << " \t " << busy << " \t " << address << " \t " << qk;
	}
};

class memory {


public:

	memory(int i) {
		int value;

		string name = "Memory_" + to_string(i);

		if (i % 8 == 0)
			value = 1;
		else
			value = 0;
	}
};

class register_result_status {
public:
	register_result_status(int float_register_number, int int_register_num) {

	}
};

class float_register {
	string name;
	int value;
	bool qi;

public:
	float_register(int i) {
		name = "F" + to_string(i * 2);
		value = 1;
		qi = NULL;
	}

	void print() {
		cout << "Register " << name << " Value: " << value;
	}
};

class integer_register {

	string name;
	int value;
	bool qi;

public:
	integer_register(int i) {
		name = "Integer Register " + to_string(i);
		value = 0;
		qi = NULL;
	}

	void print() {
		cout << "Register: " << name << ", value: " << value;
	}
};

class instruction_status {
	string LD = "LD";
	string SD = "SD";
	string name;
	int index, issue, complete, write, rs, rt, rd, offset;

public:
	instruction_status(string inst, int i) {
		name = inst[0];
		issue = complete = write = rs = rt = rd = offset = -1;
		index = i;
	}

	if (name == LD || name == SD)     //  The problem is that trying to use an if statement at namespace scope (global namespace) where only a declaration is valid.[1]
		offset = (int)inst[-1];

};


int main() {

}

// References:
// 1. https://stackoverflow.com/questions/15104067/error-expected-a-declaration