#include<stdio.h>
#include<math.h>
int main (){
float a,b,c,x1,x2;
double delta;
printf("Enter a b c:");
scanf("%f%f%f",&a,&b,&c);
delta=b*b-4*a*c;
if(a==b&&b==c&&c==0){
	printf("Zero Equation");
}else if(a==b&&b==0&&c!=0){
printf("Not An Equation");
}else if(a==0&b!=0&&c!=0){
	float p;
	p=-c/b;
	printf("%0.2f",p);
}else{
if(delta>0){
x1=(-b-sqrt(delta))/2/a;
x2=(-b+sqrt(delta))/2/a;
if(x2>x1){
	double q;
	q=x2,x2=x1,x1=q;
	printf("%0.2f\n%0.2f",x1,x2);
}else{printf("%0.2f\n%0.2f",x1,x2);
}
}else if(delta==0){
	double h;
	h=(-b-sqrt(delta))/2/a;
	printf("%0.2lf",h);
}else{x1=(-b)/2/a;
x2=(-b)/2/a;
double y;
y=sqrt(-delta)/2/a;
	printf("%0.2f+%0.2lfi\n%0.2f-%0.2lfi",x1,y,x2,y);
}}
return 0;
}
