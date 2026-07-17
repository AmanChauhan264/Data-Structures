import java.util.*;
public class HashMap1 {

	public static void main(String[] args) {
		HashMap<String, Integer> map = new HashMap<>();
		
		//Insertion
		map.put("india", 120);
		map.put("russia", 100);
		map.put("argentina", 80);
		// System.out.println(map); 
		map.put("argentina", 90);
		// System.out.println(map); 
		
		// search
		if(map.containsKey("india")){
			//System.out.println("Exists"); 
		}else{
			//System.out.println("does not Exists"); 
		}	
         // System.out.println(map.get("argentina")); 
        //   System.out.println(map.get("brazil")); 

		int arr[] = {1, 2, 3, 4};
		for(int val: arr){
		//	System.out.print(val + " ");
		}

		// Iteration

		for(Map.Entry<String, Integer> e: map.entrySet()){
            //    System.out.print(e.getKey() + " ");
            //    System.out.println(e.getValue());
		}
		Set<String> keys = map.keySet();
		for(String key: keys){
			//System.out.println(key + " " + map.get(key));
		}

		//remove
		map.remove("argentina");
		System.out.println(map);
	}

}
