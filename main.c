#include <stdio.h>
#include "myMath.h"

double f1(double x);
double f2(double x);
double f3(double x);

int main(){
	double x;
	printf("Please insert a real number:");
	scanf("%lf",&x);
	printf("The value of f1(x) =%0.4lf\n",f1(x));
	printf("The value of f2(x) =%0.4lf\n",f2(x));
	printf("The value of f3(x) =%0.4lf\n",f3(x));
	return 0;
}

double f1(double x){
	int y=(int)x;
	return sub(add(Exp(y),Pow(x,3)),2);
}

double f2(double x){
	double y=add(mul(3,x),mul(2,Pow(x,2)));
	return y;
}

double f3(double x){
	return sub(div(mul(4,Pow(x,3)),5),mul(2,x));

}
