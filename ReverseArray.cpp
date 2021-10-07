#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int sp=0, ep=n-1;
    while(sp<=ep) {
        int tmp = a[sp];
        a[sp]=a[ep];
        a[ep]=tmp;
        sp++,ep--;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}