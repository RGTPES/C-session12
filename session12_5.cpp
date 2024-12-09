#include<stdio.h>
void prime(int a){
	int count = 0;
	for(int i =1;i<=a;i++){
	if(a % i==0) count++;
	
	}if(count==2) printf("%d la so nguyen to ",a);
	else printf("%d khong phai la so nguyen to ",a);
}
int main(){
	int num1,num2;
printf("nhap so thu 1 ");
scanf("%d",&num1);
printf("nap so thu 2 ");
scanf("%d",&num2);
prime(num1);
printf("\n");
prime(num2);



return 0;

}

