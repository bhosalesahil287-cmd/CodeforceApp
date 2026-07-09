#include <bits/stdc++.h>
#include<utility>
#define MOD1  1000000007
#define MOD2  1000000009 
#define MODADD(a,b) a+b % MOD1
#define MODSUB(a,b,MOD1) a+b+MOD1 % MOD1 
#define MODMUL(l,a,b,MOD1) 1LL * a * b%MOD1 
#define  P  31      
typedef long long ll;
using namespace std;
class Codechef{

	public:
	  static void solve(vector<int>&vs,int r, string s){	

	      }
	  static void  sayHello(string s){

		 cout<<"Hello, "<<s;

	  }

	  static void datatypes(int init, long long longs,char ch, float flt,double d){

		    cout<<init<<endl;
		    cout<<longs<<endl;
		    cout<<ch<<endl;
		    cout<<flt<<endl;
		    cout<<d<<endl;
		    
	  }

	  static void calsi(long long  a,long long  b){

		   cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		   long long  ans=1;
		   ans=a*b;
		   cout<<a<<" * "<<b<<" = "<<ans<<endl;
		   cout<<a<<" - "<<b<<" = "<<a-b<<endl;

	  }
	  static void inputarr(){
 
		 int T;
		 cin>>T;

		 while(T--){
	         int n;
		 int r;
		 string s;
		 cin>>n;
                 vector<int>t;

		 for(int i=0;i<n;i++){
			 int x;
			 cin>>x;
			 t.push_back(x);
		   }
		    cin>>s;
		    solve(t,r,s);
		    t.clear();
	        } 
	    }
	 static void input(){

			  string s;
			  int init;
			  long long longs;
			  char ch;
			  float flt;
			  double d;

			  long long  a;
			  long long  b;
			  cin>>a>>b;
			  calsi(a,b);

		    }	     
};
int main(){

	 Codechef::input();

}
