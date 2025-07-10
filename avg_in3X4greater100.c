// Q 3) To find the average of those element which is above 100 in 3X4 array


#include<stdio.h>
int main()
{
    int arr[3][4];
    int i,j;
    int count=0;
    for(i=0;i<3;i++)
    {   printf("Enter the element of the row %d: ",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[i][j]>100)
            {
                sum+=arr[i][j];
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("No number is greater than 100");
    }
    else
    {
        float avg=sum/count;
    printf("The average of the numbers greater than 100 is %d",avg);
    }
    
    return 0;
}