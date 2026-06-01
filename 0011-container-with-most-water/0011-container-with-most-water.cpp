class Solution {
public:
    int maxArea(vector<int>& height) {
        int mxArea = 0;
        int i = 0;
        int j = height.size()-1;

        while(i<j){
            int area = min(height[i],height[j]) * abs(i-j);
            mxArea = max(area,mxArea);
            if(height[i] < height[j]) i++;
            else j--;
        }

        return mxArea;
    }
};