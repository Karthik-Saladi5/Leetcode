class CustomStack {
    int[] st;
    int top = -1;

    public CustomStack(int maxSize) {
        this.st = new int[maxSize];
    }

    public void push(int x) {
        if (top < this.st.length - 1) {
            top++;
            this.st[top] = x;
        }
    }

    public int pop() {
        if (top == -1)
            return -1;
        return this.st[top--];
    }

    public void increment(int k, int val) {
        for (int i = 0; i < Math.min(k, top + 1); i++)
            this.st[i] += val;
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.push(x);
 * int param_2 = obj.pop();
 * obj.increment(k,val);
 */