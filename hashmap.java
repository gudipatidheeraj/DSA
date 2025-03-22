import java.util.HashMap;

public class hashmap {
    public static void main(String[] args) {
        HashMap<Integer,Integer> hashmap = new HashMap<>();
        int arr[] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
        for(int num : arr) {
            hashmap.put(num,hashmap.getOrDefault(num,0) + 1);
        }
        // System.out.print(hashmap);
        // System.out.println(hashmap.keySet());
        // if(hashmap.containsKey(5)) {
        //     System.out.println("Key is present");
        // }
        // else {
        //     System.out.println("Key is not present");
        // }

        int maxfreq = 0;
        int finalfreq = 0;
        for(int newnum : hashmap.keySet()) {
            if(hashmap.get(newnum) > maxfreq) {
                maxfreq = hashmap.get(newnum);
                finalfreq = newnum;
            }
        }
        System.out.println(maxfreq);
        System.out.println(finalfreq);
    }
}