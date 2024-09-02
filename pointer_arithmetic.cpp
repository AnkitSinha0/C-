#include <iostream>
using namespace std;
/*
int main(){
    int a=5;
    int *ptr = &a;
    cout<<"value before increment "<<ptr<<endl;
    ptr++;
    cout<<"value after increment "<<ptr<<endl;
    ptr--;
    cout<<"value after decrement "<<ptr<<endl;
}*/
/*int main(){
    int a=1;
    int *ptr =&a;
        cout<<"value before addition "<<ptr<<endl;
    ptr+=5;
    cout<<"value after increment "<<ptr<<endl;


}*/
//same for subtraction
/*
int main(){
    int a=5;
    int b=6;
    int *ptr1=&a;
    int *ptr2=&b;
    cout<<"value of ptr1 "<<ptr1<<endl;
    cout<<"value of ptr2 "<<ptr2<<endl;
    int sub=ptr1-ptr2;
    cout<<sub;

}*/
/*
int main(){
    int *ptr=NULL;
    if (ptr==NULL){
        cout<<"pointer is NULL";
    }else{
        cout<<"pointer isn't NULL";
    }
}*/
int main()
{

    int num = 10;
    int* ptr1 = &num;
    int** ptr2 = &ptr1;
    int* ptr3 = *ptr2;

        cout << "ptr1 points to: " << ptr1 << endl;
        cout << "ptr3 points to: " << ptr3 << endl;

}
