#include <stdio.h>
#include<conio.h>
void main()
{
void cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    sum=n;
    int hash[n];
    int rating[n];
    for(i=0;i<n;i++){
        hash[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&rating[i]);
    }
    for(i=1;i<n-1;i++){
        if(rating[i-1]<rating[i]){
            hash[i]=hash[i-1]+1;
        }
    }
    for(i=n-2;i>=0;i--){
        if(rating[i]>rating[i+1]){
            if(hash[i]>hash[i+1]){
                hash[i]=hash[i]+1;
            }
            else{
                hash[i]=hash[i+1]+1;
            }
        }
    }
    for(i=1;i<n;i++){
        
        sum=sum+hash[i];
    }
    printf("%d",sum);
    return 0;
}
