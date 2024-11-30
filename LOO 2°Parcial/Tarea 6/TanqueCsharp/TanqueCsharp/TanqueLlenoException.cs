using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TanqueCsharp
{
    class TanqueLlenoException : Exception
    {
        //public const char* what() const throw();
        public TanqueLlenoException() :base("Se ha alcanzado el limite de capacidad.")
        {
        }
        public String toString()
        {
            return base.Message;
        }
    }
}
