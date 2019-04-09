/*
 * 999 Buffer Overflow
 * By: James Andrews
 * <jandrews7348@floridapoly.edu>
 */

#include <stdio.h>

int main(){
	int a[100];
	char b[100];
	for(int i=0; i<1000; i++){
//		char c = b[i];
		int aPtr = &a[i];
		printf("%p\t", aPtr);
		printf("%10p", a[i]);
		printf("\t%c", b[i]);
		puts("");
		++aPtr;
		
		if(i==100){
			puts("Start Buffer Overflow:");
		}
	}
}
