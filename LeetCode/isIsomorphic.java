public class isIsomorphic {
    public boolean is_Isomorphic(String s, String t) {
        int[] indexS = new int[200];
        int[] indexT = new int[200];

        int len = s.length();
        if (len != t.length())
            return false;

        for (int i = 0; i < len; i++) {
            if (indexS[s.charAt(i)] != indexT[t.charAt(i)])
                return false;

            indexS[s.charAt(i)] = i + 1;
            indexT[t.charAt(i)] = i + 1;
        }
        return true;
    }

    // Main function to test the solution
    public static void main(String[] args) {
        isIsomorphic solution = new isIsomorphic();

        // Test case 1
        String s1 = "egg";
        String t1 = "add";
        System.out.println("Test Case 1: " + solution.is_Isomorphic(s1, t1)); // Output: true

        // Test case 2
        String s2 = "foo";
        String t2 = "bar";
        System.out.println("Test Case 2: " + solution.is_Isomorphic(s2, t2)); // Output: false
    }
}