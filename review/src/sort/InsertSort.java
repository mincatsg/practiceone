package sort;

public class InsertSort {

    //插入排序
    public static void insertSort(int []array){
        for(int i = 1; i < array.length; i++){
            int v = array[i];
            int j = i-1;
            for(;j >=0 && array[j]>v;j--){
                array[j+1] = array[j];
            }
            array[j+1] = v;
        }
    }

    //希尔排序
    public static void shellSort(int []array){
        int grp = array.length;
        while(grp >= 1){
            shellSortHelper(array,grp);
            grp /= 2;
        }

    }
    private static void shellSortHelper(int []array, int grp){
        for(int i =1; i< array.length; i++){
            int v = array[i];
            int j = i - grp;
            for(;j>= 0 && array[j] > v;j-=grp){
                array[j+grp] = array[j];
            }
            array[j+grp] = v;
        }
    }

    public static void selectSort(int []array){
        for(int i = 0; i < array.length - 1; i++){
            int max = 0;
            for(int j = 1; j < array.length - i;j++){
                if(array[j] > array[max]){
                    max = j;
                }
            }
            int tem = array[max];
            array[max] = array[array.length - i -1];
            array[array.length - i -1] = tem;
        }
    }
    public static void main(String[] args) {
        int []array ={2,1,8,9,7,5,6};
        //insertSort(array);
        //shellSort(array);
        selectSort(array);
        for(int a : array){
            System.out.print(a+" ");
        }

    }
}
