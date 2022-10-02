#include<iostream>
#include<math.h>
using namespace std;

int divide(int divident ,int divisor)
{
    if(divident == 0)
        return 0;
    if(divisor == 0)
    {
     cout<<"divisor zero is not possible"<<endl;
     return 0;
    }
   int sign = (divident<0)^(divisor<0);
   divident=abs(divident);
   divisor=abs(divisor);
   if(divisor==1)
    {
      return ((sign==0)? divident : -divident);
    }
    int ans = exp(log(divident)-log(divisor))+ 0.00000001;
     return((sign==0) ? ans : -ans);
}

int main()
{

int c=0;
int p=1,n;

cout<<"Enter the size of array"<<endl;
cin>>n;
int num[n],ans[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++)
{
  cin>>num[i];
}
for(int i= 0;i<n;i++)
{
 if(num[i]==0)
{
  c=c+1;
  continue;
}
else
{
 p=num[i]*p;
}

}
for(int i=0;i<n;i++)
{
if(num[i]==0 && c==1)
{
  ans[i]=p;
}
else if(num[i]!=0 && c==1)
{
ans[i]=0;
}
else if(num[i]!=0 && c==0)
{
 ans[i]=divide(p,num[i]);//without division operator
}
else if(c>1)
{
 ans[i]=0;
}
}
cout<<endl;
for(int i=0;i<n;i++)
{
 cout<<ans[i]<<" ";
}
return 0;
}

