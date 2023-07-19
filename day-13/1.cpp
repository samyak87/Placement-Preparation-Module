public class Solution{
    static class Stack {
        int top=-1;
        int arr[];
        int capacity;
        Stack(int capacity) {
            // Write your code here.
           if(isFull()!=1){
            arr=new int[capacity];
            this.capacity=capacity;
           }
        }
        public void push(int num) {
            // Write your code here.
            if(isFull()==0){
               top+=1;
            arr[top]=num;
            }
            
    
        }
        public int pop() {
            // Write your code here.
            if(isEmpty()!=1){
              int x=arr[top];
              top=top-1;
              return x;
           }
        else{
            return -1;
        }
        }
        public int top() {
            // Write your code here.
            if(isEmpty()!=1){
              return arr[top];  
            }
        else{
            return -1;
        }
        }
        public int isEmpty() {
            // Write your code here.
            if(top==-1){
                return 1;
            }
            else{
                return 0;
            }
        }
        public int isFull() {
            // Write your code here.
            if(top==capacity)
                return 1;
            else
                return 0;
        }
    }
}