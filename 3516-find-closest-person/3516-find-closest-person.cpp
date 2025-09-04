class Solution {
public:
    int findClosest(int x, int y, int z) {
        int one = abs(z - x), two = abs(z - y);
        if(one == two){
            return 0;
        }
        else if(one < two){
            return 1;
        }
        else{
            return 2;
        }
    }
};