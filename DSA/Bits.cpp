#include<iostream>
using namespace std;
class BitsManu{

	public:

	  static void  BinaryTodecimal(long long num){

		   long long  decimal=0;
		   long long power=0;

		   while(num>0){
                          int count=0;
			  long long x=num%10;
			  decimal+=x*(1<<power);
			  power++;
			  num/=10;
		    }
		   cout<<decimal<<endl;
	  }

	  static void decinalToBinary(long long num){

		  string ans="";
		  while(num>0){
			 ans=char(num%2+'0')+ans;
			 num/=2;
		  }
		  cout<<ans<<endl;
	   }

	  static void And(long long num,long long num2){

		 long long ans=num&num2;
		 cout<<ans<<endl;
	  }
	  static void Ors(long long num1,long long num2){

		  long long ans=num1|num2;
		  cout<<ans<<endl;
	    }

	  static void xors(long long num1,long long num2){

  	          long long ans=num1^num2;
		  cout<<ans<<endl;

	  }
	  static void NotMe(long long num){

		  cout<<abs(~num)<<endl;
	  }
	  static void leftshift(long long num1,long long num2){

		  long long ans=num1<<num2;
		  cout<<ans<<endl;
	  }

	  static  void rightshift(long long num1,long long num2){

		  long long ans=num1>>num2;
		  cout<<ans<<endl;
	  }

	    static void input(){

		long long num1;
		long long num2;
		int T;
		cin>>T;
		while(T--){

		}
	   }
};
class Xor{


	 public:

         
	 static void input(){

		long long num1;
		long long num2;
		int T;
		cin>>T;
		while(T--){

		}
	   }


};
class Bitmask{

       public:
	     static void input(){
		long long num1;
		long long num2;
		int T;
		cin>>T;
		while(T--){

		}
	   }
};
class Bitsopration4chpter{

      public:
	  static void cheakbit(long long mask,long long i){

		bool ans=mask&(1<<i);

                 if(ans!=false){
		   cout<<"SET"<<endl;
		 }else{
		   cout<<"NOT SET";
		 }
	  }
	  static void setBit(long long mask,long long i){
                 long long ans=mask|(1<<i);
		 cout<<ans<<endl; 
	  }
	  static void clearBit(long long mask,long long i){

		  long long ans=mask& ~(1<<i);
		  cout<<ans<<endl;
	  }
	  static void toggle(long long mask,long long i){

		  long long ans=mask^(1<<i);
 	          cout<<ans<<endl;
	   }
         static void Bitscount(long long num){

		  long long count=0;
		  while(num){
	                num=num&(num-1);
			count++;
		    }
	        cout<<count<<endl;	  
	   }

};
int main(){


	BitsManu::input();

}
