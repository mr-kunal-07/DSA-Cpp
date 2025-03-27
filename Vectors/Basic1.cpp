#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec;

    // vector<int> vec = {1,2,3,5};

    vector<int> vec(4,7);

    for(int i : vec) cout<<i << endl;



    return 0;
}