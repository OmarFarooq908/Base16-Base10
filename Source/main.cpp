#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string a;

    char e[] = {'A','B','C','D','E','F'};
    int b;
    int c;
    int f;
    int k = 0;
    int l = 0;
    int m;
    cout<<"_______________________________________"<<endl;
    cout<<"| Name        : Muhammad Omar Farooq   |"<<endl;
    cout<<"| Roll Number :       20-CP-33         |"<<endl;
    cout<<"|                                      |"<<endl;
    cout<<"| Department of Computer Engineering   |"<<endl;
    cout<<"|           UET Taxila                 |"<<endl;
    cout<<"|______________________________________|\n"<<endl;
    cout<<" >> Enter a number: ";
    cin>>a;

    b = a.length();
    c = b-1;
    int d[c];

    for (int i = 0; i<=c; i++){
        for (int j = 0; j<=5; j++){
            if (a[i] == e[j]){
                d[i] = int(a[i]-55);
                k = 1;
                break;
            }
        }
        if ( k == 0){
            d[i] = a[i]-48;
        }
    }
    m = c;
    for (int i = 0;i<=c;i++){
        l = l + d[i]*pow(16,m);
        m--;
    }
    cout<<" >> "<<a<<" in base 10 : "<<l<<endl;
    return 0;
}
