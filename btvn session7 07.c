#include<stdio.h>
int main(){
	int a;
	int num[a];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&a);
	if(a<=0){
		printf("So phan tu khong hop le\n");
		return 1;
	}
	for(int i=0;i<a;i++){
		int b;
		do{
			printf("Nhap phan tu thu %d: ",i+1);
			scanf("%d",&b);
			if(b%2==0){
				printf("Phan tu khong hop le\n");
			}
		}while(b%2==0);
		num[i]=b;
	}
	printf("Cac phan tu trong mang la: \n");
	for(int i=0;i<a;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
