public class Main {
    public static void main(String[] args) {
        String s = "AaBbCcDd";
        StringBuilder big = new StringBuilder();
        StringBuilder small = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c >= 'A' && c <= 'Z') {
                big.append(c);
            } else {
                small.append(c);
            }
        }

        System.out.println(big.toString());
        System.out.println(small.toString());
    }
}
