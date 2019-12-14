package string;

public class Mystring {
    public int compareTo(String str1, String str2){
        int len = str1.length()>str2.length()?str2.length():str1.length();
        for(int i = 0; i < len; i++){
            if(str1.charAt(i) > str2.charAt(i)){
                return str1.charAt(i) - str2.charAt(i);
            } else if(str1.charAt(i) < str2.charAt(i)){
                return str1.charAt(i) - str2.charAt(i);
            }
        }
        if(str1.length() == str2.length()){
            return 0;
        }
        if(len == str1.length()){
            return -1;
        } else {
            return 1;
        }
    }
}
