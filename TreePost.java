package InterviewTraining2;
import java.util.*;

public class AddBinaryTree {
//    �ǵݹ���ʶ������ĺ������

    class TreeNode {
     int val;
      TreeNode left;
      TreeNode right;
      TreeNode(int x) { val = x; }
  }

   public  void postOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        // 1. ����һ��ջ
        Stack<TreeNode> stack = new Stack<>();
        // 2. ����һ�� cur �� root ����
        TreeNode cur = root;
        // prev ��Զָ���ϴη��ʵĽڵ�
        TreeNode prev = null;
        while (true) {
            // 3. ���� cur ѭ��������, ����ýڵ㲻Ϊ null, ��ջ
            while (cur != null) {
                stack.push(cur);
                cur = cur.left;
            }
            // 4. ��� cur Ϊ null, ȡջ��Ԫ��, ׼������.
            //    Ҫ�� top �ܷ���, �� pop, ���򻹵���ջ���һ��
            if (stack.isEmpty()) {
                // ��������
                break;
            }
            TreeNode top = stack.peek();
            // 5. �����ܲ��ܷ���ջ��Ԫ��, ���������:
            //  a) ջ��Ԫ��û��������, �Ϳ��Է���
            //  b) ջ��Ԫ�ص��������ո��Ѿ����ʹ�, Ҳ���Է���
            if (top.right == null || prev == top.right) {
                // �������˵�����Է��� top �ڵ�
                System.out.print(top.val);
                stack.pop();
                // ͬʱҪ���� prev
                prev = top;
            } else {
                // ��ʱ����ڵ㻹���ܷ���
                // 6. cur ָ�� ջ��Ԫ�ص� ������,
                cur = top.right;
            }
        }
    }
}
