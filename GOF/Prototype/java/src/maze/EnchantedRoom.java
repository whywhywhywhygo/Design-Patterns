package maze;

public class EnchantedRoom extends Room {
    Spell m_spell;

    public EnchantedRoom(int n, Spell spell)
    {
        super(n);
        m_spell = spell;
    }

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }

    void initialize(int n, Spell spell) {
        super.initialize(n);
        m_spell = spell;
    }
}
