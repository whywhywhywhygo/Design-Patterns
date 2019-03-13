package maze;

public class Room extends MapSite {
    public enum Direction {
        north, south, east, west
    }

    private int m_roomNumber;
    private MapSite[] m_sides = new MapSite[4];

    public Room(int n)
    {
        m_roomNumber = n;
    }

    public void setSide(Direction direction, MapSite site)
    {
        m_sides[direction.ordinal()] = site;
    }
}
