public class FizzBuzz {
	public static void main (String[] args) {
		int a, b, start, end;
		try {
			a = Integer.parseInt(args[0]);
			b = Integer.parseInt(args[1]);
		} catch(NumberFormatException ex) {
			System.out.println("Bad arguments for divisors, please use valid integers.\nSetting defaults (3, 5)");
			a = 3;
			b = 5;
		} catch(ArrayIndexOutOfBoundsException ex) {
			System.out.println("No arguments for divisors, setting defaults (3, 5)");
			a = 3;
			b = 5;
		}
		
	
		try {
			start = Integer.parseInt(args[2]);
			end = Integer.parseInt(args[3]);
		} catch(NumberFormatException ex) {
			System.out.println("Bad arguments for starting and ending indicies, please use valid integers.\nSetting defaults (1, 100)");
			start = 1;
			end = 100;
		} catch(ArrayIndexOutOfBoundsException ex) {
			System.out.println("No arguments for starting and ending indicies, setting defaults (1, 100)");
			start = 1;
			end = 100;
		}
		
		String output = "";
		for(int i = start; i <= end; i++) {
			if(i % a == 0) output += "Fizz ";
			if(i % b == 0) output += "Buzz";
			if(i % a != 0 && i % b != 0) output += Integer.toString(i);
			output += "\n";
		}
		System.out.println(output);
	}
}
