package InterviewTraining2;
import java.util.*;

public class AddBinaryTree {
//    �ǵݹ���ʶ��������������

    class TreeNode {
     int val;
      TreeNode left;
      TreeNode right;
      TreeNode(int x) { val = x; }
  }

 public  void inOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        // 1. ����һ��ջ
        Stack<TreeNode> stack = new Stack<>();
        // 2. ����һ�� cur ������ root ����
        TreeNode cur = root;
        while (true) {
            // 3. ֻҪ cur �����Ľڵ�� null, ����ջ, cur = cur.left
            while (cur != null) {
                stack.push(cur);
                cur = cur.left;
            }
            // 4. �� cur ���� null ��, �ͳ�ջһ��Ԫ��, �������Ԫ��
            if (stack.isEmpty()) {
                // ����������
                break;
            }
            TreeNode top = stack.pop();
            System.out.println(top.val);
            // 5. cur ָ��ǰԪ�ص�������
            cur = top.right;
        }
    }

}
