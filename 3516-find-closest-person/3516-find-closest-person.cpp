class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a;
        int b;
        if ((z-y)<0){
            a = y-z;

        }
        else{
            a = z-y;
        }

        if ((x-z)<0){
            b = z-x;
        }
        else{
            b = x-z;
        }

        if(a==b) return 0;
        if(a>b)  return 1;
        if(b>a)  return 2;
        return -1;
    }
};