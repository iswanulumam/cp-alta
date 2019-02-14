class Main {

  private static boolean xo(String word) {
    int counter = 0;
    for (int i = 0; i < word.length(); i++) {
      char c = word.charAt(i);
      if (c == 'o') {
        counter += 1;
      } else if (c == 'x') {
        counter -= 1;
      }
    }
    if (counter == 0) {
      return true;
    } else {
      return false;
    }
  }

  public static void main(String[] args) {
    /** Driver Code */
    System.out.println(xo("xoxoxo")); // true
    System.out.println(xo("oxooxo")); // false
    System.out.println(xo("oxo")); // false
    System.out.println(xo("xxxooo")); // true
    System.out.println(xo("xoxooxxo")); // true
  }
}