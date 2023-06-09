/*Constants ,Manipulators and Operator Precedence
When a constant variable is initialized its value cant be changed furthur in the program
Manipulators are endl and setw 
endl is used for getting the output in the next inline
setw is used to set the width of the output*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    int a=9,b=88,c=777,d=6666;
    //Manipulators,we need to include the header file manip
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;
    
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    cout<<"The value of d is: "<<setw(4)<<d<<endl;
    
    //Operator Precedence
    int k=10,l=8;
    int m=((((k*10)+l)-36)+(l/2));
    cout<<m<<endl;
    
    return 0;

}