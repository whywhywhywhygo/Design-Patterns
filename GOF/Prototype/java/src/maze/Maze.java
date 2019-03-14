package maze;
import java.util.LinkedList;

public class Maze implements Cloneable {
    private LinkedList<Room> m_rooms = new LinkedList<>();

    public void addRoom(Room room)
    {
        m_rooms.addLast(room);
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
