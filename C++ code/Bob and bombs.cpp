#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string S;
        cin>>S;
        string temp="--";
        temp += S;
        temp += "--";

        int k=0;
        for(int i=0; i<temp.length(); i++)
            {
                if(temp[i]=='B'){
                    if(temp[i-1]=='W'){
                        k++;
                        temp[i-1]='-';
                    }
                    if(temp[i-2]=='W'){
                        k++;
                        temp[i-2]='-';
                    }
                    if(temp[i+1]=='W'){
                        k++;
                        temp[i+1]='-';
                    }
                    if(temp[i+2]=='W'){
                        k++;
                        temp[i+2]='-';
                    }
                }

            }

            cout<<k<<endl;
    }
    return 0;
}
