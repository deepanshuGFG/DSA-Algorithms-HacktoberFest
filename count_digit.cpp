#include <iostream>
using namespace std;

int main() {
    long long x;
    cin>>x;
    long long count = 0;
    while(x>0)
    {
        x = x/10;
        count++;
    }
    cout<<count;

    return 0;
}
