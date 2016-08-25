package br.com.test;

public class Calcula {
	public static double soma(double a, double b) {
		return a + b;
	}

	public static double subtrai(double a, double b) {
		return a - b;
	}

	public static double multiplica(double a, double b) {
		return a * b;
	}

	public static double divide(double a, double b) {
		return a / b;
	}

	public static double potencia(double a, double b) {
		return Math.pow(a, b);
	}

	public static double raizQ(double n) {
		return Math.sqrt(n);
	}

	public static double raizC(double n) {
		return Math.cbrt(n);
	}
}
