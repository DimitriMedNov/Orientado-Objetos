using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca_Personal_Csharp
{
    class MagazineC : CaracteristicasC
    {
        protected int volumen;
        public MagazineC() : base()
        {
            this.volumen = 0;
        }
        public MagazineC(String title, int ci, int year, int volumen) : base(title, ci, year)
        {
            this.volumen = volumen < 0 ? 0 : volumen;
        }
        public int Volumen
        {
            get { return this.volumen; }
            set { this.volumen = value < 0 ? 0 : value; }
        }
        public void setRevista(String title, int ci, int year, int volumen)
        {
            this.volumen = volumen < 0 ? 0 : volumen;
            this.title = title;
            this.ci = ci;
            this.year = year;
        }
        public void showDetails()
        {
            base.imprimir();
            Console.Write("\nVolumen: " + this.volumen);
        }
    }
}
