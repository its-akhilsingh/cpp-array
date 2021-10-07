#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int even_count=0, odd_count=0;
    for(int i=0; i<n; i++) {
        if(a[i]&1) odd_count++;
        else even_count++;
    }
    cout << even_count << " " << odd_count << endl;
}