package maze;

public class EnchantedRoom extends Room {
    Spell m_spell;

    public EnchantedRoom(int n, Spell spell)
    {
        super(n);
        m_spell = spell;
    }
}
