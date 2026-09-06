class Solution {
public:
   
    // Helper function to check if a character is a letter or a number
    bool isAlpha(char ch) {
        if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        } else {
            return false;
        }
    }

    // Main function to check if the string is a palindrome
    bool isPalindrome(string s) {
        int n = s.length();
        int st = 0, end = n - 1;
        
        while (st < end) {
            // Skip non-alphanumeric characters from the left
            if (!isAlpha(s[st])) {
                st++;
                continue; 
            }
            // Skip non-alphanumeric characters from the right
            if (!isAlpha(s[end])) {
                end--;
                continue; 
            }
            
            // Compare characters (ignoring capital letters)
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            
            // Move pointers closer together if they match
            st++;
            end--;
        }
        
        return true; 
    }
};
