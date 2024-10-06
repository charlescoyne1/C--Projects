public class JavaThreadConcurrency {
    public static void main(String[] args) {
        // Concurrent thread creation
        Thread thread1 = new Thread();
        Thread thread2 = new Thread();

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