#include<stdio.h>
int main(){
	int num[]={3,10,25,14,7};
	int soChan=0;
	printf("Cac so chan trong mang la: ");
    for(int i=0;i<5;i++){
        if(num[i]%2==0){
            printf("%d ",num[i]);
            soChan=1;
        }
    }
    if(!soChan){
        printf("Mang khong chua so chan");
    }
	return 0;
}
