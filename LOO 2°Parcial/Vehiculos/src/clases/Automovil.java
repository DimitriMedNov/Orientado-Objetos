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
public class Automovil extends Vehiculo
{
    public Automovil (String matricula)
    {
        super(matricula);
    }
    @Override
    public void acelerar(int velocidad)
    {
        if (velocidad > 200)
        {
            throw new RuntimeException("Advertencia, El automovil va Demasiado rapido");
        }
        
        super.setVelocidad(velocidad);
        System.out.println("Automovil circulando a " + super.getVelocidad());
    }
    @Override
    public void frenar (int velocidad)
    {
        if (velocidad < 0)
        {
            throw new RuntimeException("Vehiculo detenido");
        }
        super.setVelocidad(velocidad);
        System.out.println("El automovil " + (super.getVelocidad() > 0 ? " disminuyo a " + super.getVelocidad() : " se detuvo"));
    }
}
