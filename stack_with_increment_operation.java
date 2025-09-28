class CustomStack {
    int[] shelf;
    int top;
    
    public CustomStack(int maxSize) {
        shelf = new int[maxSize];
        top = -1;
    }
    
    public void push(int x) {
        if (top < shelf.length - 1) {
            top++;
            shelf[top] = x;
        }
    }
    
    public int pop() {
        if (top == -1) return -1;
        return shelf[top--];
    }
    
    public void increment(int k, int val) {
        int count = Math.min(k, top + 1);
        for (int i = 0; i < count; i++) {
            shelf[i] += val;
        }
    }
}

