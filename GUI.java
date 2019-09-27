import java.awt;

public class GUI
{
    public static Frame frame = new Frame();

    GUI()
    {
        System.out.println("java:GUI initialized");
    }

    void open()
    {
        frame.setVisible(true);
    }
}
