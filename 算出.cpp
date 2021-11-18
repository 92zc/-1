#include<stdio.h>
int main()
{
	int n=1;
	int m=2;
	switch(n)                     //switch以n为入口
	{
	case 1:m++;                  //从case1里面进来，m变成3，后无break,开始执行case2
	case 2:n++;                  //case2进来，n变成2,后无break,开始执行case3
	case 3:      
		switch(n)               //switch允许嵌套使用
		{
		case 1:n++;             //n=2,所以case1不执行，case1的1是判断switch(n)进去的n是不是等于1
		case 2:m++;n++;break;   //m变成4，n变成3
		}                       //上行break直接跳到该行，
		case 4:m++;             //m变成5
			break;
		default:
			break;
	}                           //直接跳到该位置
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
