//Important Quest.
#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    int size = 10;
    for(int i = 1;num<=size;i++){
        for(int j = 1;j<=i && num<=size;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;

    }
}