#include<stdio.h>
#include<math.h>
int main(){
	printf("enter a number :");
	char ad;
	int k=1;
	while(k>0){
		ad=getchar();
	    if(ad=='/r'){
			break;
		}else{
			int c;
			putchar(ad);
			putchar(' ');
		}
	}
	return 0; 
}
