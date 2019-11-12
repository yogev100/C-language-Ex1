#include <stdio.h>
#include "myMath.h"

#define EXP 2.71828182846

double Exp(int x){
	double sum=1;
	if(x<0){
		int y=(-1)*x;
		for(int i=0;i<y;i++){
			sum=sum*EXP;
		}
		return 1/sum;
	}
	else {	
		for(int i=0;i<x;i++){
			sum=sum*EXP;
		}
		return sum;
	}
}
double Pow(double x,int y){
	double sum=1;
	if(y<0){
		int z=(-1)*y;
		for(int i=0;i<z;i++){
			sum=sum*x;
	}
		return 1/sum;
	}
	else {
		for(int i=0;i<y;i++){
			sum=sum*x;
	}
	return sum;
	}
}

