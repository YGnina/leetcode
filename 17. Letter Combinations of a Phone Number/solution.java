class Solution {
    public List<String> letterCombinations(String digits) {
        List<String> result = new ArrayList<>();
        
        if(digits == null || digits.length() == 0){
            return result;
        }
        
        String[] letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        result.add("");
        for (char digit : digits.toCharArray()) {
            String curLetters = letters[digit - '2'];
            List<String> newRes = new ArrayList<>();

            for (String item : result) {
                for (char curDigit : curLetters.toCharArray()) {
                    newRes.add(item + curDigit);
                }
            }

            result = newRes;
        }
        
        return result;
        
    }
}
