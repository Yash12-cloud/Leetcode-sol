class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = INT_MIN;

        for(int i = 0;i<n;i++){
            for(int j = i+1; j<n ; j++){
                int min_hei = min(height[i],height[j]);
                max_area = max((min_hei*(j-i)),max_area);
            }
        }
        return max_area;
    }
};