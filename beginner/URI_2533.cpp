#include <bits/stdc++.h>


using namespace std;

int main() {
    int M,N,C,Num,Den,i;
    double result;
      
    while(scanf("%d",&M)!=EOF){ 
    
    
    Num=Den=0;
    for(i=0;i<M;i++){
        cin>>N>>C;
        Num+= N*C;
        Den+= C;        
        }
    result=Num/((double)Den*100.0);
    cout<<fixed<<setprecision(4)<<result<<endl;
    
    
        
}
    return 0;


}
