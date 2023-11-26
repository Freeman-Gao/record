#include<stdio.h>
int main(){
	int k,mn=77,yn;
	printf("guess my number:");
	for(k=1;k<=7;k++){
	scanf("%d",&yn);
	if(yn==mn){break; 
	}else if(yn>mn){
		printf("smaller\n");
}else{printf("bigger\n");
}
}if(k<=3){printf("Lucky you");
}else if(k>3&&k<7){printf("good guess");
}else{printf("pity");}
return 0;
}
