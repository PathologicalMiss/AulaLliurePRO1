import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int n = sc.nextInt();
      int[][] a = new int[n][n];
      int[][] b = new int[n][n];
      for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
          a[i][j] = sc.nextInt();
      for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
          b[i][j] = sc.nextInt();
      int[][] c = Solution.sum(a, b);
      for (int i=0; i < n; ++i) {
        for (int j = 0; j < n; ++j) 
          System.out.print(Integer.toString(c[i][j]) + ' ');
        System.out.println();
      }   
      System.out.println();
    }
  }

}
