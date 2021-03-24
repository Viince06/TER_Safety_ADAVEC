package xml;

import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.transform.OutputKeys;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import org.w3c.dom.Attr;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import java.io.File;

public class InputCanvas {
	
	public static void test() {
		try {
	         DocumentBuilderFactory dbFactory =
	         DocumentBuilderFactory.newInstance();
	         DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
	         Document doc = dBuilder.newDocument();
	         
	         Element pragmas = doc.createElement("pragmas"); 
	         doc.appendChild(pragmas);
	         
	         Element operator = doc.createElement("ed:Operator"); 
	         pragmas.appendChild(operator);
	         Attr attrO1 = doc.createAttribute("oid");
	         attrO1.setValue("!ed/5013/C88/2DC0/605357af165c");
	         Attr attrO2 = doc.createAttribute("xmlns");
	         attrO2.setValue("http://www.esterel-technologies.com/ns/scade/pragmas/editor/7");
	         operator.setAttributeNode(attrO1);
	         operator.setAttributeNode(attrO2);
	         
	         Element diagrams = doc.createElement("diagrams");
	         operator.appendChild(diagrams);
	         
	         Element netDiagram = doc.createElement("NetDiagram");
	         diagrams.appendChild(netDiagram);         
	         Attr attrND1 = doc.createAttribute("name");
	         attrND1.setValue("Operator1_1");	
	         Attr attrND2 = doc.createAttribute("landscape");
	         attrND2.setValue("true");	
	         Attr attrND3 = doc.createAttribute("format");
	         attrND3.setValue("A4 (210 297)");	
	         Attr attrND4 = doc.createAttribute("oid");
	         attrND4.setValue("!ed/5014/C88/2DC0/605357af6129");
	         netDiagram.setAttributeNode(attrND1);
	         netDiagram.setAttributeNode(attrND2);
	         netDiagram.setAttributeNode(attrND3);
	         netDiagram.setAttributeNode(attrND4);
	         
	         
	         // write the content into xml file
	         TransformerFactory transformerFactory = TransformerFactory.newInstance();
	         Transformer transformer = transformerFactory.newTransformer();
	         transformer.setOutputProperty(OutputKeys.INDENT, "yes");
	         
	         DOMSource source = new DOMSource(doc);
	         StreamResult result = new StreamResult(new File("CANtest.xml"));
	         transformer.transform(source, result);
	         
	         // Output to console for testing
	         StreamResult consoleResult = new StreamResult(System.out);
	         transformer.transform(source, consoleResult);
	      } catch (Exception e) {
	         e.printStackTrace();
	      }
	}

   public static void main(String argv[]) {
	   test();
      
   }

}
