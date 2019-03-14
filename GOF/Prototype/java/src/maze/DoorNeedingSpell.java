package maze;

public class DoorNeedingSpell extends Door {
    public DoorNeedingSpell(Room r1, Room r2)
    {
        super(r1, r2);
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
