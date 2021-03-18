package projet;

public class MyScadeGenerator implements fr.kairos.timesquare.ccsl.ISimpleSpecification {

	  // Method descriptor #6 (Ljava/lang/String;)V
	  public void addClock(java.lang.String arg0) {
		  System.out.println("CLOCK ADDED: " + arg0);
	  }
	  
	  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
	  public void subclock(java.lang.String arg0, java.lang.String arg1) {
		  System.out.println(arg0 + " IS SUBCLOCK OF " + arg1);
	  }
	  
	  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
	  public void exclusion(java.lang.String arg0, java.lang.String arg1) {
		  System.out.println(arg0 + " EXCLUDES " + arg1);
	  }
	  
	  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
	  public void precedence(java.lang.String arg0, java.lang.String arg1) {
		  System.out.println(arg0 + " IS A PRECEDENCE OF " + arg1);
	  }
	  
	  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
	  public void precedence(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3) {
		  
	  }
	  
	  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
	  public void causality(java.lang.String arg0, java.lang.String arg1) {
		  
	  }
	  
	  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
	  public void causality(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3) {
		  
	  }
	  
	  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
	  public void inf(java.lang.String arg0, java.lang.String... arg1) {
		  
	  }
	  
	  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
	  public void sup(java.lang.String arg0, java.lang.String... arg1) {
		  
	  }
	  
	  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
	  public void union(java.lang.String arg0, java.lang.String... arg1) {
		  
	  }
	  
	  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
	  public void intersection(java.lang.String arg0, java.lang.String... arg1) {
		  
	  }
	  
	  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
	  public void minus(java.lang.String arg0, java.lang.String... arg1) {
		  
	  }
	  
	  // Method descriptor #20 (Ljava/lang/String;Ljava/lang/String;III)V
	  public void periodic(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, int arg4) {
		  
	  }
	  
	  // Method descriptor #22 (Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V
	  public void delayFor(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, java.lang.String arg4) {
		  
	  }
	  
	  
	}

