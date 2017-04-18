package pkg3d;

import com.sun.j3d.utils.universe.SimpleUniverse;
import com.sun.j3d.utils.geometry.ColorCube;
import javax.media.j3d.BranchGroup;
import javax.media.j3d.Transform3D;
import javax.media.j3d.TransformGroup;
import javax.vecmath.Vector3f;

/**
 *
 * @author Ivan
 */
public class Main {

    // Método contructor.
    
    public Main(){
        // Creo una escena.
        SimpleUniverse escena = new SimpleUniverse();
        // Creo una jararquia (grupo).
        BranchGroup rama = new BranchGroup();
        // Creo un cubo.
        ColorCube micubo = new ColorCube(0.3);
        // Creo un grupo de trasformaciones y una acción de transformación (mover de posiciión).
        TransformGroup grupotransformacion = new TransformGroup();
        Transform3D mitransformacion = new Transform3D();
        // Creo un vector 3f para la transformación.
        Vector3f mivector = new Vector3f(0.3f,0.4f,0.5f);
        // Llevo a cabo la transformación.
        mitransformacion.setTranslation(mivector);
        
        grupotransformacion.setTransform(mitransformacion);
        grupotransformacion.addChild(micubo);
        rama.addChild(grupotransformacion);              // A la jerarquia le añado una rama.
        escena.getViewingPlatform().setNominalViewingTransform(); // Damae las coordenadas de transformacion de la plataforma actual.
        escena.addBranchGraph(rama);                    // A la escena le añado la caja.
    }
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Hola mamita");
        new Main();
    }

}