#include <bits/stdc++.h>
#include<utility>
#include<map>
#define MOD1  1000000007
#define MOD2  1000000009 
#define MODADD(a,b) a+b % MOD1
#define MODSUB(a,b,MOD1) a+b+MOD1 % MOD1 
#define MODMUL(l,a,b,MOD1) 1LL * a * b%MOD1 
#define  P  31      
typedef long long ll;
using namespace std;
class Codeforce{

	public:
	  static void solve(){	

	      }
	  static void Sums(vector<long long>&vs){
		
		   long long sums=0;

		   for(long long i:vs){
			 sums+=i;
			}
		   cout<<sums<<endl;
	     }
	   static void maxi(vector<long long >&vs){

		  long long maxi=vs[0];

		  for(long long i:vs){
			if(i>maxi){
		           maxi=i;   
		      }
	           }  

	        cout<<maxi<<endl;
	   }
	   static void mini(vector<long long>&vs){

		   long long minis=vs[0];
		   for(long long i:vs){

			 if(i<minis){
			   minis=i;
			  }
			}

		   cout<<minis<<endl;
	   }

	   static void countEvenOdd(vector<long long>vs){

		   long long counteven=0;
		   long long countodd=0;

		   for(long long i:vs){
			 if(i%2==0){
		          counteven++;
		     }else{
			  countodd++;
			}
		    }
		        cout<<counteven<<endl;
			cout<<countodd<<endl;

	           }
	   static void stateDigit(vector<long long>&vs){

		     long long countneg=0;
		     long long countpos=0;
		     long long countZero=0;

		     for(long long i:vs){

			   if(i==0){
			       countZero++;
			   }else if(i>0){
			      countpos++;
			   }else if(i<0){
			      countneg++;
			     }
		           }

		         cout<<countZero<<endl;
			 cout<<countpos<<endl;
			 cout<<countneg<<endl;
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
	  static void issorted(vector<long long>&vs){

		  bool isSorted=true;
		  for(long long i=0;i<vs.size();i++){
			  if(vs[i]>vs[i+1]){
			      isSorted=false;
			      break;
			     }
			}

		  if(isSorted){
		      cout<<"Yes";
		   }else{
		      cout<<"No";
		   }
	   }

	  static void secondMax(vector<long long >vs){

		  sort(vs.begin(),vs.end());
		  cout<<vs[vs.size()-2];
	   }

	  static void removeDuplicates(vector<long long >&vs){

		 
				     
	  }

	  static void Evenindex(vector<long long>vs){

		  long long index=0;

		  for(long long i=0;i<vs.size();i++){
			  if(vs[i]%2==0){
			      cout<<i<<" ";
			     }
		   }
	   }

	  static void oddIndex(vector<long long>&vs){

		  long long index=0;

		  for(long long i=0;i<vs.size();i++){
			  if(vs[i]%2==1){
			     cout<<i<<" ";
			    }
			 }
	  }

	  static void Avgs(vector<long long>&vs){

		long long sums=0;

		for(long long i=0; i<vs.size();i++){
		       sums+=vs[i];
		      }

		  long long avg=sums/vs.size();
		  cout<<avg<<endl;
	  }

	  static void leftRotate(vector<long long>&arr,int k){

		  rotate(arr.begin(),arr.begin()+k,arr.end());
	   }

	   static void rightRotate(vector<long long>&arr,int k){

		 k%=arr.size();
		 rotate(arr.begin(),arr.begin()-k,arr.end());
	   }

	   static void Merge(vector<long long  >&old,vector<long long >&newarr){
		   for(long long i:old){
			 newarr.push_back(i);
	 	      }
		    sort(newarr.begin(),newarr.end());
	   }
	   static void freqs(vector<int>&vs){

		   map<int,int>t;

		   for(int x:vs){
			 t[x]++;
		     }
		   for(auto i:t){
			 cout<<i.first<<" "<<i.second<<endl;
		   }
	   }

	   static void searchof(vector<int>&vs,int target){

		       bool isFound=false;
                       
		       for(int i=0;i<vs.size();i++){
			      if(vs[i]==target){
				   isFound=true;
				   break;
				 }
			     }

		       if(isFound){
			    cout<<"YES";
			  }else{
			    cout<<"NO";
       			  }
		  }
	   static void BinarySearch(vector<int>&vs){

	    }

	   static void Ispalindrom(vector<int>&vs){

		    int left=0;
		    int right=vs.size()-1;
		    bool ispali=true;

		    while(left<right){
			  if(vs[left]!=vs[right]){
			     ispali=false;
			     break;
			   }
			  left++;
			  right--;
		       }

		    if(ispali){
			cout<<"YES"<<endl;
		     }else{
			cout<<"NO"<<endl;
		     }
		}
	   static void firstpreted(vector<int>&vs){

		     map<int,int>mp;

		     for(int i:vs){
		           mp[i]++;
			}
		     for(auto i:vs){
			 if(mp[i]>=2){
			   cout<<i;
			   break;
			 }
		      }
		}

	   static void nonpreated(vector<int>&vs){

		   map<int,int>mp;
		   for(int i:vs){
			 mp[i]++;
		      }
		   for(int  i:vs){
			 if(mp[i]==1){
			  cout<<i;
			  break;
			}
		    }
	   }

	   static void countDuplicate(vector<int>&vs){

		   int count=0;
		   map<int,int>mp;
		   for(int i:vs){
			mp[i]++;
		    }
		   vector<int>vt;
		  cout<<vt.size()<<endl;
	    }
	  
	  static void sumofdigit(long long N,string digit){

		   long long sums=0;

		   for(long long i=0;i<N;i++){

			   char x=digit[i];
			   sums+=x-'0';
			   }

		     cout<<sums<<endl;
	  }

	  static void replaceMinMax(vector<long long>&vs){

		   long long mins=vs[0];
		   long long maxi=vs[0];

		   for(long long i:vs){
			 if(i<mins){
			   mins=i;
			  }
			}

		   for(long long i:vs){
			  if(i>maxi){
			     maxi=i;
			    }
			 }

		   for(long long i=0;i<vs.size();i++){	  

			     if(vs[i]==maxi){
				 vs[i]=mins;
			     }else if(vs[i]==mins){
				 vs[i]=maxi;
			     }
		   }

		   for(long long i:vs){
			  cout<<i<<" ";
		   }
	   }

	  static void  cheakcode(int a,int b,string s){

		
	  }

	  static long long  fabonaci(long long num1){

		  if(num1==1){
		       return 0;
		   }else if(num1==0){
		       return 1;
		      }

		  return fabonaci(num1-1)+fabonaci(num1-2);
	  }

	  static long long fab2(int num){

	       if(num==1){
		       return 0;
		   }
	       if(num==2){
		      return 1;
		     }

	        long long prev1=1;
		long long prev2=0;

		 for(int i=3;i<=num;i++){

		       long long curr=prev1+prev2;
		       prev2=prev1;
		       prev1=curr;

		      }
		 return prev1;

	  
	  }

	  static void MinimizNumber(vector<long long>&vs){

		    int count=0;

		    int ans=INT_MAX;
	                   for(long long i:vs){
				   count=0;
				while(i%2==0){
			             i/=2;
				       count++;
				   }
				  ans=min(count,ans);
			       }
	    	      cout<<ans;
          }

	    static void countSubArr(vector<long long>vs){

                      int count=0;
		      for(int i=0;vs.size()-1;i++){
			         count=0;
			   for(int j=0;j<i;j++){
				 cout<<vs[j]<<" ";
			}
			 cout<<endl;
		     }
	        }

	 	 static void inputarr(){
	         int n;
		 cin>>n;
                 vector<long long>t;

		 for(int i=0;i<n;i++){
			 int x;
			 cin>>x;
			 t.push_back(x);
		   }

                   countSubArr(t);
		   t.clear();
	    }
	 static void input(){

			int num;
		        cin>>num;
		        cout<<fab2(num);
		    }	     
};
int main(){

	 Codeforce::inputarr();


}
