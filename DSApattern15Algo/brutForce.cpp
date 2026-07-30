#include <bits/stdc++.h>
#include<utility>
#define MOD1  1000000007
#define MOD2  1000000009 
#define MODADD(a,b) a+b % MOD1
#define MODSUB(a,b,MOD1) a+b+MOD1 % MOD1 
#define MODMUL(l,a,b,MOD1) 1LL * a * b%MOD1 
#define  P  31     
//   long long ans=b+(b-1)/(a-1); K-th Not Divisible by n
typedef long long ll;
using namespace std;
class Codechef{

	public: 
	  static void maxi(vector<long long>&vs){	
		  
                  sort(vs.begin(),vs.end());

                  cout<<vs[vs.size()-1]<<endl;

	  }

	  static void minof(vector<long long>&vs){

		  sort(vs.begin(),vs.end());
		  cout<<vs[0]<<endl;
	  }

	  static void xtimes(vector<long long>&vs,long long x){
		  long count=0;
		   for(long long i:vs){
			 if(i==x){
			   count++;
			  }
		      }
		   cout<<count<<endl;
	  }

	 static void xtimefirst(vector<long long>&vs,int target){

		 map<int,int>mp;
		 int count=0;

		 for(long long i:vs){
	   	    mp[i]++;
		   }

		 cout<<count<<endl;
	 }

	 static xtimeslast(vector<long long>vs){


          }

	 static void isSorted(vector<long long>&vs){

		bool issorted=true;
		     for(long long j=0;j<vs.size()-1;j++){
			   if(vs[j]>vs[j+1]){
				 issorted=false;
			         break;
			    }
		        }
		if(issorted){
		   cout<<"YES"<<endl;
		  }else{
		   cout<<"NO"<<endl;
		  }
	 }

	 static void reverseArr(vector<long long>&vs){

		 long long left=0;
		 long long right=vs.size()-1;

		 while(left<right){

			long long temp=vs[right];
			vs[right]=vs[left];
			vs[left]=temp;

			left++;
			right--;
		 }
	  }

	 static void secondLarge(vector<long long>&vs){

		sort(vs.begin(),vs.end());
		cout<<vs[vs.size()-2];
	 }

         static void secondsmall(vector<long long>&vs){

		 sort(vs.begin(),vs.end());
		 cout<<vs[1]<<endl;

	 }

	 static void duplicates(vector<long long>&vs){

		map<int,int>mp;
		set<int>duplicate;
		for(long long i:vs){
		     mp[i]++;
		 }
		for(int i:vs){
		   if(mp[i]>=2){
		        duplicate.insert(i);
		     }
		}
		for(int i:duplicate){
		    cout<<i<<" ";
		   }
	 }

	 static void pairsof(vector<long long>&vs){

		int target=0;
		int f=0;
		int count=0;

	      
        } 

	static void freq(vector<long long>vs){

		map<int,int>mp;

		for(int i:vs){
		  mp[i]++;
		}

		for(auto i:mp){
		  cout<<i.first<<":"<<i.second<<endl;
		}

	 }
       	 static void inputarr(){
 
		 int T;
		 cin>>T;

		 while(T--){
	         int n;
		 int r;
		 string s;
                 vector<long long>t;

		 cin>>n;
		 for(int i=0;i<n;i++){
			 int x;
			 cin>>x;
			 t.push_back(x);
		   }

		    freq(t);
		    t.clear();
	        } 
	    }
	 static void input(){

	         int T;
		 int size;
		 string str;

		 cin>>T;
		 while(T--){ 

		     int a;
		     int b;
		     cin>>a>>b;

		 }
	 } 
};
int main(){

	 Codechef::inputarr();

}
