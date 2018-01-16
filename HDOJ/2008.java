import java.util.Scanner;
import java.io.Console;

class hdu {
    public static void main(String[] args) {
        Console console = System.console();
        String str = console.readLine();
        String[] str1 = str.split(" ");
        int i, zhen, fu, zero;
        float[] number1 = new float[str1.length];
        for (i = 0; i < str1.length; i++) {
            number1[i] = Float.parseFloat(str1[i]);
        }
        for (; number1[0] != 0;) {
            zhen = fu = zero = 0;
            for (i = 1; i < str1.length; i++) {
                if (number1[i] > 0)
                    zhen++;
                if (number1[i] < 0)
                    fu++;
                if (number1[i] == 0)
                    zero++;
            }
            System.out.println(fu + " " + zero + " " + zhen);
            str = console.readLine();
            str1 = str.split(" ");
            number1 = new float[str1.length];
            for (i = 0; i < str1.length; i++)
                number1[i] = Float.parseFloat(str1[i]);
        }
    }
}