package factory;

import maze.Door;
import maze.DoorNeedingSpell;
import maze.EnchantedRoom;
import maze.Room;
import maze.Spell;

public class EnchantedMazeFactory extends MazeFactory {
    @Override
    public Room makeRoom(int n) {
        return new EnchantedRoom(n, CastSpell());
    }

    @Override
    public Door makeDoor(Room r1, Room r2) {
        return new DoorNeedingSpell(r1, r2);
    }

    private Spell CastSpell()
    {
        return new Spell();
    }
}
