#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution <int> distrib (0,11);
    int daysUntilExpiration =distrib(gen);

    if(daysUntilExpiration ==0)

    cout<<"your subscription has expired"<<endl;

    else if(daysUntilExpiration ==1)
    cout <<"your subscription expires within a day \n""Renew now and save 20%";
    else if(daysUntilExpiration <=5){
    cout <<"your subscription expires in : \n"<<daysUntilExpiration;
    cout <<"Renew now and save 10%"<<endl;
    }
    else if(daysUntilExpiration <=10)
    cout <<"your subscription will expire soon \n""Renew now" <<endl;
    
    else
    cout <<"you have an active subscription"<<endl;

}