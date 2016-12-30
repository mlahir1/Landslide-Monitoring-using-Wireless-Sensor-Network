import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;

public class WSN {

	public static void main(String[] args) {

		ArrayList<Integer> node1Values = new ArrayList<>();
		ArrayList<Integer> node2Values = new ArrayList<>();
		int counter1=0;
		int counter2=0;
		int lineCounter=0;
		int prevLine =0;
		int prevIncrement=0;
		try (BufferedReader br = new BufferedReader(new FileReader("datafile.txt"))) {
			for (String line; (line = br.readLine()) != null;) {
				if (line != null) {
					if (line.contains("Node")) {
						prevLine=lineCounter;
						lineCounter++;
						String[] linediv = line.split(",");
						String[] nodeArray = linediv[0].split(":");
						String[] valueArray = linediv[1].split(":");
						if (Integer.parseInt(nodeArray[1].trim()) == 1) {
							int val =Integer.parseInt(valueArray[1].trim());
							node1Values.add(val);
							if((val>500||val<350)&&prevLine==lineCounter-1)
							{
								if(prevLine==lineCounter-1&&(prevIncrement==1||prevIncrement==0))
								{
									prevIncrement=1;
									counter1++;
								}
								else
									counter1=0;
							}
							
						}
						else if (Integer.parseInt(nodeArray[1].trim()) == 2)
						{
							int val =Integer.parseInt(valueArray[1].trim());
							node2Values.add(val);
							if((val>500||val<350))
							{
								if(prevLine==lineCounter-1&&(prevIncrement==2||prevIncrement==0))
								{
									prevIncrement=2;
									counter2++;
								}
								else
									counter2=0;
							}
						}
						if(counter1>20)
						{
							System.out.println(lineCounter+" Leak near Node 1");
							//System.out.println(lineCounter+" Leak near Node 1");
							//System.out.println(lineCounter+" Leak near Node 1");
							counter1=0;
						}
						if(counter2>20)
						{
							System.out.println(lineCounter+" Leak near Node 2");
							//System.out.println(lineCounter+" Leak near Node 2");
							//System.out.println(lineCounter+" Leak near Node 2");
							counter2=0;
						}
					}
				}
			}
			// line is not visible here.
		} catch (Exception ex) {
			System.out.println(ex.toString());
		}
	}

}
