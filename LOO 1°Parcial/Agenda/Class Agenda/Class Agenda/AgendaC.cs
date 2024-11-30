using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class_Agenda
{
    class AgendaC
    {
        private String name, secondname, mail;
        public AgendaC()
        {
            this.name = "*Sin informacion previa*";
            this.secondname = "*Sin informacion previa*";
            this.mail = "*Sin informacion previa*";
        }
        public AgendaC(String name, String secondname, String mail)
        {
            this.name = name;
            this.secondname = secondname;
            this.mail = mail;
        }
        public void persona(String nombre, String apellido, String correo)
        {
            name = nombre;
            secondname = apellido;
            mail = correo;
        }
        public void imprimir()
        {
            System.Console.WriteLine("Nombre: " + name + "\n" + "Apellido: " + secondname + "\n" + "Correo: " + mail + "\n");
        }
    }
}
