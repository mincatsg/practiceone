import java.util.Arrays;

public class array {
    public static void main(String args[]){
        int [] arr = {9, 5, 2, 7, 8, 9};
        System.out.println("newarr:  " +Arrays.toString(Newarr(arr)));
        System.out.println("newarr:  " +Arrays.toString(Sort(arr)));
        System.out.println("newarr:  " +Arrays.toString(reverse(arr)));
    }
    public static int[] Newarr(int[] arr){
        int [] newarr =Arrays.copyOf(arr, arr.length);
        return newarr;
    }
    public static int[] Sort(int[] arr){  //升序
        int temp;
        for(int i = 0; i < arr.length - i; i++){
            for(int j = 0; j < arr.length - i - 1 ; j++){
                        if(arr[j] > arr[j + 1]){
                            temp = arr[j];
                             arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                }
            }
        }
        return arr;
    }
    public static int[] reverse(int[] arr) {
        int left = 0;
        int right = arr.length - 1;
        while (left < right) {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
        return arr;
    }
}
