#include<stdio.h>	
int main (void){

double cost,e;
printf("please enter e");
scanf("%lf\n",&e);
if(e<=50){
cost=e*0.53;
printf("cost=%0.2lf",cost);
	
}else if(e>50){
cost=50*0.53+(e-50)*0.58;
printf("cost=%0.2lf",cost);

}else{
	printf("Invalid Value!");
}
return 0;
}
