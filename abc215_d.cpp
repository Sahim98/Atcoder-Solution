/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
using ld = long double;
using ll = long long;

#define endl '\n'
#define F first
#define S second
#define pb push_back
#define br cout<<endl; 
#define inf 0x3f3f3f3f
#define op cout <<"[";
#define cl cout << "]\n";
#define infll 0x3f3f3f3f3f3f3f3fLL
#define print_vec(x) {op pri(x)cl}
#define lcm(a, b) a /__gcd(a, b) * b
#define digit(n) floor(log10(n)) + 1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define bug(a) cout<< #a " = "<<(a)<< ' ';
#define isrunning cout << "Executed Sucessfully!!\n";
#define ver(expression) cout << (expression ? "AC\n" : "WA\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define print_mp(x) {for(auto i :x)cout<<'['<<i.F<<','<<i.S<<']'<<endl; }
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl
#define pri(x) {int j=x.size();for(auto i :x){j--;cout <<i;if(j)cout<<',';}}




void solve()
{
   
    int n , m , k(0) , x , x1 , p ; 

    cin >> n >> m ; 

    vector<int>res={1};

    unordered_map <int,int> mp ;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x ; 
        x1 = x ;
        p = 2 ; 
        while(x1 > 1 && p <= ceil(sqrt(x1)+1))
        {
            if(x1%p == 0)mp[p] = 1,x1/=p; 
            else p++; 
        }
        if(x1>1)mp[x1] = 1 ;
    }

    for(int i = 2 ; i <= m ; i++)
    {
        x = i , p = 2 ; vector<int>res_div ;

        while (x > 1 && p <= ceil(sqrt(x)+1) )//logn
        {
            if (x % p == 0){
                if(res.back()!=p)res_div.pb(p);
                x/=p;
            }
            else
                p++;
        }
        if(x>1)res_div.pb(x);
        bool ok = 1 ;
        for(int u : res_div)
        {
            if(res_div.size() == 0)break ;
            if(mp[u])
            {
                ok = 0 ; break ;
            }
           
        }
        if(ok)res.pb(i) ;
    }
    cout << res.size() << endl; 

    for(int i : res) cout << i << endl ;
}

int main()
{

    fast 
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; ++i)
    {
       //case(i) ;
        solve();
    }
}
