package br.com.test;

import java.util.Scanner;

public class IO {
	static Scanner scan = new Scanner(System.in);

	public static double input() {
		System.out.print("Digite um valor numérico: ");
		return scan.nextDouble();
	}

	public static void output(String s, double n) {
		int i = 0;

		while (i++ < s.length()) {
			System.out.print("-");
		}
		System.out.println("\n" + s);
		i = 0;
		while (i++ < s.length()) {
			System.out.print("-");
		}
		System.out.println("\n" + n + "\n");
	}

	public static void output(String s) {
		System.out.println(s);
	}
}
