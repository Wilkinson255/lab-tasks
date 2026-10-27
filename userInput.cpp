#include <iostream>

using namespace std;
int main(){
int x;
    
bool isValid = false;

while(!isValid){
    cout <<"Enter an integer value between 5 and 10 : "<<endl;
    if(!(cin >> x)){
    cout <<"sorry you entered an invalid number,please try again"<<endl;
    }
    else if(x >= 5 && x <= 10){
    cout <<" your input value("<<x<<") has been accepted. \n";
    isValid = true;
    }

    else
   cout <<"you entered  "<< x<<". please enter a number between 5 and 10.";

}


}