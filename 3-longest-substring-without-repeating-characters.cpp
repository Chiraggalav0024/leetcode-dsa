class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> char_map(256, -1); 
        int left = 0;
        int max_length = 0;
        
        for (int right = 0; right < s.length(); right++) {
            // If the character was seen and its last index is inside our current window
            if (char_map[s[right]] >= left) {
                // Shrink the window by moving 'left' just past the duplicate
                left = char_map[s[right]] + 1;
            }
            
            // Update the character's latest index
            char_map[s[right]] = right;
            
            // Calculate length of the current valid window and update max
            max_length = max(max_length, right - left + 1);
        }
        
        return max_length;
    }
};