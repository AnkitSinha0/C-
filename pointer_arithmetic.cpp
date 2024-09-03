#include <iostream>
using namespace std;
//increment pointer
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
//same for decrement
/*int main(){
    int a=1;
    int *ptr =&a;
        cout<<"value before addition "<<ptr<<endl;
    ptr+=5;
    cout<<"value after increment "<<ptr<<endl;


}*/
//same for subtraction
/*
//subtracting two pointer
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
//comparing two pointers first is null and second double pointer
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
    // declaring some pointers
    int num = 10;
    int* ptr1 = &num;
    int** ptr2 = &ptr1;
    int* ptr3 = *ptr2;

    // comparing equality
    if (ptr1 == ptr3) {
        cout << "Both point to same memory location";
    }
    else {
        cout << "ptr1 points to: " << ptr1 << endl;
        cout << "ptr3 points to: " << ptr3 << endl;
    }
    return 0;
}
