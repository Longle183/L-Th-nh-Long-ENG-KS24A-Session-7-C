#include<stdio.h>
int main(){
	int num[5]={18,3,6,12,8};
	int min=num[0];
	int max=num[0];
	for(int i=1;i<5;i++){
		if(num[i]>max){
			max=num[i];
		}
		if(num[i]<min){
			min=num[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n",max);
	printf("Phan tu nho nhat trong mang la: %d\n",min);
	return 0;
}
