import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);

        n = input.nextInt();
        System.out.println(H_num(1,n));
    }
    static int H_num(int a, int b) {
        if(a>b){
            return 0;
        }
        return 1 + H_num(a*10,b) + H_num(a*10+1,b);
    }
    
}