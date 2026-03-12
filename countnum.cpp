// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,num,pc=0,nc=0,oc=0,ec=0,i;
    cout<<"enter n value"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	cout<<"Enter number"<<endl;
		cin>>num;
        	if(num>0)
            {
                pc++;
            }
            if(num<0)
            {
            	nc++;
			}
			if(num%2==0)
			{
				ec++;
			}
			if(num%2!=0)
			{
				oc++;
			}
        
    }
    cout<<"positive count"<<pc<<endl;
     cout<<"negative count"<<nc<<endl;
      cout<<"odd count"<<oc<<endl;
       cout<<"even count"<<ec<<endl;
    

}
