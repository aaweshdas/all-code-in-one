import java.io.*;
import java.util.*;

class Sort {
    public static void main(String args[]) {
        
        int number[] = {6, 3, 1, 5, 2, 4};
        Arrays.sort(number);
        System.out.println("Array in Ascending Order:");
        for (int i = 0; i < number.length; i++) {
            System.out.print(number[i] + " ");
        }
    }
}
