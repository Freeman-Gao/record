#include<stdio.h>
int main(){
	double price,Total;
	int a,b,c,m,e;
    printf("please enter a b c:");
    scanf("%d%d%d",&a,&b,&c);
    switch(b){
    	case 90:price=6.95;break;
    	case 93:price=7.44;break;
    	case 97:price=7.93;break;
        default:price=0;break;    	
	}
	if(m){
		Total=0.95*a*price;
		printf("Total=%0.2lf",Total);
		
	}else{
		Total=0.97*a*price;
		printf("Total=%0.2lf",Total);}
	return 0;
}
