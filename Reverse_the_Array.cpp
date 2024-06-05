#include<iostream>
using namespace std;

class Solution
{
   public:
    void Reverse(int A[], int N)
    {
        int start = 0;
        int end = N-1;
       
        while(start < end){
            int temp = A[start];
            A[start] = A[end];
            A[end] = temp;
            cout<<A[start]<<A[end]<<"\n";
            start++;
            end--;
         }
        for(int i=0;i<N;i++){
            cout<<A[i]<<" ";
        }
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
	    ob.Reverse(arr, n);
	    
	}
	return 0;
}

