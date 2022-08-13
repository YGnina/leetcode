//easy-understanding solution

class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length() != t.length()){
            return false;
        }
       
        HashMap<Character,Integer> Smap = new HashMap<Character,Integer>();
        HashMap<Character,Integer> Tmap = new HashMap<Character,Integer>();
        
        for(int i=0; i<s.length();i++){
            int indexS = Smap.getOrDefault(s.charAt(i), -1);
            int indexT = Tmap.getOrDefault(t.charAt(i), -1);
                        
            if (indexS != indexT) {
                return false;
            }
            
            Smap.put(s.charAt(i), i);
            Tmap.put(t.charAt(i), i);
        }
        return true;
    }
}
