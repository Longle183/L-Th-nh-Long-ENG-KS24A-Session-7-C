#include<stdio.h>
int main(){
	int n;
	int num[n];
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&num[i]);
	}
	printf("Cac phan tu trong mang la: \n");
	for(int i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	return 0;
}
