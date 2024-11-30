using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Complex_CSharp
{
    class Clase_Complex_C
    {
		private float real;
		private float imag;

		public Clase_Complex_C()
		{
			this.real = 0;
			this.imag = 0;
		}

		public Clase_Complex_C(float r, float i)
		{
			this.real = r;
			this.imag = i;
		}
		public double module()
		{
			return Math.Sqrt(this.real * this.real + this.imag * this.imag);
		}
		public Clase_Complex_C conjugate()
		{
			Clase_Complex_C conj = new Clase_Complex_C(this.real, -this.imag);
			return conj;
		}
		public void add(Clase_Complex_C n1, Clase_Complex_C n2)
		{
			this.real = n1.Real + n2.Real;
			this.imag = n1.Imag + n2.Imag;
		}
		public void subs(Clase_Complex_C n1, Clase_Complex_C n2)
		{
			this.real = n1.Real - n2.Real;
			this.imag = n1.Imag - n2.Imag;
		}
		public void mult(Clase_Complex_C n1, Clase_Complex_C n2)
		{
			// (a*c - b*d) + (a*d + b*c)
			this.real = n1.Real * n2.Real - n1.Imag * n2.Imag;
			this.imag = n1.Real * n2.Imag + n1.Imag * n2.Real;
		}
		public void div(Clase_Complex_C n1, Clase_Complex_C n2)
		{
			this.real = (n1.Real * n2.Real + n1.Imag * n2.Imag) / (n2.Real * n2.Real + n2.Imag * n2.Imag);
			this.imag = (-n1.Real * n2.Imag + n2.Real * n1.Imag) / (n2.Real * n2.Real + n2.Imag * n2.Imag);
		}

		public string toString()
		{
			string str;
			str = (this.real) + (this.imag < 0 ? " " : "+") + (this.imag) + "i";
			return str;
		}
		public float Real
		{
			get { return this.real; }
			set { this.real = value; }
		}
		public float Imag
		{
			get { return this.imag; }
			set { this.imag = value; }
		}
	}
}
