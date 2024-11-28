#include<stdio.h>
int main(){
	int num[]={1,2,3,4,5};
	int length=sizeof(num)/sizeof(num[0]);
	printf("Cac phan tu trong mang la: \n");
	for(int i=0;i<length;i++){
        printf("Phan tu thu %d: %d\n",i, num[i]);
    }
    printf("Do dai cua mang la: %d\n",length);
	return 0;
}
