#include <stdio.h>
int squareRoot(int x);

int main(int argc, char *argv[]) {
	int a = 27;
	printf("%d\n",squareRoot(a));
}
int squareRoot(int x){
	double r;
	for(r = x;(r*r - x) > 1 || -(r*r - x) < -1;r =(r + x/r)/2);
	
	return (int)r;
}

