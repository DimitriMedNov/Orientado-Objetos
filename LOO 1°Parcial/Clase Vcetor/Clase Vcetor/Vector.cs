using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Vcetor
{
    class Vector
    {
        private double x, y, gy, gx, res, cx, cy;
        public Vector()
        {
            this.x = 0;
            this.y = 0;
        }
        public Vector(double x, double y)
        {
            this.x = x;
            this.y = y;
        }
        public void sumar(double dx, double dy)
        {
            this.x += dx;
            this.y += dy;
        }
        public void resta(double mx, double my)
        {
            this.x -= mx;
            this.y -= my;
        }
        public void multi(double qx, double qy)
        {
            this.x *= qx;
            this.y *= qy;
        }
        public void magnitud(double x, double y)
        {
            gx = Math.Sqrt((x * 2));
            gy = Math.Sqrt((y * 2));
            res = gx + gy;

            System.Console.WriteLine("La magnitud es de: " + res);
        }
        public void hx(double res)
        {
            cx = res* Math.Cos(x);

            System.Console.WriteLine("CX es: " + cx);
        }
        public void hy(double res)
        {
            cy = res * Math.Cos(y);

            System.Console.WriteLine("CX es: " + cy);
        }
        public void imprimir()
        {
            System.Console.WriteLine("(" + this.x + "," + +this.y + ")");
        }
    }
}
