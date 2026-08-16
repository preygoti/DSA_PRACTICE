#include<stdio.h>
#include<conio.h>
int main()
{
    

    int no,key;

    printf("enter the no that you want to add as element in your array :");
    scanf("%d",&no);

    int array[no];

    for(int i=0;i<no;i++)
    {
        printf("enter the element [%d] :",i);
        scanf("%d",&array[i]);
    }

     for(int i=0;i<no;i++)
    {
        printf("\narray is [%d] : %d ",i,array[i]);
        
    }

    printf("\nenter key element that you want to find :");
    scanf("%d",&key);

    int count=0;

    for(int i=0;i<no;i++)
    {
        count++;

        if(key==array[i])
        {
            break;
        }
        
    }

    printf("total number of comparision is %d ",count);



}