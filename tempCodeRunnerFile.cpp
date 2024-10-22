//pair sum//
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
   vector< int> arr={2,7,11,15};
   int n=arr.size();
   vector<int> arr2;
    for(int start=0;start<n;start++){
        int sum=0;
     for(int end=start+1;end<n;end++){
       if((arr[start]+arr[end])==13){
         arr2.push_back(start);
         arr2.push_back(end);


       }
     }
    }
    cout<<arr2[0]<<arr2[1];
}