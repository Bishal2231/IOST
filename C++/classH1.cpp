// Dear Students please share code with output of memory allocation
//  for object and inline and outside function definition of member function
#include <iostream>
using namespace std;

class addition{
private:
int a,b;
public:

addition(int first, int second){
a=first;
b=second;

};
void display(){
    cout<<"the sums "<<a+b;
};
void sum();

};
void addition::sum(){

    cout<<"outline function working";
}


int main(){

addition obj1(22,23);
obj1.display();
obj1.sum();

cout<<"the size of "<<sizeof(obj1);

return 0;

}