package day20;

import java.util.Arrays;

public class Main {
    //给定一个整数数组，你需要寻找一个连续的子数组，
    // 如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。
    //你找到的子数组应是最短的，请输出它的长度。
    public int findUnsortedSubarray(int[] nums) {
        int [] arr = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            arr[i] = nums[i];
        }
        Arrays.sort(arr);
        int left = 0;
        int right = nums.length-1;
        int min = 0;
        int max = 0;
        //[2, 6, 4, 8, 10, 9, 15]
        //5
        int count = 0;
        while(true){
            if(arr[left] == nums[left]){
                left++;
            }
            if(arr[right] == nums[right]){
                right--;
            }
            if(arr[left] != nums[left]){
                min = left;
                count++;
            }
            if(arr[right] != nums[right]){
                max = right;
                count++;
            }
            if(count== 2){
                break;
            }
        }

        return max - min;
    }
}
