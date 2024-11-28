#include<stdio.h>
int main(){
	int num[5];
	for(int i=0;i<5;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for(int i=0;i<5;i++){
        printf("Phan tu thu %d: %d\n",i+1, num[i]);
    }
	return 0;
}
