package xmlOld;

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

public class InputCreation {
	
	public static void test() {
		try {
	         DocumentBuilderFactory dbFactory =
	         DocumentBuilderFactory.newInstance();
	         DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
	         Document doc = dBuilder.newDocument();
	         
	         Element variable = doc.createElement("Variable"); //Balise "Variable" avec le nom de l'input.
	         doc.appendChild(variable);
	         Attr attr = doc.createAttribute("name");
	         attr.setValue("Input1");
	         variable.setAttributeNode(attr);
	         
	         Element type = doc.createElement("type"); //Balise "Type" juste en dessous.
	         variable.appendChild(type);
	         
	         Element namedType = doc.createElement("NamedType"); //Balise "NamedType" juste en dessous.
	         type.appendChild(namedType);
	         
	         Element type2 = doc.createElement("Type"); //Balise "Type" juste en dessous.
	         namedType.appendChild(type2);
	         
	         
	         Element typeRef = doc.createElement("TypeRef");  //Balise "TypeRef" juste en dessous...
	         type2.appendChild(typeRef);         
	         Attr attr2 = doc.createAttribute("name");
	         attr2.setValue("bool");						 //...qui donne le type de la Variable.
	         typeRef.setAttributeNode(attr2);
	         
	         
	         Element pragmas = doc.createElement("pragmas"); //Pas compris ce que c'est.
	         variable.appendChild(pragmas);
	         
	         Element edvariable = doc.createElement("ed:Variable");
	         pragmas.appendChild(edvariable);
	         Attr attr3 = doc.createAttribute("oid");
	         attr3.setValue("!ed/f069/2D74/2964/605337673343"); 
	         edvariable.setAttributeNode(attr3);
	         
	         
	         
	         // write the content into xml file
	         TransformerFactory transformerFactory = TransformerFactory.newInstance();
	         Transformer transformer = transformerFactory.newTransformer();
	         transformer.setOutputProperty(OutputKeys.INDENT, "yes");
	         
	         DOMSource source = new DOMSource(doc);
	         StreamResult result = new StreamResult(new File("CREtest.xml"));
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