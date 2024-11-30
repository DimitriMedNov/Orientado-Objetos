/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inicio;

import clases.Automovil;
import clases.Camion;
import clases.Vehiculo;


/**
 *
 * @author Roberto
 */
public class Arranque 
{
    public static void main (String[] params)
    {
        Vehiculo auto = new Automovil ("dmx98076)");
        Vehiculo camion = new Camion ("124kdjfsodifj");
        camion.getRemolque().setAlto(3.5);
        camion.getRemolque().setAncho(2.5);
        camion.getRemolque().setLargo(8.2);
        camion.getRemolque().setPesomax(5000);
        System.out.println(camion.getRemolque().toString());
        auto.acelerar(120);
        auto.frenar(20);
        camion.acelerar(80);
        camion.frenar(5);
    }
}