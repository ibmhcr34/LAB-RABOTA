#ЛАБ. РАБОТА 1 РЕШЕШИЕ НА JAVA ЗАДАЧА 2

import java.util.ArrayList;

public class Main2 {
    public static void main(String[] args) {
        char[] arr = {'a', '1', 'b', '2', 'c', '3'};
        ArrayList<Character> letters = new ArrayList<Character>();
        ArrayList<Character> digits = new ArrayList<Character>();

        for (int i = 0; i < arr.length; i++) {
            if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
                letters.add(arr[i]);
            } else if (arr[i] >= '0' && arr[i] <= '9') {
                digits.add(arr[i]);
            }
        }

        System.out.println(letters);
        System.out.println(digits);
    }
}
