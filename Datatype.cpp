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
	  static void solve(){
		 // tempreture drop 
		
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

		   int T;
		   cin>>T;

		     while(T--){
			 int x,y;
			 int z;
			 int A,B;
			 cin>>x>>y;
		       	 solve(x,y);
                       }
		    }	     
};
int main(){

	 Codechef::input();

}
