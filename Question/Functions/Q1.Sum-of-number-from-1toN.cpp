//Calculate sum of number from 1 to N

#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}



int main(){
    cout<< sum(5) <<endl;
    cout<< sum(10) <<endl;
}