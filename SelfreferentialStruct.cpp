#include <iostream>
using namespace std;
//example of single link
/*struct node{
    int d1;
    int d2;
    struct node* link;
};
int main(){
    struct node obj1;
    obj1.d1=10;
    obj1.d2=20;
    obj1.link=NULL;
    struct node obj2;
    obj2.d1=30;
    obj2.d2=40;
    obj2.link=NULL;
    obj1.link=&obj2;
    cout<<"value stored at d1 and d2 of obj1 "<<obj1.d1<<" "<<obj1.d2<<endl;
    cout<<"accesing obj2 values using obj1's link..."<<endl;
    cout<<"obj2'd1 and d2 "<<obj1.link->d1<<" "<<obj1.link->d2<<endl;
    return 0;
}*/
//example of multiple link
struct node{
    int d1;
    struct node* next_link;
    struct node* prev_link;
};
int main(){
    struct node obj1;
    obj1.d1=10;
    obj1.next_link=NULL;
    obj1.prev_link=NULL;
    struct node obj2;
    obj2.d1=20;
    obj2.next_link=NULL;
    obj2.prev_link=NULL;
    struct node obj3;
    obj3.d1=30;
    obj3.next_link=NULL;
    obj3.prev_link=NULL;

    obj1.next_link=&obj2;
    obj2.next_link=&obj3;

    obj2.prev_link=&obj1;
    obj3.prev_link=&obj2;

    cout<<"accesing obj2' data via obj1 "<<obj1.next_link->d1<<endl;

    cout<<"accesing obj3' data via obj2 "<<obj2.next_link->d1<<endl;

    cout<<"accesing obj1' data via obj2 "<<obj2.prev_link->d1<<endl;

    cout<<"accesing obj2' data via obj3 "<<obj3.prev_link->d1<<endl;

    return 0;

    
}
