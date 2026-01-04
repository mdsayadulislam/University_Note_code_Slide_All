package labwork1;

public class LabWork1 {

    public static void main(String[] args) {
        int totalBooks = 8;
        float pricePerBook = 20f;
        float vatRate = 8.5f / 100; // 8.5%

        // Calculate subtotal
        float subtotal = totalBooks * pricePerBook;

        // Calculate VAT
        float vat = subtotal * vatRate;

        // Calculate total payment
        float totalPayment = subtotal + vat;

        // Print all in one line
        System.out.printf("Subtotal: %.2f Tk\nVAT: %.2f Tk\nTotal Payment: %.2f Tk\n", subtotal, vat, totalPayment);
    }
}
