#include <bits/stdc++.h>


using namespace std;

int main() {
    int N[1000],T,i,a=0;
    
    cin>>T;
    
    for(i=0;i<1000;i++){
    N[i]=a;
    if(a==T-1){
        a=0;
    }else{
    a+=1;
    }
        
}

    for(i=0;i<1000;i++)printf("N[%d] = %d\n",i,N[i]);

return 0;

}
