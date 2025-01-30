#include <iostream>
using namespace std;
class  Sample{
    protected:
    int age;
};
class Samplechild:public Sample{
    public:
    void displayAge(int a ){
        age =a;
        cout<<"Age is "<<age<<endl;
    }

};


int main(){
    
    int ageInput;

     Samplechild child;
     cout<<"enter your age";
     cin>>ageInput;
     child.displayAge(ageInput);
     return 0;


}
