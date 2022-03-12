#include<iostream>
using namespace std;

int main(){
    
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        
        int sum=0;
        int count =0;
        for(int i=1;i<=a;i++){
            count++;
            if(a<0){
                cout<<"0"<<endl;
            }
            else if(count%6==0){
            int Count=0;
            Count++;
            sum+=Count;
           }
           
        }
        cout<<sum<<endl;
    }
   
}
    
