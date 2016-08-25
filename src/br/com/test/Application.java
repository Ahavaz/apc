package br.com.test;

public class Application {
	public static void main(String[] args) {
		double a, b, r;

		a = IO.input();
		b = IO.input();
		r = Calcula.soma(a, b);
		IO.output("Soma", r);

		a = IO.input();
		b = IO.input();
		r = Calcula.subtrai(a, b);
		IO.output("Subtração", r);

		a = IO.input();
		b = IO.input();
		r = Calcula.multiplica(a, b);
		IO.output("Multiplicação", r);

		a = IO.input();
		b = IO.input();
		r = Calcula.divide(a, b);
		IO.output("Divisão", r);

		a = IO.input();
		b = IO.input();
		r = Calcula.potencia(a, b);
		IO.output("Potência", r);

		a = IO.input();
		r = Calcula.raizQ(a);
		IO.output("Raiz Quadrada", r);

		a = IO.input();
		r = Calcula.raizC(a);
		IO.output("Raiz Cúbica", r);

		IO.output("~Fim~");
	}
}
