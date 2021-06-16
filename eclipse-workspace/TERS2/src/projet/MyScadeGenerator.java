package projet;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map.Entry;
import java.util.Set;

public class MyScadeGenerator implements fr.kairos.timesquare.ccsl.ISimpleSpecification {
	
	int countL;
	int countO;
	String kind = "function";
	PrintWriter outputfile;
	PrintWriter bodyOutputfile;
	LinkedHashMap<String, String> inputHM = new LinkedHashMap<>();
	LinkedHashMap<String, String> outputHM = new LinkedHashMap<>();
	LinkedHashMap<String, String> localHM = new LinkedHashMap<>();
	
	
public MyScadeGenerator(File destinationFile, File bodyDestinationFile) throws IOException {	
	this.outputfile = new PrintWriter(new BufferedWriter(new FileWriter(destinationFile)));
	this.bodyOutputfile = new PrintWriter(new BufferedWriter(new FileWriter(bodyDestinationFile)));
}


public void close() {
	outputfile.close();
	bodyOutputfile.close();
}


public void updatingPackage(String name) throws IOException {
	boolean allow = true;
    File file = new File("..\\..\\SCADE\\ScadeTERS2\\ScadeTERS2\\Generated.xscade"); 
    File temp = File.createTempFile("temp-file-name", ".tmp");
    BufferedReader br = new BufferedReader(new FileReader(file));
    BufferedReader br2 = new BufferedReader(new FileReader(file));
    PrintWriter pw =  new PrintWriter(new FileWriter(temp));
    String line;
    int lineCount = 0;
    while ((line = br.readLine()) != null) {
        if (line.contains(name)) {
        	allow = false;
        }
    }
    while ((line = br2.readLine()) != null) {
        pw.println(line);
        if(lineCount==4 && allow){
            pw.println("\t\t\t\t<Operator name=\"" + name + "\" href=\"Generated\\" + name + ".xscade\"/>");
        }
        lineCount++;
    }
    br.close();
    br2.close();
    pw.close();
    file.delete();
    temp.renameTo(file);
}


public void generateXMLFile(String name) throws IOException {
	startXMLFile(name);
	inputXMLFile(inputHM);
	outputXMLFile(outputHM);
	localXMLFile(localHM);
	endXMLFile(name);
	updatingPackage(name);
}



public void startXMLFile(String name) {
	outputfile.println("<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
	outputfile.println("<Operator xmlns=\"http://www.esterel-technologies.com/ns/scade/6\" xmlns:ed=\"http://www.esterel-technologies.com/ns/scade/pragmas/editor/7\" "
			+ "xmlns:kcg=\"http://www.esterel-technologies.com/ns/scade/pragmas/codegen/3\" kind=\"" + kind + "\" name=\"" + name + "\">");
}


public void inputXMLFile(LinkedHashMap<String, String> inputHM) {
	  outputfile.println("\t<inputs>");
	  for(Entry<String, String> i : inputHM.entrySet()) {
		  outputfile.println("\t\t<Variable name=\"" + i.getKey() + "\">");
		  outputfile.println("\t\t\t<type>");
		  outputfile.println("\t\t\t\t<NamedType>");
		  outputfile.println("\t\t\t\t\t<type>");
		  outputfile.println("\t\t\t\t\t\t<TypeRef name=\"" + i.getValue() + "\"/>");
		  outputfile.println("\t\t\t\t\t</type>");
		  outputfile.println("\t\t\t\t</NamedType>");
		  outputfile.println("\t\t\t</type>");
		  outputfile.println("\t\t</Variable>");
	  }
	  outputfile.println("\t</inputs>");
}

public void outputXMLFile(LinkedHashMap<String, String> outputHM) {
	outputfile.println("\t<outputs>");
	for(Entry<String, String> o : outputHM.entrySet()) {
		outputfile.println("\t\t<Variable name=\"" + o.getKey() + "\">");
		outputfile.println("\t\t\t<type>");
		outputfile.println("\t\t\t\t<NamedType>");
		outputfile.println("\t\t\t\t\t<type>");
		outputfile.println("\t\t\t\t\t\t<TypeRef name=\"" + o.getValue() + "\"/>");
		outputfile.println("\t\t\t\t\t</type>");
		outputfile.println("\t\t\t\t</NamedType>");
		outputfile.println("\t\t\t</type>");
		outputfile.println("\t\t</Variable>");
	}
	outputfile.println("\t</outputs>");
}

public void localXMLFile(LinkedHashMap<String, String> localHM) {
	  outputfile.println("\t<locals>");
	  for(Entry<String, String> l : localHM.entrySet()) {
		  outputfile.println("\t\t<Variable name=\"" + l.getKey() + "\">");
		  outputfile.println("\t\t\t<type>");
		  outputfile.println("\t\t\t\t<NamedType>");
		  outputfile.println("\t\t\t\t\t<type>");
		  outputfile.println("\t\t\t\t\t\t<TypeRef name=\"" + l.getValue() + "\"/>");
		  outputfile.println("\t\t\t\t\t</type>");
		  outputfile.println("\t\t\t\t</NamedType>");
		  outputfile.println("\t\t\t</type>");
		  outputfile.println("\t\t</Variable>");
	  }
	  outputfile.println("\t</locals>");
}


public void endXMLFile(String name) {
	outputfile.println("\t<pragmas>");
	outputfile.println("\t\t<ed:Operator>");
	outputfile.println("\t\t\t<diagrams>");
	outputfile.println("\t\t\t\t<TextDiagram name=\"" + name + "_1\" landscape=\"false\" format=\"A4 (210 297)\"/>");
	outputfile.println("\t\t\t</diagrams>");
	outputfile.println("\t\t</ed:Operator>");
	outputfile.println("\t</pragmas>");
	outputfile.println("</Operator>");
}


// Method descriptor #6 (Ljava/lang/String;)V
  public void addClock(java.lang.String arg0) {
		inputHM.put(arg0, "ClockStatus");
  }
  
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void subclock(java.lang.String arg0, java.lang.String arg1){
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::SubClock(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "bool");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "bool");
  }
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void exclusion(java.lang.String arg0, java.lang.String arg1){
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = "
	  		+ "MSG::Exclusion(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "bool");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "bool");
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void precedence(java.lang.String arg0, java.lang.String arg1){
	  kind = "node";
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::Precedence(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "bool");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "bool");
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void precedence(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  kind = "node";
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg2 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg3 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::Precedence2(L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "bool");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "bool");
  }
  
  
  // Method descriptor #8 (Ljava/lang/String;Ljava/lang/String;)V
  public void causality(java.lang.String arg0, java.lang.String arg1){
	  kind = "node";
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::Causality(L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "bool");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "bool");
  }
  
  
  // Method descriptor #11 (Ljava/lang/String;Ljava/lang/String;II)V
  public void causality(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3){
	  kind = "node";
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg2 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg3 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::Causality2(L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "bool");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "bool");
  }
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void inf(java.lang.String arg0, java.lang.String... arg1){
	  kind = "node";
	  LinkedList<String> convarg1 = new LinkedList<>(Arrays.asList(arg1));
	  LinkedList<String> newList = new LinkedList<>();
	  infRec(convarg1, newList, false);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Inf(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newInf(arg0, newList);
	  }
  }
  
  private void infRec(List<String> rec, List<String> newList, boolean many) {	
	  int n = rec.size();
	  if (n == 1) { 
		  if (!many) {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else if (n == 2) {
		  if (many) {
			  bodyOutputfile.println("L" + ++countL + " = MSG::Inf(" + rec.get(0) + ", " + rec.get(1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  } else {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(1) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = MSG::Inf(L" + (countL - 2) + ", L" + (countL - 1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else {
		  List<String> left = rec.subList(0, n/2);
		  List<String> right = rec.subList(n/2, n);
	  	  infRec(left, newList, many);
	  	infRec(right, newList, many);
	  }
  }
  
  private void newInf(java.lang.String arg0, LinkedList<String> arg1){
	  LinkedList<String> newList = new LinkedList<>();
	  infRec(arg1, newList, true);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  localHM.put("L" + countL, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Inf(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newInf(arg0, newList);
	  }
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void sup(java.lang.String arg0, java.lang.String... arg1){
	  kind = "node";
	  LinkedList<String> convarg1 = new LinkedList<>(Arrays.asList(arg1));
	  LinkedList<String> newList = new LinkedList<>();
	  supRec(convarg1, newList, false);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Sup(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newSup(arg0, newList);
	  }
  }
  
  private void supRec(List<String> rec, List<String> newList, boolean many) {	
	  int n = rec.size();
	  if (n == 1) { 
		  if (!many) {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else if (n == 2) {
		  if (many) {
			  bodyOutputfile.println("L" + ++countL + " = MSG::Sup(" + rec.get(0) + ", " + rec.get(1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  } else {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(1) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = MSG::Sup(L" + (countL - 2) + ", L" + (countL - 1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else {
		  List<String> left = rec.subList(0, n/2);
		  List<String> right = rec.subList(n/2, n);
	  	  supRec(left, newList, many);
	  	  supRec(right, newList, many);
	  }
  }

  private void newSup(java.lang.String arg0, LinkedList<String> arg1){
	  LinkedList<String> newList = new LinkedList<>();
	  supRec(arg1, newList, true);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  localHM.put("L" + countL, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Sup(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newSup(arg0, newList);
	  }
  }
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void union(java.lang.String arg0, java.lang.String... arg1){
	  LinkedList<String> convarg1 = new LinkedList<>(Arrays.asList(arg1));
	  LinkedList<String> newList = new LinkedList<>();
	  unionRec(convarg1, newList, false);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Union(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newUnion(arg0, newList);
	  }
  }
  
  private void unionRec(List<String> rec, List<String> newList, boolean many) {	
	  int n = rec.size();
	  if (n == 1) { 
		  if (!many) {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else if (n == 2) {
		  if (many) {
			  bodyOutputfile.println("L" + ++countL + " = MSG::Union(" + rec.get(0) + ", " + rec.get(1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  } else {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(1) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = MSG::Union(L" + (countL - 2) + ", L" + (countL - 1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else {
		  List<String> left = rec.subList(0, n/2);
		  List<String> right = rec.subList(n/2, n);
	  	  unionRec(left, newList, many);
	  	  unionRec(right, newList, many);
	  }
  }
  
  private void newUnion(java.lang.String arg0, LinkedList<String> arg1){
	  LinkedList<String> newList = new LinkedList<>();
	  unionRec(arg1, newList, true);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  localHM.put("L" + countL, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Union(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newUnion(arg0, newList);
	  }
  }
  
  
 
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void intersection(java.lang.String arg0, java.lang.String... arg1){
	  LinkedList<String> convarg1 = new LinkedList<>(Arrays.asList(arg1));
	  LinkedList<String> newList = new LinkedList<>();
	  interRec(convarg1, newList, false);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Intersection(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newIntersection(arg0, newList);
	  }
  }

  private void interRec(List<String> rec, List<String> newList, boolean many) {	
	  int n = rec.size();
	  if (n == 1) { 
		  if (!many) {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else if (n == 2) {
		  if (many) {
			  bodyOutputfile.println("L" + ++countL + " = MSG::Intersection(" + rec.get(0) + ", " + rec.get(1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  } else {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(1) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = MSG::Intersection(L" + (countL - 2) + ", L" + (countL - 1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else {
		  List<String> left = rec.subList(0, n/2);
		  List<String> right = rec.subList(n/2, n);
		  interRec(left, newList, many);
		  interRec(right, newList, many);
	  }
  }
  
  private void newIntersection(java.lang.String arg0, LinkedList<String> arg1){
	  LinkedList<String> newList = new LinkedList<>();
	  interRec(arg1, newList, true);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  localHM.put("L" + countL, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Intersection(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newIntersection(arg0, newList);
	  }
  }
  
  
  // Method descriptor #14 (Ljava/lang/String;[Ljava/lang/String;)V
  public void minus(java.lang.String arg0, java.lang.String... arg1){
	  LinkedList<String> convarg1 = new LinkedList<>(Arrays.asList(arg1));
	  LinkedList<String> newList = new LinkedList<>();
	  minusRec(convarg1, newList, false);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Minus(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newMinus(arg0, newList);
	  }
  }
  
  private void minusRec(List<String> rec, List<String> newList, boolean many) {	
	  int n = rec.size();
	  if (n == 1) { 
		  if (!many) {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else if (n == 2) {
		  if (many) {
			  bodyOutputfile.println("L" + ++countL + " = MSG::Minus(" + rec.get(0) + ", " + rec.get(1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  } else {
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(0) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = " + rec.get(1) + ";");
			  localHM.put("L" + countL, "ClockStatus");
			  
			  bodyOutputfile.println("L" + ++countL + " = MSG::Minus(L" + (countL - 2) + ", L" + (countL - 1) + ");");
			  localHM.put("L" + countL, "ClockStatus");
			  newList.add("L" + countL);
		  }
	  } else {
		  List<String> left = rec.subList(0, n/2);
		  List<String> right = rec.subList(n/2, n);
		  minusRec(left, newList, many);
		  minusRec(right, newList, many);
	  }
  }
  
  private void newMinus(java.lang.String arg0, LinkedList<String> arg1){
	  LinkedList<String> newList = new LinkedList<>();
	  minusRec(arg1, newList, true);
	  if (newList.size() == 1) {
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  localHM.put("L" + countL, "ClockStatus");
	  }
	  else if (newList.size() == 2) {
		  bodyOutputfile.println("L" + ++countL + " = MSG::Minus(" + newList.get(0) + ", " + newList.get(1) + ");");
		  localHM.put("L" + countL, "ClockStatus");
		  
		  bodyOutputfile.println(arg0 + " = L" + countL + ";");
		  outputHM.put(arg0, "ClockStatus");
	  } else {
		  newMinus(arg0, newList);
	  }
  }
  
  
  // Method descriptor #20 (Ljava/lang/String;Ljava/lang/String;III)V
  public void periodic(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, int arg4){
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg2 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg3 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg4 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::Periodic(L" + (countL - 5) + ", L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "ClockStatus");
  }
  
  
  // Method descriptor #22 (Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V
  public void delayFor(java.lang.String arg0, java.lang.String arg1, int arg2, int arg3, java.lang.String arg4){
	  bodyOutputfile.println("L" + ++countL + " = " + arg0 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg1 + ";");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg2 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg3 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = " + arg4 + ";");
	  localHM.put("L" + countL, "int32");
	  
	  bodyOutputfile.println("L" + ++countL + " = MSG::DelayFor(L" + (countL - 5) + ", L" + (countL - 4) + ", L" + (countL - 3) + ", L" + (countL - 2) + ", L" + (countL - 1) + ");");
	  localHM.put("L" + countL, "ClockStatus");
	  
	  bodyOutputfile.println("O" + ++countO + " = L" + countL + ";");
	  outputHM.put("O" + countO, "ClockStatus");
  }
  
}