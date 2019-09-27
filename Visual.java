import GUI;
import java.io.File;

public class Visual
{
    public static void main(String[] args)
    {
        GUI gui  = new GUI();
        gui.open();
        /*output is a file from the c++ simulation being run that is simply outputted
         *to a file, with each "frame" (see frame.h and documentation). sent through
         *to a scanner and then string to check for
         *
         */
        File output = new File("output.txt");
        String read = "";
        while (!read.equals("End Output Log - #0124abcd"))
        {
            read = scanner.nextLine();
        }
        Simulation sim = new Simulation();
    }
}
