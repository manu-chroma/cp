import java.util.*;
import java.io.*;
public class cycle
{


	/************************ SOLUTION STARTS HERE ***********************/

	static class ModMath {
	static final long mod = (long) (1e9) + 7L; // Default

	static long sub(long a, long b) {
		long sub = ((a % mod) - (b % mod)) % mod;
		return sub < 0 ? mod + sub : sub;
	}

	static long mul(long a, long b) {
		return ((a % mod) * (b % mod)) % mod;
	}

	static long add(long a, long b) {
		return ((a % mod) + (b % mod)) % mod;
	}

	static long div(long a, long b) {
		return mul(a, modInverse(b));
	}

	static long modInverse(long n) { // Fermat's little theorem
	return modPow(n, mod - 2L);
}

	static long modPow(long a, long b) { // squared exponentiation
		if (b == 0L || a == 1L)
			return 1L;
		else if (b == 1L)
			return a;
		else {
		if ((b & 1L) == 0L) // Checking whether b is even (fast)
		return modPow((a * a) % mod, b >> 1);
		else
			return (a * modPow((a * a) % mod, b >> 1)) % mod;
	}
}
}

private static void solve(FastScanner s1, PrintWriter out){

	int N = s1.nextInt();
	int arr[] = s1.nextIntArrayOneBased(N);
	int vis[] = new int[N + 1];
	int M = 0;
	int cycle = 0;
	for(int i=1;i<=N;i++){
		if(vis[i] == 0){
			cycle++;
			int par = i;
			vis[par] = 1;
			while(true){
			
				if(vis[arr[par]] != 0){
					M += vis[par] - vis[arr[par]] + 1;
					break;
				}
				vis[arr[par]] = vis[par] + 1;	
				par = arr[par];
			}
		}
	}
	out.println("M = " + M);
	out.println("cycle " + cycle);
	out.println(ModMath.sub(ModMath.modPow(2 , N) , ModMath.modPow(2 , N - M + cycle)));

}



/************************ SOLUTION ENDS HERE ************************/





/************************ TEMPLATE STARTS HERE *********************/

public static void main(String []args) throws IOException {
	FastScanner in  = new FastScanner(System.in);
	PrintWriter out = 
	new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)), false); 
	solve(in, out);
	in.close();
	out.close();
}    

static class FastScanner{
	BufferedReader reader;
	StringTokenizer st;
	FastScanner(InputStream stream){reader=new BufferedReader(new InputStreamReader(stream));st=null;}	
	String next()
	{while(st == null || !st.hasMoreTokens()){try{String line = reader.readLine();if(line == null){return null;}		    
	st = new StringTokenizer(line);}catch (Exception e){throw new RuntimeException();}}return st.nextToken();}
	String nextLine()  {String s=null;try{s=reader.readLine();}catch(IOException e){e.printStackTrace();}return s;}	    	  	
	int    nextInt()   {return Integer.parseInt(next());}
	long   nextLong()  {return Long.parseLong(next());}		
	double nextDouble(){return Double.parseDouble(next());}
	char   nextChar()  {return next().charAt(0);}
	int[]  nextIntArray(int n)         {int[] arr= new int[n];   int i=0;while(i<n){arr[i++]=nextInt();}  return arr;}
	long[] nextLongArray(int n)        {long[]arr= new long[n];  int i=0;while(i<n){arr[i++]=nextLong();} return arr;}	
	int[]  nextIntArrayOneBased(int n) {int[] arr= new int[n+1]; int i=1;while(i<=n){arr[i++]=nextInt();} return arr;}	    	
	long[] nextLongArrayOneBased(int n){long[]arr= new long[n+1];int i=1;while(i<=n){arr[i++]=nextLong();}return arr;}	    	
	void   close(){try{reader.close();}catch(IOException e){e.printStackTrace();}}				
}

/************************ TEMPLATE ENDS HERE ************************/
}
