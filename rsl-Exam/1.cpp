#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>

// using namespace __gnu_pbds;
using namespace std;
#define lli long long int 
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(int i = (a); i <(b); i++)
#define loopr(i,a,b) for(int i = (a); i >=(b); i--)
#define bs binary_search
#define mod 1000000007
#define inf 1e18
#define vi vector<int>
#define vlli vector<long long int>
#define si set<int>
#define slli set<lli>
#define spi set<pair<lli,lli>>
#define arr array
#define ump unordered_map
#define prq_max priority_queue<lli>
#define prq_min priority_queue<lli,vlli,greater<lli>>
#define all(v)  v.begin(),v.end()
#define mid(l,r) (l+((r-l)/2)) 
#define bitc(a)  __builtin_popcount(x)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define itr(a,it) for(__typeof(c.begin()) it = c.begin();it!=begin();it++) 
#define lb(a,b) lower_bound(all(a),b)
#define ub(a,b) upper_bound(all(a),b)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

lli dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
lli dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };


template<class A,class B>ostream&operator<<(ostream&out,const pair<A,B>&a){return out<<"("<<a.first<<","<<a.second<<")";}
template<class A>ostream&operator<<(ostream&out,const vector<A>&a){for(const A &it:a)out<<it<<" ";return out;}
template<class A,class B>istream&operator>>(istream&in,pair<A,B>&a){return in>>a.first>>a.second;}
template<class A>istream&operator>>(istream&in,vector<A>&a){for(A &i:a)in>>i;return in;}  


//typedef tree<lli, null_type, less < lli>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//typedef trie<lli, null_type, less < lli>, rb_tree_tag, tree_order_statistics_node_update> pbds;
void file_i_o(){

     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0); 
      #ifndef ONLINE_JUDGE 
              freopen("input.txt", "r", stdin); 
              freopen("output.txt", "w", stdout); 
      #endif 

}
//as time space complexity wise i should sort and than use binary 
//search but here i am using hash map
// question 1
void fun1(int a[],int p)
{
	map<int ,int> m;
	int n=*(&a+1)-a;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;	
	}
	for(int i=0;i<n;i++)
	{
		int ele=a[i];
		int secEle=p/a[i];
		if(m[ele])
		{
			if(m[secEle])
			{
				cout<<"("<<ele<<","<<secEle<<")"<<endl;
				m[secEle]--;
			}
			m[ele]--;
		}
	}

}
// in this question i am using sorting for O(1) space
// we can use array like prvious min max next min max for time O(n) but space O(n)
//question 2
void fun2(vector<int> a)
{
	int n=a.size();
	if(n<3)
	{
		return;
	}
	sort(a.begin(),a.end());
	cout<<max({a[n-1]*a[n-2]*a[n-3],a[n-1]*a[0]*a[1],0});
}

// here i using vector for steram but in scaing 
// i have add condition for '\n'
void fun3(vector<char> v)
{
	map<char,int> m;
	char prv='\0';
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!='\n')
		{
			prv=v[i];
			m[v[i]]++;
		}
		else
		{
			break;
		}
	}
	cout<<m[prv];
}

// basic stack implimentation.
//question 4
bool fun4(vector<char> a)
{
	stack<char> st;
	map<char,char> m;
	m['(']=')';
	m['{']='}';
	m['[']=']';
	int i=0;
	while(i<a.size())
	{
		if(m[a[i]])
		{
			st.push(a[i]);
		}
		else if(a[i]==')' or a[i]==']' or a[i]=='}')
		{
			if(m[st.top()]!=a[i])
			{
				return false;
			}
			st.pop();
		}
		i++;
	}
	return st.size()==0;

}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    
    // just start.......    
    // int a[]={1,2,-3,4,5,-5,3,};
    // fun1(a,20);
    // vector<int> a={-15,-20,1,2,30};
    // fun2(a);
    // vector<char> a={'a','1','!','r','r','~','A','r','\n'};
    // fun3(a);
    // vector<char> a={'(','2','+','[','[','(','{','*','4','{','}','3','}','/',')',']',')'};
    // cout<<fun4(a);
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}