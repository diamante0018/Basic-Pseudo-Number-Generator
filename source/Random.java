import java.util.*;
import java.io.PrintWriter;
import java.io.UnsupportedEncodingException;
import java.time.LocalDate;
import java.io.FileNotFoundException;

public class Random {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("What's the length of the string?");
		int a = input.nextInt();
		input.close();
		
		if (a<1) {
			System.out.println("Frick you!");
			System.exit(0);
		}
		
		String[] b = new String[a];
		
		for (int i=0;i<b.length;i++) {
			b[i] = "" + getRandomIntegerBetweenRange();
		}
		
		writeFile(b);
		
	}
	
	public static void writeFile(String[] c) {
		LocalDate time = LocalDate.now();
		String theTime = time.getDayOfMonth() + "-" + time.getMonthValue() + "-" + time.getYear() + ".txt";
		
		try {
			PrintWriter writer = new PrintWriter(theTime, "UTF-8");
			for (int i=0;i<c.length;i++) {
				if (i<c.length-1) {
					writer.print(c[i] + " ");
				}
				else {
					writer.println(c[i]);
				}
			}
			
			for (int i=0;i<c.length;i++) {
				if (i<c.length-1) {
					writer.print(c[i] + ", ");
				}
				else {
					writer.println(c[i]);
				}
			}
			writer.close();
			
		} 
		
		catch (FileNotFoundException e) {
		
			e.printStackTrace();
		} 
		
		catch (UnsupportedEncodingException e) {
			e.printStackTrace();
		}
	}
	

    public static int getRandomIntegerBetweenRange() {
       int k;
       double min=0,max=9; //Range
       double x = (int)(Math.random()*((max-min)+1))+min;
       k = (int) x;
       return k;
    }

}
