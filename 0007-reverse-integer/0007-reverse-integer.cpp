class Solution {
public:
    int reverse(int n) {
    long  int sum= 0;
	while(n !=0){
		int ld = n % 10;
		sum = (sum * 10) + ld;
        if(sum>INT_MAX|| sum<INT_MIN) return 0;
		n = n / 10;
	}
return(int) sum;

    }
};