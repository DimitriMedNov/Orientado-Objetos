using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    abstract class Vehiculo
    {
        protected String matricula;
        protected float velocidad;
        protected float cantidad;

        public Vehiculo(String matricula, float velocidad)
        {
            this.matricula = matricula;
            this.velocidad = velocidad;
        }
        public float Velocidad
        {
            set { this.velocidad = value; }
            get { return this.velocidad; }
        }

        public abstract void acelerar(float cantidad);

        public abstract void frenar(float cantidad);

        public abstract String toString();

        public void setVelocidad(float velocidad)
        {
            this.velocidad = velocidad;
        }
    }
}
