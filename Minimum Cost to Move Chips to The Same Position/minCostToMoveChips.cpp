class Solution {
public
    int minCostToMoveChips(vectorint& position) {
        int odd=0, even=0;
        for(int chipposition){
            if(chip%2) odd++;
            else even++;
        }
        return min(odd,even);
    }
};