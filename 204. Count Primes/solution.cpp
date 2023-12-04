class Solution {
public:
    int countPrimes(int n) {
        // base case: n=0 or 1, return 0
        if(n==0 || n==1){
            return 0;
        }

        // Sieve of Eratosthenes  埃拉托斯特尼筛法
        // 要得到自然数n以内的全部素数，必须把不大于√n的所有素数的倍数剔除，剩下的就是素数。
        vector<bool> prime(n+1, true);
        prime[0] = false;
        prime[1] = true;
        
        
        for(int i=2; i*i<=n; i++){
            if(prime[i]){
                for(int j=i*i; j<=n; j+=i){
                    prime[j] = false;
                }
            }
        }

        int cnt = 0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
