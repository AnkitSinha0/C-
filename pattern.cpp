#include <iostream>

using namespace std;

int main(){
    int a=5;
    //normal RAT
    for (int i=1;i<=a;i++){
        for (int j=0;j<i;j++){
             cout<<" *";
        }
        cout<<endl;
    }
    //normal LAT
    for (int i=1;i<=a;i++){
        for(int j=5;j>=1;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}