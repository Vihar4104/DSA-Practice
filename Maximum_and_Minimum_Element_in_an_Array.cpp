#include<iostream>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int min = A[0];
        for(int i=0;i<N;i++){
            if(A[i]<min)
                min = A[i];
        }
        
        int max = A[0];
        for(int i=0;i<N;i++){
            if(A[i]>max)
                max = A[i];
        }
        
        return (min+max);
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

