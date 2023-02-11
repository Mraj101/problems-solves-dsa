#include <bits/stdc++.h>

const char* solve(unsigned int a, unsigned int b, unsigned int c, unsigned int k){
    if((a+b+c)%k!=0){
        return "Peaceful";
    }
    else{
        return "Fight";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int t, a, b, c, k, i;
    cin<<t;
    for (i = 1; i <= t; i++) {
        scanf("%u%u%u%u", &a, &b, &c, &k);
        printf("Case %u: %s\n", i, solve(a, b, c, k));
    }
    return 0;
}
