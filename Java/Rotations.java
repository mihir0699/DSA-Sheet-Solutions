class Main
{
	static boolean Rotations(String s1, String s2)
	{
		return (s1.length() == s2.length()) &&
			((s1 + s1).indexOf(s2) != -1);
	}
	public static void main (String[] args)
	{
		String s1 = "HACKTOBER";
		String s2 = "FEST";

		if (Rotations(s1, s2))
			System.out.println("The strings provided are rotations of one another.");
		else
			System.out.printf("The strings provided are not rotations of one another.");
	}
}

