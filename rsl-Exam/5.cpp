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
#define bitc(a)  __builtin_popcount(x)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define itr(a,it) for(__typeof(c.begin()) it = c.begin();it!=begin();it++) 
#define lb(a,b) lower_bound(all(a),b)
#define ub(a,b) upper_bound(all(a),b)

lli dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
lli dy[8] = { -1,  0,  1,-1, 1,-1, 0, 1 };


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
class node
  {
  public:
  	int n;
  	node *next;
  	node(int x):n(x),next(NULL){}
  };
   class  linked_list
  {
  public:
  	node *head;
  	node *curr;
  	linked_list(){
  		head=NULL;
  	}
  	void pbb(int x){
  		if(!head){
  			node *new_node=new node(x);
  			head=curr=new_node;
  		}
  		else{
  		node *new_node=new node(x);
  		curr->next=new_node;
  		curr=new_node;
  		}
  	}
  	int mid()
  	{
  		node *s=head;
  		node *f=head;
  		while(f!=NULL and f->next!=NULL)
  		{
  			s=s->next;
  			f=f->next->next;
  		}
  		return s->n;
  	}
  	void print()
  	{
  		node *t=head;
  		while(t)
  		{
  			cout<<t->n<<" ";
  			t=t->next;
  		}
  	}
  	


};
  
 

int main(){
  file_i_o();
  linked_list l;
  l.pbb(1);
  l.pbb(2);
  l.pbb(3);
  l.pbb(4);
  l.pbb(5);
  l.pbb(5);
  //l.print();
  cout<<l.mid();
  


}

  





  

