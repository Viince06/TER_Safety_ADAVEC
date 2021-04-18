package projet;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class MyScadeGenerator implements fr.kairos.timesquare.ccsl.ISimpleSpecification {
	
	
  
  // Method descriptor #6 (Ljava/lang/String;)V
  public void addClock(java.lang.String arg0) {
      PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L2, L1 = AddClock(L3);");
	  outputfile.println("L3 = " + arg0 + ";");
	  outputfile.println("presence = L2;");
	  outputfile.println("alive = L1;");
	  outputfile.close();
  }
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void subclock(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = SubClock(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("v = L1;");
	  outputfile.close();
  }
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void exclusion(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Exclusion(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("v = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void precedence(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Precedence(L2, L3, L4);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("L4 = kind;");
	  outputfile.println("v = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void precedence(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Causality2(L2, L3, L4, L5, L6);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("L4 = " + arg2 + ";");
	  outputfile.println("L5 = " + arg3 + ";");
	  outputfile.println("L6 = kind");
	  outputfile.println("v = L1");
	  outputfile.close();
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void causality(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Causality(L2, L3, L4);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("L4 = kind;");
	  outputfile.println("v = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void causality(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Causality2(L2, L3, L4, L5, L6);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("L4 = " + arg2 + ";");
	  outputfile.println("L5 = " + arg3 + ";");
	  outputfile.println("L6 = kind");
	  outputfile.println("v = L1");
	  outputfile.close();
  }
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void inf(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }	  
	  outputfile.println("L1 = Inf(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("c = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void sup(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }	  
	  outputfile.println("L1 = Sup(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("c = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void union(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Minus(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("c = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void intersection(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Intersection(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("c = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void minus(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Minus(L2, L3);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("c = L1;");
	  outputfile.close();
  }
  
  // Method descriptor #20 (Ljava/lang/String;Ljava/lang/String;III)V
  public void periodic(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, int arg4){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = Periodic(L2, L3, L4, L5, L6);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("L4 = " + arg2 + ";");
	  outputfile.println("L5 = " + arg3 + ";");
	  outputfile.println("L6 = " + arg4 + ";");
	  outputfile.println("v = L1;");
	  outputfile.close();
  }
  
  
  // Method descriptor #22 (Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V
  public void delayFor(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, java.lang.String arg4){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = DelayFor(L2, L3, L4, L5, L6);");
	  outputfile.println("L2 = " + arg0 + ";");
	  outputfile.println("L3 = " + arg1 + ";");
	  outputfile.println("L4 = " + arg2 + ";");
	  outputfile.println("L5 = " + arg3 + ";");
	  outputfile.println("L6 = " + arg4 + ";");
	  outputfile.println("v = L1;");
	  outputfile.close();
  }
}