using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TanqueCsharp
{
    class TanqueVacioException : Exception
    {
        public TanqueVacioException() : base()
        {

        }
        public override String ToString()
        {
            return "Se ha vaciado el tanque.";
        }
    }
}

