class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        int freq1[26] = {0}, freq2[26] = {0};
        
        // Initialize frequency of s1 and the first window of s2
        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Check if first window matches
        if (isFreqSame(freq1, freq2)) return true;

        // Slide the window
        for (int i = s1.length(); i < s2.length(); i++) {
            freq2[s2[i] - 'a']++;                      // Add new char
            freq2[s2[i - s1.length()] - 'a']--;        // Remove old char

            if (isFreqSame(freq1, freq2)) return true;
        }

        return false;
    }

    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }
};