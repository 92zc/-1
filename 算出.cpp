#include<stdio.h>
int main()
{
	int n=1;
	int m=2;
	switch(n)                     //switch��nΪ���
	{
	case 1:m++;                  //��case1���������m���3������break,��ʼִ��case2
	case 2:n++;                  //case2������n���2,����break,��ʼִ��case3
	case 3:      
		switch(n)               //switch����Ƕ��ʹ��
		{
		case 1:n++;             //n=2,����case1��ִ�У�case1��1���ж�switch(n)��ȥ��n�ǲ��ǵ���1
		case 2:m++;n++;break;   //m���4��n���3
		}                       //����breakֱ���������У�
		case 4:m++;             //m���5
			break;
		default:
			break;
	}                           //ֱ��������λ��
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
