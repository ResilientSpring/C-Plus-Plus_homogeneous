#include <stdio.h>
void compare_strings(const char *X, const char *Y, int N) {
	int A = 0, B = 0;
	int countX[256] = { 0 }, countY[256] = { 0 };
	char partA[11] = { 0 }, partB[11] = { 0 };
	int indexA = 0, indexB = 0, partAN[11];
	for (int i = 0; i < N; i++) {
		if (X[i] == Y[i]) {
			partA[indexA++] = X[i];
			A++;
		}
		else {
			countX[(unsigned char)X[i]]++;
			countY[(unsigned char)Y[i]]++;
		}
	}
	for (int i = 0; i < 256; i++) {
		int min_count = (countX[i] < countY[i]) ? countX[i] : countY[i];
		if (min_count > 0) {
			for (int j = 0; j < min_count; j++)
				partB[indexB++] = i;
			B += min_count;
		}
	}
	printf("%dA%dB; A: %s, B: %s", A, B, partA, partB);
}
int main() {
	compare_strings("3A5@3", "35A63", 5);
	compare_strings("f%09#2", "g5029#", 6);
	return 0;
}