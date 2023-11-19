#include<stdio.h>
int main(){
	int n,letter,digit,blank,other;
	char ad;
	printf("please Enter n:");
	scanf("%d",&n);
	getchar();
	printf("please enter punctuations less than %d:",n);
	for(int k=1;k<=n;k++){
		ad=getchar();
		if(ad>'a'&&ad<'z'||ad>'A'&&ad<'Z'){
			letter++;
		}
		else if(ad>'0'&&ad<'9'){
			digit++;
		}else if(ad==' '){
			blank++;
		}else{
			other++;
		}
	} 
	printf("letter=%d\nblank=%d\ndigit=%d\nother=%d",
	letter,blank,digit,other);
	return 0;
} 
