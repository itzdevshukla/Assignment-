#include <stdio.h>
#include "myheader.h"
int main() {
	int a;
	printf("ENTER A NUMBER : \n");
	scanf("%d",&a);
	int result = armstrong(a);
	if(result == 1){
		printf("YES %d is an armstrong number.\n",a);
	}
	else{
		printf("NO %d is not an armstrong number.\n",a);
	}
	int b;
	printf("Enter a number :\n");
	scanf("%d",&b);
	int strongnumber = strong(b);
	if(strongnumber==1){
		printf("YES %d is a strong number.\n",b);
	}
	else{
		printf("NO %d is not a strong number.\n",b);
	}
	int c;
	printf("Enter a number :\n");
	scanf("%d",&c);
	int power = powercheck(c);
	if(power == 1){
		printf("YES %d is a power of 2.\n",c);
	}
	else{
		printf("NO %d is not a power of 2.\n",c);
	}
}
