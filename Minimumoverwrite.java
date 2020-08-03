package InterviewTraining2;

public class Minimumoverwrite{

   // ��С�����Ӵ�
  public List<Integer> findAnagrams(String s, String p) {
         int left = 0;
       int right = 0;
       Map<Character, Integer> needs = new HashMap<>();  //����T�ַ���
       Map<Character, Integer> windows = new HashMap<>(); //ȥ����S�ַ���,�ҵ�T�ַ������е�ֹͣ.
       List<Integer> res = new ArrayList<>();

     //����t�ַ���,�浽needs��
      for(int i = 0; i < p.length(); i++){
          char c = p.charAt(i);
          int count = needs.getOrDefault(c, 0) + 1;
          needs.put(c, count);
      }

      int match = 0; // ��s�����ҵ�������T�ַ���������

      while(right < s.length()){

          char c = s.charAt(right);
          if(needs.containsKey(c)){
              //�ӵ�window������
              int count = windows.getOrDefault(c, 0) + 1;
              windows.put(c, count);
              if(count == needs.get(c)){
                  match++;
              }
          }
            right++;  //���ڼ�������
          

          //˵�������Ѿ�����������t���ַ�,��ͳ�Ƴ���,�����.
          while(match == needs.size()){
               if(right - left == p.length()){
                   res.add(left);
               }
               char mm = s.charAt(left);
               //��ɾ�����ַ��Ƿ�Ϊneeds�������
               if(needs.containsKey(mm)){
               int count = windows.get(mm) - 1;
                windows.put(mm, count);
         //��ɾ���������ַ�֮���Ƿ�������ڲ�������
                  if(needs.get(mm) > count){
                      match--;
                  }
               }
               left++;
          }
      }

        return res;
    }
}