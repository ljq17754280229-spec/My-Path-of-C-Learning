#include<stdio.h>
typedef struct
{
    int ID;
    double grade;
}Student;

void Rank_student(Student arr[],int n,int k);

int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);

    Student arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %lf",&arr[i].ID,&arr[i].grade);
    }
    Rank_student(arr,n,k);

    printf("%d %g",arr[k-1].ID,arr[k-1].grade);
}
void Rank_student(Student arr[],int n,int k)
{
    int i,j;
    Student temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j+1].grade>arr[j].grade)
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
