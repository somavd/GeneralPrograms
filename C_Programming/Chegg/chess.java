public class chessBoard
{
	public static void main(String args[])
	{
		String[] pieces={"\u2656","\u2658","\u2659","\u2655","\u2654","\u2657"};
		String[] blackpieces={"\u265c","\u265e","\u265d","\u265b","\u265a","\u265f"};
		for(int i=0;i<5;i++)
			System.out.print(blackpieces[i]+" ");
		for(int i=2;i>=0;i--)
			System.out.print(blackpieces[i]+" ");
		System.out.println();
		for(int i=0;i<8;i++)
		    System.out.print(blackpieces[5]+" ");
		System.out.println();
		for(int i=0;i<4;i++)
		{
		    for(int j=0;j<8;j++)
		    	System.out.print("\u25AD"+" ");
		    System.out.println();
		}
		for(int i=0;i<8;i++)
		    System.out.print(pieces[5]+" ");
    	System.out.println();
    	for(int i=0;i<5;i++)
			System.out.print(pieces[i]+" ");
		for(int i=2;i>=0;i--)
			System.out.print(pieces[i]+" ");
		    
	}
}
