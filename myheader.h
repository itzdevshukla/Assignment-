#ifndef myheader_h
#define myheader_h
#include <stdio.h>
int armstrong(int a){
	int temp =  a;
	int sum = 0,length = 0;
	while(a!=0){
		length++;
		a = a/10;
	}
	a = temp;
	while(a!=0){
		int ld = a%10;
		int power = 1;
		for(int i = 0;i<length;i++){
			power *= ld;
		}
		sum += power;
		a=  a/10;
	}
	return(sum == temp);
}
int strong(int x){
	int temp = x;
	int sum = 0;
	while(x!=0){
		int ld = x%10;
		int fac = 1;
		for(int i = 1;i<=ld;i++){
			fac *= i;
		}
		sum += fac;
		x = x/10;
	}
	return (sum == temp);
}
int powercheck(int z){
	if(z<=0){
		return 0;
	}
	while(z%2==0){
		z /= 2;
	}
	if(z==1){
		return 1;
	}
	else{
		return 0;
	}

}

#endif