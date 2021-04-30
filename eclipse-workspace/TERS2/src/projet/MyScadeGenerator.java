package projet;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class MyScadeGenerator implements fr.kairos.timesquare.ccsl.ISimpleSpecification {
	
	int countL;
	int countO;
	String destinationFile = "ChangeModes.xscade";

  // Method descriptor #6 (Ljava/lang/String;)V
  public void addClock(java.lang.String arg0) {
      PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = AddClock1(L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
	  
	  //stockList.add("L1 = " + arg0 + ";");
	  //stockList.add("L2 = AddClock1(L1);");
	  //stockList.add("v = L2;");
  }
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void subclock(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = SubClock(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void exclusion(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = Exclusion(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void precedence(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = kind;");
	  outputfile.println("L" + ++countL + " = Precedence(L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void precedence(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = " + arg2 + ";");
	  outputfile.println("L" + ++countL + " = " + arg3 + ";");
	  outputfile.println("L" + ++countL + " = kind;");
	  outputfile.println("L" + ++countL + " = Precedence2(L" + (countL - 5) + ", L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void causality(java.lang.String arg0, java.lang.String arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = kind;");
	  outputfile.println("L" + ++countL + " = Casuality(L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void causality(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = " + arg2 + ";");
	  outputfile.println("L" + ++countL + " = " + arg3 + ";");
	  outputfile.println("L" + ++countL + " = kind;");
	  outputfile.println("L" + ++countL + " = Causality2(L" + (countL - 5) + ", L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void inf(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }	  
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = Inf(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void sup(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }	  
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = Sup(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void union(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = Union(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void intersection(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = Intersection(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void minus(java.lang.String arg0, java.lang.String... arg1){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = Minus(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  // Method descriptor #20 (Ljava/lang/String;Ljava/lang/String;III)V
  public void periodic(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, int arg4){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = " + arg2 + ";");
	  outputfile.println("L" + ++countL + " = " + arg3 + ";");
	  outputfile.println("L" + ++countL + " = kind;");
	  outputfile.println("L" + ++countL + " = Periodic(L" + (countL - 5) + ", L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
  
  
  // Method descriptor #22 (Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V
  public void delayFor(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, java.lang.String arg4){
	  PrintWriter outputfile = null;
	  try {
		  outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile, true)));
		    } catch (IOException e) {
		            e.printStackTrace();
		    }
	  outputfile.println("L" + ++countL + " = " + arg0 + ";");
	  outputfile.println("L" + ++countL + " = " + arg1 + ";");
	  outputfile.println("L" + ++countL + " = " + arg2 + ";");
	  outputfile.println("L" + ++countL + " = " + arg3 + ";");
	  outputfile.println("L" + ++countL + " = kind;");
	  outputfile.println("L" + ++countL + " = DelayFor(L" + (countL - 5) + ", L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  outputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputfile.close();
  }
 
}