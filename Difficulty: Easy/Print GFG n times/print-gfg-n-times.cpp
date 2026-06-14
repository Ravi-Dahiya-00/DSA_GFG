#include <iostream>
using namespace std;

void print1(int count,int total){
    if(count==total) return;
    cout << "GFG ";
    print1(++count,total);
}
int main() {
    int n;
    cin >> n;

    
    print1(0,n);

    return 0;
}
