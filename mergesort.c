#define max 100
#include<stdio.h>

void m_sort(int[],int[],int,int);
void merge(int[],int[],int,int,int);
main()
{
     int a[max],t[max],n,i;
      printf("\n enter size of array",n);
      scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

      m_sort(a,t,0,n-1);

printf("\n elements are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void m_sort(int a[],int t[],int lb,int ub)
{
    int mid=0;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        m_sort(a,t,lb,mid);
        m_sort(a,t,mid+1,ub);
        merge(a,t,lb,mid+1,ub);
    }
}
void merge(int a[],int t[],int lb,int mid ,int ub)
{
    int i=0,k=lb,le=mid-1;
            while(lb<=le&&mid<=ub)
            {
                if(a[lb]<a[mid])
                   {
                       t[k]=a[lb];
                        k++;
                         lb++;
                   }
                   else{
                       t[k]=a[mid];
                       k++;
                       mid++;
                     }
                }

        while(lb<=le)
        {
            t[k]=a[lb];
            k++;
            lb++;
        }
        while(mid<=ub)
        {
            t[k]=a[mid];
            k++;
            mid++;
        }
        for(i=0;i<=ub;i++)
        {
            a[i]=t[i];
        }

}