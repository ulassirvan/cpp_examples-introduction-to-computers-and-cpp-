#include<iostream>
using namespace std;
 

bool isPerfect(long long int n)
{
    
    long long int sum = 1;
  
   
    for (long long int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
     if (sum == n && n != 1)
          return true;
  
     return false;
}
  

int main()
{
    
    for (int n =2; n<100000000; n++){
        if (isPerfect(n))
            cout << n << " is a perfect number\n";
        if (n%1000000==0)
        	cout<<n<<". sayiyi hesapladi"<<endl;
			}
  
    return 0;
}