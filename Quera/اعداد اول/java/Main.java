import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        int num1,num2;
        boolean flag;
        Scanner input = new Scanner(System.in);
        num1 = input.nextInt();
        num2 = input.nextInt();
        for(int i=num1;i<=num2;i++){
            if(i > 1){
                flag = true;
                for(int j=2;j<i;j++){
                    if(i%j == 0){
                        flag = false;
                        break;
                    }
                }
                if(flag == true){
                    System.out.println(i);
                    
                }
            }
        }
    }
}