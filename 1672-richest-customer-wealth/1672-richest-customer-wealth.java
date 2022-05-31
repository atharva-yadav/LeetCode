class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        
        for(int r = 0; r < accounts.length; r++){
        int wealth = 0;
            
            for(int c = 0; c < accounts[r].length; c++){
                wealth = wealth + accounts[r][c];         
            }
                if(max < wealth){
                    max = wealth;
                }
        }
        
    return max;
        
    }
}