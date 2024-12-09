#include<stdio.h>
int giaiThua(int a){
	int ans = 1;
	for(int i =1;i<=a;i++){
		ans *=i;
	}
	printf("%d",ans);
	return ans;
}
int main(){
	int b;
	printf("nhap vao so de tinh luy thua : ");
	scanf("%d",&b);
	giaiThua(b);
	




return 0;

}

