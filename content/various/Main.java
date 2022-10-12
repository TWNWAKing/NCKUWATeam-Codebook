
/**
 * Author: TWNWAKing
 * Description: Use javac Main.java and java -DLOCAL $\texttt{\_}$ DBG=true Main
**/
import java.util.*;
import java.io.*;
public class Main{ //TODO: Make sure change the constants and the right class name
    public static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    public static StringTokenizer st=new StringTokenizer("");
    public static PrintWriter os=new PrintWriter(System.out);
    //TODO: uncomment below line if you get RE
    public static final boolean LOCAL=System.getProperty("LOCAL_DBG")!=null;
    public static final int mod=1000000007; //Decalring Constants
    public static final int[] d4x={-1,0,1,0},d4y={0,1,0,-1};
    public static final int[] d8x={-1,-1,0,1,1,1,0,-1},d8y={0,1,1,1,0,-1,-1,-1};
    public static void solve(int test_case){}
    public static void main(String[] args){
        int test_cases=1;
        //test_cases=readInt();
        for (int tc=1;tc<=test_cases;tc++){
            solve(tc);
        }
        os.close();
    }
    //Sorting arrays
    // Arrays.sort(A, 0, n, cmp);
    /*
    class cmp implements Comparator<Integer>{
        public int compare(Integer a, Integer b){
            return a-b;
        }
    }
    */
    public static void debug(Object... o){if(LOCAL){ System.err.print("LINE("+Thread.currentThread().getStackTrace()[2].getLineNumber()+") : ");System.out.println(Arrays.deepToString(o));}}
    static void sort(int[] a){ ArrayList<Integer> tmp=new ArrayList<>();for(int i:a) tmp.add(i);Collections.sort(tmp);for(int i=0;i<a.length;i++) a[i]=tmp.get(i);}
    static int gcd(int a,int b){if(a==0)return b;if(b==0)return a;return gcd(b,a%b);}
    static long gcd(long a,long b){if(a==0)return b;if(b==0)return a;return gcd(b,a%b);}
    static int min(int a,int b){return Math.min(a,b);}
    static long min(long a,long b){return Math.min(a,b);}
    static int max(int a,int b){return Math.max(a,b);}
    static long max(long a,long b){return Math.max(a,b);}
    static long mod_qpow(long a,long b,long m){a%=m;long tmp=1;while(b>0){if((b&1)==1) tmp=tmp*a%m;a=a*a%m;b>>=1;}return tmp;}
    static long inv(long a,long m){return mod_qpow(a,m-2,m);} //modular inverse for `prime` numbers
    static long mul(long a,long b,long MOD){return (1L*a*b)%MOD;}
    static long add(long a,long b,long MOD){long s=(a+b);if(s>=MOD) s-=MOD;return s;}
    static long sub(long a, long b,long MOD){long s=(a+MOD-b);if(s>=MOD) s-=MOD;return s;}
    static long[] pre_fac,pre_invfac,pre_inv;
    static void prepareCombinatorics(int LIM, long MOD){pre_fac=new long[LIM];pre_invfac=new long[LIM];pre_inv=new long[LIM];pre_fac[0]=1;for(int i=1;i<LIM;i++) pre_fac[i]=mul(pre_fac[i-1],i,MOD);pre_invfac[LIM-1]=inv(pre_fac[LIM-1],MOD);for(int i=LIM-2;i>=0;i--) pre_invfac[i]=mul(pre_invfac[i+1],i+1,MOD);for(int i=1;i<LIM;i++) pre_inv[i]=mul(pre_invfac[i],pre_fac[i-1],MOD);}
    static long C(int n,int k,long MOD){if(n<k) return 0;if(n<0||k<0) return 0;return mul(pre_fac[n],mul(pre_invfac[k],pre_invfac[n-k],MOD),MOD);}
    public static String readString(){while (!st.hasMoreTokens())try{st=new StringTokenizer(br.readLine());} catch (IOException e){e.printStackTrace();}return st.nextToken();}
    public static int readInt(){return Integer.parseInt(readString());}
    public static long readLong(){return Long.parseLong(readString());}
    public static double readDouble(){return Double.parseDouble(readString());}
    public static char readChar(){return readString().charAt(0);}
}