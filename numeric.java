import java.io.*;
public class Numeric{
    public static void main(String args[]) {
        String s="2";
        boolean numeric=true;
    try
    {
        Double num=Double.parseDouble(s);
    }catch(NumberFormatException e){
        numeric=false;
    }
    if(numeric)
        System.out.println("yes");
    else
        System.out.println("no");
    }
}
