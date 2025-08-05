import java.util.Scanner;
import java.util.ArrayList;

public class Hello{
	public static void main(String[] args){
	  int n;
	  Scanner sc =new Scanner(System.in);
	  n=sc.nextInt();
	  
	 ArrayList<int[]> arr=new ArrayList<>();
	  for(int i=0;i<n;i++){
	  		int home=sc.nextInt();
	  		int away =sc.nextInt();
	  		arr.add(new int[]{home,away});
	  	}
	
	  int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && arr.get(i)[0] == arr.get(j)[1]) {
                count++;
            }
        }
    }
    System.out.print(count);
	  
	}
}