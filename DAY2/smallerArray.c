#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={8,1,2,2,3};
    int n=5;
    int c;
    int i,j;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]&&i!=j){
                c++;
            }
        }
        printf("%d\t",c);
    }
}
