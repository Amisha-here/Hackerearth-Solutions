#include<iostream>
#include<string>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int T;
    std::cin >> T;
    std::string s;
    while(T--){
        std::cin >> s;
        long long int l= s.length(), ans=0;
        for(int i=0;i<l;i++){
            char ch= std::tolower(s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                ans = ans + (l - i) * (i + 1);
        }
        std::cout << ans << "\n";
    }
    return 0;
}
