class Solution {
    public int minOperations(int[][] grid, int x) {
        List<Integer> liste = new ArrayList<>();
        for(int[] i : grid){
            for(int j : i){
                liste.add(j);
            }
        }
        Collections.sort(liste);
        int mod = liste.get(0) % x;
        int medyan = liste.get(liste.size()/2);
        int result = 0;
        for (int k : liste){
            if(k % x != mod){
                return -1;
            }

            int a = abs(k-medyan) /x;
            result += a;

        }
        return result;
    }

    public int abs(int x){
        return x < 0 ? -x: x;
    }

    
}