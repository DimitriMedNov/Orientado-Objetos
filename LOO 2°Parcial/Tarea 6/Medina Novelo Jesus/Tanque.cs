using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TanqueCsharp
{
    class Tanque : Exception
    {
        private double capacidad, cargaActual;
        private String tipoLiquido;

        public Tanque()
        {
            this.capacidad = 100;
            this.cargaActual = 0;
            this.tipoLiquido = "Agua";
        }
        public Tanque(double capacidad, double cargaActual, String tipoLiquido)
        {
            this.capacidad = capacidad;
            this.cargaActual = cargaActual;
            this.tipoLiquido = tipoLiquido;
        }
        public double Capacidad
        {
            get { return this.capacidad; }
        }
        public double CargaActual
        {
            get { return this.cargaActual; }
        }
        public String TipoLiquido
        {
            get { return this.tipoLiquido; }
        }
        public void AgregarCarga(double cargaMore)
        {
            try
            {
                this.cargaActual += cargaMore;
                if (this.cargaActual >= this.capacidad)
                {
                    this.cargaActual = this.capacidad;
                    throw new TanqueLlenoException();
                }
            }
            catch (TanqueLlenoException e)
            {
                System.Console.WriteLine(e.ToString());
            }
            System.Console.WriteLine("La carga actual es de " + this.cargaActual + " litros de " + this.tipoLiquido);
        }
        public void RetirarCarga(double cargaLess)
        {
            try
            {
                this.cargaActual -= cargaLess;
                if (this.cargaActual <= 0)
                {
                    this.cargaActual = 0;
                    throw new TanqueVacioException();
                }
            }
            catch (TanqueVacioException e)
            {
                System.Console.Write(e.ToString());
            }
            System.Console.WriteLine("La carga actual es de " + this.cargaActual + " litros de " + this.tipoLiquido);
        }
    }
}
