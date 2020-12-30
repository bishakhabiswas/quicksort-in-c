#include<stdio.h>
int partition(int a[],int low,int high)
{
    int pivot, i,j,t;
    pivot=a[high];
    for(i=low-1,j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i+=1;
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }

    }
    t=a[high];
    a[high]=a[i+1];
    a[i+1]=t;
    return i+1;
}


    void quicksort(int a[],int low,int high)
    {
        if(low>=high)
        {
            return;
        }
        int p;
        p = partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);

    }
    int main()
    {


int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
   quicksort(a,0,n);
   for(int i=0;i<=n;i++)
   {
       printf("%d ",a[i]);

   }
   printf("%d\n");
    }




