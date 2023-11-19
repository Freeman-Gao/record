#include<stdio.h>
int main(){
	int salary;
	float tax;
	printf("Please enter salary:");
	scanf("%d",&salary);
	if(salary<=1600){
		tax=0.00;
		printf("tax=%0.2f",tax);
	}else if(salary>1600&&salary<=2500){
		tax=0.05*(salary-1600);
		printf("tax=%0.2f",tax);
	}else if(salary>2500&&salary<=3500){
		tax=0.1*(salary-1600);
		printf("tax=%0.2f",tax);
	}else if(salary>3500&&salary<=4500){
		tax=0.15*(salary-1600);
		printf("tax=%0.2f",tax);
	}else if (salary>4500){
		tax=0.2*(salary-1600);
		printf("tax=%0.2f",tax);
	}else{
		printf("Wrong!!!!!!");
	}
	return 0;
}
