class Solution {
public:
    bool checkPerfectNumber(int num) {

        int count = 1;

        int n = num;

        for(int i = 2 ; i<=sqrt(n) ; i++){
            if(n % i == 0){
                if(i == (n/i)){
                    count += i; 
                }
                else{
                    count = count + i + (n/i);
                }
            }
        }
        if(count == num) return true;
        else return false;
    }
};