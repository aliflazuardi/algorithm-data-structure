import java.util.Scanner;

public class Queue {
    static final int MAX_N = 100;

    static int front;
    static int rear;
    static int queue[] = new int[MAX_N];

    static void init() {
        
    }

    static boolean isEmpty() {
        return front == rear;
    }

    static boolean isFull() {
        return ((front + 1) % MAX_N  == rear);
    }
    
    static boolean enqueue(int value) {
        if (isFull()) {
            System.out.println("queue overflow!");
            return false;
        }
        
        queue[front] = value;

        front++;
        if (front == MAX_N) {
            front = 0;
        }

        return true;
    }

    static Integer dequeue() {
        if (isEmpty()) {
            return null;
        }

        Integer value = new Integer(queue[rear]);

        rear++;
        if (rear == MAX_N) {
            rear = 0;
        }

        return value;
    }

    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int T = sc.nextInt();

        for (int tc = 1; tc <=T; tc++) {
            int N = sc.nextInt();

            for (int i = 0; i < N; i++) {
                int value = sc.nextInt();

                if (!enqueue(value)) {
                    System.out.println("queue overflow!");
                }
            }

            while (!isEmpty()) {
                Integer value = dequeue();

                if (value != null) {
                    System.out.print(value.intValue() + " ");
                }
            }

            
            System.out.println();
        }
        sc.close();
    }
}
