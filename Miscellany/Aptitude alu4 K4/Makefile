CPP = g++
CPPFLAGS = -Wall -g -std=c++11 -O0
OBJS = anthology.o
DEPS = Graph_FlowNetWorks.cpp

BIG_K=4
ALU4_AAG="testcase/alu4.aag"
ALU4_OUT="alu4.aag_output"

BIG_AAG="testcase/bigkey.aag"
BIG_OUT="bigkey.aag_output"

C1908_AAG="testcase/c1908.aag"
C1908_OUT="c1908.aag_output"

C5315_AAG="testcase/c5315.aag"
C5315_OUT="c5315.aag_output"

alu4: anthology.exe
	./anthology.exe ${ALU4_AAG} ${BIG_K} ${ALU4_OUT}
	./checker ${ALU4_AAG} ${BIG_K} ${ALU4_OUT}

bigkey: anthology.exe
	./anthology.exe ${BIG_AAG} ${BIG_K} ${BIG_OUT}
	./checker ${BIG_AAG} ${BIG_K} ${BIG_OUT}

c1908: anthology.exe
	./anthology.exe ${C1908_AAG} ${BIG_K} ${C1908_OUT}
	./checker ${C1908_AAG} ${BIG_K} ${C1908_OUT}

c5315: anthology.exe
	./anthology.exe ${C5315_AAG} ${BIG_K} ${C5315_OUT}
	./checker ${C5315_AAG} ${BIG_K} ${C5315_OUT}

debug:anthology.exe
	./anthology.exe testcase/alu4.aag 6 output.aag

anthology.exe:${OBJS}
	${CPP} ${CPPFLAGS} -o $@ ${OBJS}

%o.: %.cpp ${DEPS}
	${CPP} -c -o $@ $< ${CPPFLAGS}

clean: 
	-rm -r *.o *.exe *.aag_output