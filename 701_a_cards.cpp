/*
  Contest : 701
  Problem A : Cards
  Author : Rakesh Kumar
  Date: 28/04/2021
*/

#include <bits/stdc++.h>

struct P {
    P() {}
    P(int v, int p) : val(v), pos(p) {}

    int val=0;
    int pos=0;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n=0,e=0;
    std::cin>>n;
    std::vector<P> v;
    for (int i=1; i<=n; ++i) {
        std::cin>>e;
        v.emplace_back(P(e,i));
    }
    std::sort(v.begin(), v.end(), [](P a, P b){
        return a.val < b.val;
    });
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
        std::cout<<v[i++].pos<<" "<<v[j--].pos<<std::endl;

    return 0;
}
