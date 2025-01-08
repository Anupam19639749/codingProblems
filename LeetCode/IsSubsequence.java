public class IsSubsequence {

    // Method to check if s is a subsequence of t
    public boolean is_Subsequence(String s, String t) {
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t

        // Traverse string t
        while (i < s.length() && j < t.length()) {
            // If characters match, move pointer i for string s
            if (s.charAt(i) == t.charAt(j)) {
                i++;
            }
            // Always move pointer j for string t
            j++;
        }

        // If i has reached the end of s, all characters of s were found in t
        return i == s.length();
    }

    // Main function to test the solution
    public static void main(String[] args) {
        IsSubsequence solution = new IsSubsequence();

        // Test case 1
        String s1 = "abc";
        String t1 = "ahbgdc";
        System.out.println("Test Case 1: " + solution.is_Subsequence(s1, t1)); // Output: true

        // Test case 2
        String s2 = "axc";
        String t2 = "ahbgdc";
        System.out.println("Test Case 2: " + solution.is_Subsequence(s2, t2)); // Output: false
    }
}
