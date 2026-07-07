import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int a,b,c;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        if(a*a == (b*b + c*c)){
            System.out.print("YES");
        }else if(b*b == (c*c + a*a)){
            System.out.print("YES");
        }else if(c*c == (a*a + b*b)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
    }
  }