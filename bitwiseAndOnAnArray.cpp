#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int tot_and = a[0];
    for(int i=1; i<n; i++)
        tot_and &= a[i];
    cout << tot_and << endl;
}