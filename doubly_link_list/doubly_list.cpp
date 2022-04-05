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

/* i have written code for integar value but 
i can write for generic usign template*/
class node
{
public: 
	int val;
	node *next;
	node *prv;
	node()
	{
		int val=0;
		next=NULL;
		prv=NULL;
	}
	node(int val)
	{
		this->val=val;
		next=NULL;
		prv=NULL;
	}
};

class doubly_link_list{
public:
	node *head;
	node *curr;
	int sz;
	doubly_link_list(){
		this->head=NULL;
		this->curr=NULL;
		this->sz=0;
	}
	void insert(int val)
	{
		if(!head)
		{
			head=new node(val);
			curr=head;
		}
		else
		{
			node *new_node=new node(val);
			curr->next=new_node;
			new_node->prv=curr;
			curr=curr->next;
		}
		sz++;
	}
	void remove(int pos)
	{
		if(sz<pos or pos<=0)
		{
			cout<<"Enter valid position."<<endl;
			return;
		}
		else
		{
			if(pos==1)
			{
				node *temp=head;
				head=head->next;
				delete temp;
			}
			else if(sz==pos)
			{
				node *temp=curr;
				curr=curr->prv;
				curr->next=NULL;
				delete temp;
			}
			else
			{
				node *temp=head;
				loop(i,1,pos-1)
				{
					temp=temp->next;
				}
				node *delete_node=temp->next;
				temp->next=delete_node->next;
				delete_node->next->prv=temp;
				delete delete_node;
				sz--;

			}
		}
	}
	void find(int val)
	{
		node *temp=head;
		while(temp)
		{
			if(temp->val==val)
			{
				cout<<"value found."<<endl;
				return;
			}
			temp=temp->next;
		}
		cout<<"value not found."<<endl;
	}
	void print()
	{
		if(!sz)
		{
			cout<<"Empty list"<<endl;
			return;
		}
		node *temp=head;
		while(temp){
			cout<<temp->val<<"<->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
};


int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    // just start.......
    doubly_link_list dl;
    dl.insert(1);
    dl.insert(2);
    dl.insert(3);
    dl.insert(4);
    dl.insert(5);
    dl.insert(6);
    dl.remove(7);
 	dl.find(7); 
    dl.print();    

    
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}