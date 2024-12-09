#include<stdio.h>
void perfect(int a){
	int sum =0;
	for(int i =1;i<=a/2;i++){
		if(a % i==0){
			sum+= i;
		}	
	}if (sum == a) printf("%d la so hoan hao",a);
	else printf("%d ko phai so hoan hao",a);

}
int main(){
	int num1,num2;
printf("nhap so thu 1 ");
scanf("%d",&num1);
printf("nap so thu 2 ");
scanf("%d",&num2);
perfect(num1);
printf("\n");
perfect(num2);



return 0;

}

