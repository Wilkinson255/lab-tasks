#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <int> distrib(0,11);

    int daysUntilExpiration = distrib(gen);

    cout <<daysUntilExpiration<<endl;

    switch(daysUntilExpiration){
        case 0:
        cout <<"your subscription has expired"<<endl;
        case 1:
        cout <<"Your subscription will expire within a day \n" "Renew now"<<endl;
        case 2:
        case 3:
        case 4:
        case 5:
        cout << "your subscription expires in: "<<daysUntilExpiration;
        cout << "Renew now and save 10%!"<<endl;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        cout <<"your subscription will expire soon.\n" "Renew now!"<<endl;
    


        
    }
}