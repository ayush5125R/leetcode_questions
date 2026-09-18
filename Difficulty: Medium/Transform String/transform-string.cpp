class Solution {
  public:
    int transform(string &s1, string &s2) {
        int n = s1.size();

        if (n != s2.size()) {
            return -1;
        }

        int freq[128] = {0};

        for (char c : s1) {
            freq[c]++;
        }

        for (char c : s2) {
            freq[c]--;
        }

        for (int i = 0; i < 128; i++) {
            if (freq[i] != 0) {
                return -1;
            }
        }

        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int count = 0;

        while (i >= 0 && j >= 0) {
            if (s1[i] == s2[j]) {
                i--;
                j--;
            }
            else {
                count++;
                i--;
            }
        }

        return count;
    }
};