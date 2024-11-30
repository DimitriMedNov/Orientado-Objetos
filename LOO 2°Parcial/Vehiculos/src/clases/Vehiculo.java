/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clases;
import interfaces.IRemolque;

/**
 *
 * @author Roberto
 */
public abstract class Vehiculo implements IRemolque
{
    private String matricula;
    private int velocidad;
    public Vehiculo(String matricula)
    {
        setMatricula(matricula);
        setVelocidad(0);
    }
    public void setMatricula(String matricula)
    {
        this.matricula = matricula;
    }
    public String getMatricula()
    {
        return (this.matricula);
    }
    public void setVelocidad(int velocidad)
    {
        if(velocidad < 0 )
        {
            throw new RuntimeException("Valor no válido para la velocidad");
        }
        this.velocidad = velocidad;
    }
    public int getVelocidad()
    {
        return (this.velocidad);
    }
    @Override
    public Remolque getRemolque(){return (null );};
    public abstract void acelerar (int velocidad);
    public abstract void frenar (int velocidad);
}
