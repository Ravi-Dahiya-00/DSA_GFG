#include <iostream>
using namespace std;

int fun_sum(int n,int &sum){
    if(n==0) return sum;
    sum+=n;
    fun_sum(n-1,sum);
    return sum;
}
int main() {
    int n;
    cin >> n;
    
    int a=0;
    int ans=fun_sum(n,a);
    
    cout << a;

    return 0;
}