class Solution {
    private char fun(char sym, ArrayList<Character> op) {
        if(sym == '!') {
            return op.get(0) == 't' ? 'f' : 't';
        }

        if(sym == '|') {
            return op.stream().anyMatch(ch -> ch == 't') ? 't' : 'f';
        }

        if(sym == '&') {
            return op.stream().anyMatch(ch -> ch == 'f') ? 'f' : 't';
        }
        return 't';
    }
    public boolean parseBoolExpr(String exp) {
        Stack<Character> st = new Stack<>();
        int n = exp.length();
        for(int i = 0 ; i  < n; i++) {
            if(exp.charAt(i) == ',') {
                continue;
            } 
            else if(exp.charAt(i) == ')') {
                ArrayList<Character> op = new ArrayList<Character>();

                while(st.peek() != '(') {
                    Character ch = st.peek();
                    st.pop();
                    op.add(ch);
                }
                st.pop();
                char sym = st.peek();
                st.pop();
                st.add(fun(sym, op));
            } else {
                st.add(exp.charAt(i));
            }
        }
        return st.peek() == 't';
    }
}