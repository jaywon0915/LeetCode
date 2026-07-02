class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    size_t max_flower = flowerbed.size();
    int count=0;
    for(int i =0; i<max_flower;i++){
        if(flowerbed[i]==0){
            bool left = (i == 0) || (flowerbed[i-1]==0);
            bool right = (i == max_flower-1) || (flowerbed[i+1] == 0);

            if(left && right){
                flowerbed[i]=1;
                count++;
            }
        }
    }
    return count >= n;
    }
};