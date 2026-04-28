class Solution {
    public int minMoves(int[] nums) {
        List<Integer> liste = new ArrayList<Integer>();
        for(int a : nums){
            liste.add(a);
        }
        Collections.sort(liste);
        int max = liste.get(liste.size()- 1);
        int result = 0;
        for(int num: nums){
            result += max -num;

        }
        return result;
    }
}