class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        //vector<int> arr;
        // for (int i = 0; i < bank.size(); i++) {
        //     int count = 0;
        //     for (int j = 0; j < bank[i].size(); j++) {
        //         if(bank[i][j] == '1') count += 1;
        //     }
        //     if(count != 0) arr.push_back(count);
        // }
        // if(arr.size() == 0) return 0;
        // int beam = 0;
        // for(int i = 0; i < arr.size()-1; i++){
        //     beam += (arr[i] * arr[i+1]);
        // }
        // return beam;
        int prev = 0;   
        int beams = 0;
        for (auto &row : bank) {
            int curr = count(row.begin(), row.end(), '1');
            if (curr > 0) {
                beams += prev * curr;
                prev = curr;
            }
        }
        return beams;
    }
};