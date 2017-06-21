import java.io.*;
import java.util.*;


public class Square {
	public static void main(String args[]){
		Scanner Scan = new Scanner(System.in);
		int a1,a2,a3,a4,b1,b2,b3,b4;
		double d1,d2,d3,d4;
		a1 = Scan.nextInt();a2 = Scan.nextInt();a3 = Scan.nextInt();a4 = Scan.nextInt();
		b1 = Scan.nextInt();b2 = Scan.nextInt();b3 = Scan.nextInt();b4 = Scan.nextInt();
		d1 = calsquare(a1,b1,a2,b2);
		d2 = calsquare(a2,b2,a3,b3);
		d3 = calsquare(a3,b3,a4,b4);
		d4 = calsquare(a4,b4,a1,b1);
		
		if(d1==d2 && d2==d3 && d3==d4 && d4==d1){
			System.out.println("Square");
		}
		else{
			System.out.println("Not Square");
		}
		
	}

static double calsquare(int a1,int b1,int a2,int b2){
	double d = Math.pow(a1-b1, 2)+Math.pow(a2-b2,2);
	double cal = Math.pow(d, 0.5);
	return cal;
}


}
