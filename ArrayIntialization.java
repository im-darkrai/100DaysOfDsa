public class ArrayIntialization {
    public static void main(String[] args) {
        int[] arr = new int [25];
        for(int i =0; i < arr.length; i++){
            arr[i]= i+1;
            System.out.print(arr[i] + " ");
           
        }
        System.out.print("\n Array length " + arr.length);
    }
}
