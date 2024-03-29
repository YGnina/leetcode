// Let us consider an example to get clear view:

// f(0): ""

// f(1): "("f(0)")"

// f(2): "("f(0)")"f(1), "("f(1)")"

// f(3): "("f(0)")"f(2), "("f(1)")"f(1), "("f(2)")"

// So f(n) = "("f(0)")"f(n-1) , "("f(1)")"f(n-2) "("f(2)")"f(n-3) ... "("f(i)")"f(n-1-i) ... "(f(n-1)")"


public class Solution{
    public List<String> generateParenthesis(int n){
        List<List<String>> lists = new ArrayList<>();
        lists.add(Collections.singletonList(""));
        
        for (int i = 1; i <= n; ++i){
            final List<String> list = new ArrayList<>();
            
            for (int j = 0; j < i; ++j){
                for (final String first : lists.get(j)){
                    for (final String second : lists.get(i - 1 - j)){
                        list.add("(" + first + ")" + second);
                    }
                }
            }
            
            lists.add(list);
        }
        
        return lists.get(lists.size() - 1);
    }
}
