#include<iostream>
#include<cmath>
#include<string>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        int len = s.length();
        for (int i = 0; i < len; i++){
            if (s[i] == 'B'){
                if((i-2)>=0){if(s[i-2] == 'W'){
                    count++;
                    s[i - 2] = 'X';
                    }
                }
                if((i-1)>=0){if(s[i-1] == 'W'){
                    count++;
                    s[i - 1] = 'X';
                    }
                }
                if((i+2)<len){if(s[i+2] == 'W'){
                    count++;
                    s[i + 2] = 'X';
                    }
                }
                if((i+1)<len){if(s[i+1] == 'W'){
                    count++;
                    s[i + 1] = 'X';
                    }
                }
            }
        }
        cout << count<<"\n";
    }
    
}


