#include <iostream>
#include <string>

using namespace std;
int main(){
    string array1[8] ={"B123","C234,","A345","C15","B177","G3003","C235","B179"};
     char target = 'B';

    for(int i = 0; i < 8; i++)
            if(array1[i][0] == target)
                cout <<array1[i]<<endl;

}