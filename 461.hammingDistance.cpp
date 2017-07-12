//the solution of myself
//dont know why the one who beats 100% has almost the same code as mine, but the result different a lot

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int sum=0;
        while (n != 0){
            if ((n&1) == 1) sum+=1;
            n = n/2;
        }
        return sum;
    }
};

//the solution of others, a faster one

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int sum=0;
        while (n != 0){
            n &= (n -1);
            sum+=1;
        }
        return sum;
    }
};