#include<stdio.h>
int main(){
	int num[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		if(num[i]%2==0){
			num[i]+=3;
		}else{
			num[i]+=2;
		}
	}
	printf("Input: 1 2 3 4 5\n");
	printf("Output: \n");
	for(int i=0;i<5;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
