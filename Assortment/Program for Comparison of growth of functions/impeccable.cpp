#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

int f(int x){
	return(x);
}

int f2(int x){
	return(x*x);
}

double flog(double x)
{
	if(x==0)
		return (999);
	else
	    return (log(x));

}

void main(void) {
	/* request auto detection */
	int gdriver = DETECT, gmode, errorcode;
	int midx, midy, i, j, k;
	double lg;
	int mx, my, x, y;
	static int l;
	int m;
	int n = 12345;
	char s[25];

}