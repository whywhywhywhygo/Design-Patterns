package maze;

public class Door extends MapSite {
    private Room m_r1;
    private Room m_r2;

    public Door(Room r1, Room r2)
    {
        m_r1 = r1;
        m_r2 = r2;
    }
}
