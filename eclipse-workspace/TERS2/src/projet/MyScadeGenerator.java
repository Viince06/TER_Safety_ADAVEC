package projet;

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class MyScadeGenerator implements fr.kairos.timesquare.ccsl.ISimpleSpecification {
  
  // Method descriptor #6 (Ljava/lang/String;)V
  public void addClock(java.lang.String arg0) {
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new FileWriter("addClockTest.xscade"));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("v = L4");
	  outputfile.println("L2 = true;");
	  outputfile.println("L3 = false;");
	  outputfile.println("L4 = (case L1 of");
	  outputfile.println(" | PRESENT :   L2");
	  outputfile.println(" | _ :   L3);");
	  outputfile.close();
  }
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void subclock(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new FileWriter("subClockTest.xscade"));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("v = L10;");
	  outputfile.println("L3 = true;");
	  outputfile.println("L4 = false;");
	  outputfile.println("L5 = true;");
	  outputfile.println("L6 = false;");
	  outputfile.println("L7 = ( case L1 of");
	  outputfile.println(" | PRESENT :   L3");
	  outputfile.println(" | _ :   L4);");
	  outputfile.println("L8 = ( case L2 of");
	  outputfile.println(" | PRESENT :   L5");
	  outputfile.println(" | _ :   L6);");
	  outputfile.println("L9 =  not L8;");
	  outputfile.println("L10 = L7 and L9;");
	  outputfile.close();
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void exclusion(java.lang.String arg0, java.lang.String arg1){
	  
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void precedence(java.lang.String arg0, java.lang.String arg1){
	  
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void precedence(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void causality(java.lang.String arg0, java.lang.String arg1){
	  
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void causality(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  
  }
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void inf(java.lang.String arg0, java.lang.String... arg1){
	  
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void sup(java.lang.String arg0, java.lang.String... arg1){
	 
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void union(java.lang.String arg0, java.lang.String... arg1){
	  
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void intersection(java.lang.String arg0, java.lang.String... arg1){
	  
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void minus(java.lang.String arg0, java.lang.String... arg1){
	  
  }
  
  
  // Method descriptor #20 (Ljava/lang/String;Ljava/lang/String;III)V
  public void periodic(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, int arg4){
	 
  }
  
  
  // Method descriptor #22 (Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V
  public void delayFor(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, java.lang.String arg4){
	
  }
}