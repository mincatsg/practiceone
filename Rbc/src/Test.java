
interface MM {
	public void mianji();
}

class yuan implements MM {
	double t = 3.14;
	int r;

	public void mianji() {
		double w;
		w = t * r * r;
		System.out.println("Բ�����:" + w);
	}
}

class juxing implements MM {
	int a;
	int b;

	public void get(int z, int x) {
		a = z;
		b = x;
	}

	public void mianji() {
		int s;
		s = a * b;
		System.out.println("�������:" + s);
	}
}

public class Test {
	public static void main(String args[]) {
		yuan yuan1 = new yuan();
		yuan1.r = 2;
		yuan1.mianji();
		juxing juxing1 = new juxing();
		juxing1.get(6, 7);
		juxing1.mianji();
	}
}
