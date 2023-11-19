#include<stdio.h>
int main (){
	int choice;
	double price;
	printf("[1]apple\n[2]pear\n[3]orangr\n[4]grape\n[0]exit\n");
	for(int x=0;x<=5;x++){
		printf("Enter number:");
		scanf("%d",&choice);
		switch(choice){
			case 1:price=3.00;break;
			case 2:price=2.50;break;
			case 3:price=4.10;break;
			case 4:price=10.20;break;
			default:price=0.0;break;
		}if(price==0.0){
			break;
		}else{
		printf("price=%0.1lf\n",price);}
	}
	return 0;
	
}
