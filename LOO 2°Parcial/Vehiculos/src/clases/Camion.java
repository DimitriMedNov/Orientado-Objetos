/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clases;

/**
 *
 * @author Roberto
 */
public class Camion extends Vehiculo
{
    private Remolque remolque = null;
    public Camion (String matricula)
    {
        super(matricula);
    }
     @Override
    public void acelerar(int velocidad)
    {
        if ((!(this.remolque == null) && velocidad > 90) || (this.remolque == null && velocidad > 110))
        {
            throw new RuntimeException("Advertencia, El camion va Demasiado rapido");
        }
       
        super.setVelocidad(velocidad);
        System.out.println("Camion circulando a " + super.getVelocidad());
    }
    @Override
    public void frenar (int velocidad)
    {
        if (velocidad < 0)
        {
            throw new RuntimeException("Camion detenido");
        }
        super.setVelocidad(velocidad);
         System.out.println("El camion " + (super.getVelocidad() > 0 ? " disminuyo a " + super.getVelocidad() : " se detuvo"));
    }
    @Override
    public Remolque getRemolque()
    {
        if (this.remolque == null)
        {
            this.remolque = new Remolque();
        }
        
        return this.remolque;
        
    }
}
