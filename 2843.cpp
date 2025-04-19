#include<iostream>
using namespace std;
int main(){
    int low=1;
    int high=100;
    string s;
    int right;
    int left;
    
    int count=0;
    
    for(int i=low;i<=high;i++){
        int lsum=0;
        int rsum=0;
        s=to_string(i);
        if(s.size()==1) continue;
        if(s.size()%2==0){
            left=0;
            right=s.size()-1;
            while(left<right){
                lsum=lsum+int(s[left])-'0';
                rsum=rsum+int(s[right])-'0';
                left++;
                right--;
            }
            if(lsum==rsum) count++;
        }
    }
    cout<<count;

}