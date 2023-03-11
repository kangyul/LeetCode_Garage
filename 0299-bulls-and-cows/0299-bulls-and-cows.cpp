class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> sVec(10, 0);
        vector<int> gVec(10, 0);

        for (int i = 0; i < secret.size(); i++) {
            if(secret[i] == guess[i]) {
                bulls++;
            } else {
                sVec[secret[i] - '0'] += 1;
                gVec[guess[i] - '0'] += 1;
            }
        }
        
        for (int i = 0; i < 10; i++) {
            cows += min(sVec[i], gVec[i]);
        }

        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};