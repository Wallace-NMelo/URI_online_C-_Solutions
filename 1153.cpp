#include <bits/stdc++.h>



using namespace std;


int main() {
    int N,factorial{1};
    
    cin>>N;
    
    while(N>1){
    factorial*=N;
    N-=1;
    }

    cout<<factorial<<endl;
    
    
    
    return 0;


}
