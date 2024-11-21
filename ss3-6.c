#include<stdio.h>
int main(){
	float do_dai_canh, chieu_cao, dientich;
	printf("nhap do dai canh: ");
	scanf("%f",&do_dai_canh) ;
	printf("nhap chieu cao:");
	scanf("%f",&chieu_cao) ;
	dientich=(do_dai_canh+chieu_cao)/2; 
	 printf("dien tich tam giac la %f",dientich);
	return 0; 
} 
