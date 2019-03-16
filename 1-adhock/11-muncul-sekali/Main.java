import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int[] map_angka = new int[] {0,0,0,0,0,0,0,0,0,0};
    
    Scanner scanner = new Scanner(System.in);
    String S = scanner.nextLine();

    for (int i = 0; i < S.length(); i++) {
      char c = S.charAt(i);
      String s = Character.toString(c);
      int idx_map = Integer.parseInt(s);
      map_angka[idx_map] += 1;
    }
    for (int i = 0; i < S.length(); i++) {
      char c = S.charAt(i);
      String s = Character.toString(c);
      int idx_map = Integer.parseInt(s);
      if (map_angka[idx_map] == 1) {
        System.out.print(c + " ");
      }
    }
    System.out.println();
  }
}