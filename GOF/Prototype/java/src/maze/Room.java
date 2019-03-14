package maze;

public class Room extends MapSite implements Cloneable {
    public enum Direction {
        north, south, east, west
    }

    private int m_roomNumber;
    private MapSite[] m_sides = new MapSite[4];

    public Room() {}

    public Room(int n)
    {
        m_roomNumber = n;
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    public void initialize(int n) {
        m_roomNumber = n;
    }

    public void setSide(Direction direction, MapSite site)
    {
        m_sides[direction.ordinal()] = site;
    }
}
