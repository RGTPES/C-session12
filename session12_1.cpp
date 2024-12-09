#include<stdio.h>
int tinh_tong(int a ,int b){
	return a + b;
}
int check(int a){
	if(a%2==0) printf("%d la so chan",a);
	else printf("%d la so le",a);
	
}
int main(){
	int so1,so2,tong;
printf("nhap so thu 1 ");
scanf("%d",&so1);
printf("nap so thu 2 ");
scanf("%d",&so2);
tong = tinh_tong(so1,so2);
printf("tong cua so %d va %d la %d \n",so1,so2,tong);	
check(tong);






return 0;

}

