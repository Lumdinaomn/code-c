#include <iostream>
#include <cmath>
using namespace std;

 /* bool sodep(int n){
    for(int i=2;i*i<=n;i++){
        if(n%(i*i)==0){
            return true;
        }
    }
    return false;
  }
  int main(){
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        if(sodep(i)){
            cout<<i<<" ";
        }
    }
  }*/
 int main(){
    int l ,r;
    cin>>l>>r;
    for(int n=l;n<=r;n++){
        for(int i=2;i*i<=n;i++){
            if(n%(i*i)==0){

                cout<<n<<" ";
               
            }
        }
    }
    return 0;
 }



  




