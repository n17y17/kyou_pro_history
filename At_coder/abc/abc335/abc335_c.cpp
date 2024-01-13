#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
    int n, q;
    cin >> n >> q;

    deque<pair<int, int>> ryu(n);
    rep(i, n)
    {
        ryu.at(i) = {i+1, 0};
    }

    rep(i, q)
    {
        int q_type;
        cin >> q_type;

        if (q_type == 1)
        {
            char c;
            cin >> c;

            switch (c)
            {
                case 'R':
                    ryu.push_front(pair{ryu.at(0).first + 1, ryu.at(0).second});
                    break;
                case 'L':
                    ryu.push_front(pair{ryu.at(0).first - 1, ryu.at(0).second});
                    break;
                case 'U':
                    ryu.push_front(pair{ryu.at(0).first, ryu.at(0).second + 1});
                    break;
                case 'D':
                    ryu.push_front(pair{ryu.at(0).first, ryu.at(0).second - 1});
                    break;
            }
            ryu.pop_back();
        } else {
            int p;
            cin >> p;
            printf("%d %d\n", ryu.at(p-1).first, ryu.at(p-1).second);
        }
    }
}