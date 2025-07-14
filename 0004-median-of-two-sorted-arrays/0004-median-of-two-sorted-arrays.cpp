class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double x;
        
        int c=nums2.size();
        for(int i=0;i<c;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int t=nums1.size();
        if(t%2!=0){
           x =nums1[t/2];
            return x;
        }
        else{
            x=(double(nums1[t/2])+ double(nums1[(t-1)/2]))/2;
            return x;
        }
    }
};