using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CLASS_POINT3D
{
    class Point3DC
    {
        private double x, y, z, rx, ry, rz;

        public Point3DC()
        {
            this.x = 0;
            this.y = 0;
            this.z = 0;
            this.rx = 0;
            this.ry = 0;
            this.rz = 0;
        }
        public Point3DC(double x, double y, double z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }
        public void transladar(double dx, double dy, double dz)
        {
            this.x += dx;
            this.y += dy;
            this.z += dz;
        }
        public void angulos(double ax, double ay, double az) {

            double rx = ((Math.Cos(ay) * (Math.PI * y / ay)) - (Math.Sin(az) * (Math.PI * z / az))) / ((Math.Sin(ay) * (Math.PI * y / ay)) + (Math.Cos(az) * (Math.PI * z / az)));
            double ry = ((Math.Cos(az) * (Math.PI * z / az)) - (Math.Sin(ax) * (Math.PI * x / ax))) / ((Math.Sin(az) * (Math.PI * z / az)) + (Math.Cos(ax) * (Math.PI * x / ax)));
            double rz = ((Math.Cos(ax) * (Math.PI * x / ax)) -(Math.Sin(ay) * (Math.PI * y / ay))) / ((Math.Sin(ax) * (Math.PI * x / ax)) + (Math.Cos(ay) * (Math.PI * y / ay)));
            //rx = ((cos(y * 3.1416 / ay)) - (sin(z * 3.1416 / az))) / ((sin(y * 3.1416 / ay)) + (cos(z * 3.1416 / az)));
            //ry = ((cos(z * 3.1416 / az)) - (sin(x * 3.1416 / ax))) / ((sin(z * 3.1416 / az)) + (cos(x * 3.1416 / ax)));
            //rz = ((cos(x * 3.1416 / ax)) - (sin(y * 3.1416 / ay))) / ((sin(x * 3.1416 / ax)) + (cos(y * 3.1416 / ay)));
        }
        public void imprimir()
        {
            System.Console.WriteLine("(" + this.x + "," + +this.y + "," + +this.z + ")");
        }
        public void printRotacion()
        {
            System.Console.WriteLine("(" + rx + "," + ry + "," + rz + ")");
        }
    }
}
