package package1213;

import java.util.HashMap;

public class MainTest {
    public String getHint(String secret, String guess) {
        int a = 0;
        int b = 0;
        int count = 0;
        HashMap<Character,Integer> hashMap = new HashMap<>();
        for(int i = 0; i < secret.length(); i++){
            char bull = secret.charAt(i);
            if(bull == guess.charAt(i)){
                a++;
            } else{
                hashMap.put(secret.charAt(i),i);
                count++;
            }
        }
        for(int j = 0; j < guess.length(); j++){
            char cow = guess.charAt(j);
            if(hashMap.containsKey(cow)){
                b++;
            }
        }
        return a+"A"+b+"B";
    }

}
