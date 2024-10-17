import java.util.*;

public class leet1 {
    public static int lengthOfLongestSubstring(String s) {

        if (s.length() < 1) {
            return 0;
        }

        ArrayList<Integer> k = new ArrayList<>();
        int temp_length = 0;
        HashMap<Character, Integer> alpha_map = new HashMap<>();
        int start = 0;

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (alpha_map.containsKey(ch)) {
                start = Math.max(start, alpha_map.get(ch) + 1);
            }
            temp_length = i - start + 1;
            k.add(temp_length);
            alpha_map.put(ch, i);
        }

        return Collections.max(k);  
    }

    public static void main(String[] args) {
        String example = "au";
        int k = lengthOfLongestSubstring(example);
        System.out.println(k);
    }
}

