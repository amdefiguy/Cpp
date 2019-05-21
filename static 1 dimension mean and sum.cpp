#include <stdio.h>
int main()
{

    int num[2][3]={{27,64,19},{22,87,12}};
    num[0][0]=27;
	num[0][1]=64;
	num[0][2]=19;
	num[1][0]=22;
	num[1][1]=87;
	num[1][2]=12;
    int sum=num[0][0]+num[0][1]+num[0][2]+num[1][0]+num[1][1]+num[1][2];
    
    int mean=sum/6;
    
        {
		
    }
    printf("The sum of all the elements is:%d\n",sum);
    printf("The mean of all the elements is:%d\n",mean);
    return 0;
}

