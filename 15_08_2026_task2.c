#include<stdio.h>
#include<conio.h>
int main()
{
    int total_student;

    printf("\nenter the roll no of student in you class (max student is 100 in class  ): ");
    scanf("%d",&total_student);

    int array[total_student];

    for(int i=0;i<total_student;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<total_student;i++)
    {
        printf("\nroll no array is %d",array[i]);
    }

    int key_roll;

    printf("\nenter the key roll no that you want to find in class:");
    scanf("%d",&key_roll);

    int count=0;

    for(int i=0;i<total_student;i++)
    {
        count++;

        if(array[i]==key_roll)
        {
            printf("\nstudent found on position no %d",i+1);
            printf("\ntotal number of comparisons = %d",count);

            return 0;

        }
    }
    
    printf("\nstudent not found in class !!!!!");
    printf("\ntotal number of comparisons = %d",count);
        



}