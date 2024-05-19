import java.util.Scanner;

class Stack {
  static final int MAX_N = 100;

  static int top;
  static int stack[] = new int[MAX_N];

  static void initStack() {
    top = 0;
  }

  static boolean isEmpty() {
    return top == 0;
  }

  static boolean isFull() {
    return top == MAX_N;
  }

  static boolean push(int value) {
    if (isFull()) {
      System.out.println("stack overflow!");
      return false;
    }

    stack[top] = value;
    top++;

    return true;
  }

  static Integer pop() {
    if (isEmpty()) {
      System.out.println("stack empty!");
      return null;
    }
    top--;
    return stack[top];
  }

  public static void main(String arg[]) throws Exception {
    Scanner sc = new Scanner(System.in);

    int T = sc.nextInt();

    for (int tc = 1; tc <= T; tc++) {
      int N = sc.nextInt();

      for (int i = 0; i < N; i++) {
        int value;
        value = sc.nextInt();
        push(value);
      }

      System.out.print("#" + tc + " ");

      while (!isEmpty()) {
        Integer value = pop();
        if (value != null) {
          System.out.print(value.intValue() + " ");
        }
      }
      System.out.println();
    }

    sc.close();
  }
}
