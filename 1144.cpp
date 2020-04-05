#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N;
    
    cin >> N;
    
    
    for (int i{1};i<=N;i++){
    
    int a,b,c,d;
    a=i*i;
    b=i*i*i;
    c=i*i+1;
    d=i*i*i+1;
        
  
    printf("%d %d %d\n",i,a,b);
    printf("%d %d %d\n",i,c,d);
        

    }
    return 0;
}
