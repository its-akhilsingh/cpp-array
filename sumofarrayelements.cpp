#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int tot_sum = 0;
    for(int i=0; i<n; i++)
        tot_xor += a[i];
    cout << tot_sum << endl;
}