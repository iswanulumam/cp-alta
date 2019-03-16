import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
      
    System.out.println(N);
    int init_1 = 0;
    int init_2 = 1;
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(init_1 + " ");
        int sum_init = init_1 + init_2;
        init_1 = init_2;
        init_2 = sum_init;
      }
      System.out.println();
    }
  }
}