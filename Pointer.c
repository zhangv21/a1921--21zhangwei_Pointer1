#include <stdio.h> 
void Exchange(int *ptr_var1,int *ptr_var2,int *ptr_var3){
	int tmp1;
	int tmp2;
	tmp1=*ptr_var1;
	tmp2=*ptr_var2;
	*ptr_var1=*ptr_var3;
	*ptr_var2=tmp1;
	*ptr_var3=tmp2;
}
void Swap(int *pt1,int *pt2){
	int p;
	p=*pt1;
	*pt1=*pt2;
	*pt2=p;
}

int main(){
	int var1,var2,var3;
	int a,b;
	int *pt1,*pt2;
	printf("请输入三个数:");                                                   
	scanf("%d %d %d",&var1,&var2,&var3);
	scanf("%d %d",&a,&b);
	pt1=&a;pt2=&b;
	if(a<b)Swap(pt1,pt2);
	Exchange(&var1,&var2,&var3);
	printf("数据调换后排序:%d %d %d\n",var1,var2,var3);
	printf("数据比较后排序:%d %d\n",*pt1,*pt2);
	return 0;
}

