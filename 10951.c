#include<stdio.h>
#include<stdlib.h>

int A[1000000];

int main(){

int N,i,ans,j;

while(1){
    scanf("%d",&N);
    if(N==0){
        break;
    }
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    ans=0;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(A[i]>A[j]){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    ans=0;

}


return 0;
}
