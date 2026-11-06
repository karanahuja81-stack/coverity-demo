public class Main {
    public static void main(String[] args) {
        String test = null;
        if (args.length > 0) {
            test = args[0];
        }
        // Intentional defect: test could be null if args.length == 0
        System.out.println("String length: " + test.length());
    }
}
