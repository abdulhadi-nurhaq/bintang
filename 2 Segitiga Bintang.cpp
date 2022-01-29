#include <iostream>

using namespace std;

int main() {
    int n, s, i, j;
    cout<<"Masukkan Jumlah Maksimal Bintang : ";
    cin>>n;
    cout<<endl;
    for (i = n; i >= 1; i--)
    {
        for (s = i; s < n; s++)
            cout<<" ";
        for (j = 1; j <= i; j++)
            cout<<"* ";
            cout<<endl;
    }
    
    for(int i = 2, k = 0; i <= n; ++i, k = 0)
    {
        for(int space = 1; space <= n-i; ++space)
        {
            cout <<" ";
        }
 
        while(k != i)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}