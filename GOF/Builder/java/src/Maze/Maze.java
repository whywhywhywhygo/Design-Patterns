package Maze;

import java.util.LinkedList;

public class Maze {

	private LinkedList<Room> m_rooms = new LinkedList<Room>();

	public Room roomNo(int n) {
		for(Room room : m_rooms) {
			if (room.no() == n)
				return room;
		}
		return null;
	}

	public void addRoom(Room room) {
		m_rooms.addLast(room);
	}
}
