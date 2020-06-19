#include<stdio.h>
int main()
{
	int h=0,m=0,s=0;
	double i;
	printf("Enter Time In Hour
	: h Minitue: m Second: s     -");
	scanf("%d %d %d",&h,&m,&s);
	start:;
	for(h;h<24;h++){
		for(m;m<60;m++){
			for(s;s<60;s++){
				printf("\t\t\t\t\t%d:%d:%d\n",h,m,s);
				for(i=0;i<90999999;i++){
					i++;
					i--;
				}
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
}
