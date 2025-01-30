// Dear Students Kindly write a program for addition with taking input
//  from user, by using class, object and access modifier private and public.
#include <iostream>
using namespace std;
class addition{
    private:
    int a,b;
    public:
    void setdata(int first,int second){
        a=first;
        b=second;
   
    }
    int add(){
     return   a+b;

    }

    void answer(){
        cout<<"the addition is "<<add()<<endl;
    }
};
int main(){

    addition obj1;
    obj1.setdata(22,23);
    obj1.answer();
    return 0;

}