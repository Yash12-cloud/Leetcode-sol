class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = INT_MIN;
        int i = 0;
        int j = n-1;

        while(i<j){
            int hei = min(height[i],height[j]);
            int area = hei*(j-i);
            max_area = max(max_area,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_area;
    }
};