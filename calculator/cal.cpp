#include <iostream>
using namespace std;

int main(){
    int a ,b ,total;
    char c;
    cout<<"enter the number one"<<endl;
    cin>>a;
    
    cout<<"enter the number second"<<endl;
    cin>>b;
    
    cout<<"calculation: ";
    cin>>c;
    
    switch (c){
        
        case '+':
             total = a+b;
             break;
        case '-':
             total = a-b;
             break;
        case '*':
            total = a*b;
            break;
        case '/':
            total = a/b;
            break;
    }
    cout<<"total: "<<total<<endl;
}