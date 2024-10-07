public class JavaThreadConcurrency {

    // Object for concurrency
    private static final Object lock = new Object();

    // Function counting up
    public static void countUp() {
        for (int i = 0; i <= 20; i++) {
            synchronized (lock) {
                System.out.println("Counting up: " + i);
            }
        }
    }

    // Function counting down
    public static void countDown() {
        for (int i = 20; i >= 0; i--) {
            synchronized (lock) {
                System.out.println("Counting down: " + i);
            }
        }
    }

    public static void main(String[] args) {
        // Concurrent thread creation
        Thread thread1 = new Thread(JavaThreadConcurrency::countUp);
        Thread thread2 = new Thread(JavaThreadConcurrency::countDown);

        // Concurrent thread start
        thread1.start();
        thread2.start();

        // End after counting completed
        try {
            thread1.join();
            thread2.join();
        } catch (Exception e) {
            System.out.println("Thread interrupted: " + e.getMessage());
        }
    }
}