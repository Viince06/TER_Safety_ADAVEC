package projet;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;

public class MyScadeGenerator implements fr.kairos.timesquare.ccsl.ISimpleSpecification {
	
	int count;
	Map<String, String> map = new HashMap<String, String>();

  // Method descriptor #6 (Ljava/lang/String;)V
  public void addClock(java.lang.String arg0) {
      PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter("FinalTest.xscade", true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L1 = " + arg0 + ";");	
	  outputfile.println("L2 = AddClock1(L1);");
	  outputfile.println("v = L2;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = SubClock(L1, L2);");
	  outputfile.println("v = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = Exclusion(L1, L2);");
	  outputfile.println("v = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = kind;");
	  outputfile.println("L4 = Precedence(L1, L2, L3);");
	  outputfile.println("v = L4;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = " + arg2 + ";");
	  outputfile.println("L4 = " + arg3 + ";");
	  outputfile.println("L5 = kind");
	  outputfile.println("L6 = Precedence2(L1, L2, L3, L4, L5);");
	  outputfile.println("v = L6");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = kind;");
	  outputfile.println("L4 = Causality(L1, L2, L3);");
	  outputfile.println("v = L4;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = " + arg2 + ";");
	  outputfile.println("L4 = " + arg3 + ";");
	  outputfile.println("L5 = kind");
	  outputfile.println("L6 = Causality2(L1, L2, L3, L4, L5);");
	  outputfile.println("v = L6");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = Inf(L1, L2);");
	  outputfile.println("c = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = Sup(L1, L2);");
	  outputfile.println("c = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = Union(L1, L2);");
	  outputfile.println("c = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = Intersection(L1, L2);");
	  outputfile.println("c = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = Minus(L1, L2);");
	  outputfile.println("c = L3;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = " + arg2 + ";");
	  outputfile.println("L4 = " + arg3 + ";");
	  outputfile.println("L5 = " + arg4 + ";");
	  outputfile.println("L6 = Periodic(L1, L2, L3, L4, L5);");
	  outputfile.println("v = L6;");
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
	  outputfile.println("L1 = " + arg0 + ";");
	  outputfile.println("L2 = " + arg1 + ";");
	  outputfile.println("L3 = " + arg2 + ";");
	  outputfile.println("L4 = " + arg3 + ";");
	  outputfile.println("L5 = " + arg4 + ";");
	  outputfile.println("L6 = DelayFor(L1, L2, L3, L4, L5);");
	  outputfile.println("v = L6;");
	  outputfile.close();
  }
}