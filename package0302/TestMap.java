package package1116;

import java.util.HashMap;
import java.util.Map;

public class TestMap {
    public static void main(String[] args) {
        // 1. 创建 map 对象, key 是 String 类型, value 也是 String
        // 类型
        Map<String, String> map = new HashMap<>();
        // 2. 插入若干个键值对
        map.put("小李广", "花荣");
        map.put("及时雨", "宋江");
        map.put("黑旋风", "李逵");
        map.put("黑旋风", "李鬼");
        // 3. 根据 key 来取 value (Map 的 核心操作)
        String value = map.get("及时");
        String value2 = map.getOrDefault("及时", "未知");
        // System.out.println(value2);
        // 4. 打印所有的 key
        for (String key : map.keySet()) {
            System.out.println(key);
        }
        // 5. 打印所有的 value
        for (String v : map.values()) {
            System.out.println(v);
        }
        // 6. 打印所有的键值对
        //    entry 含义是 "条目", 每个键值对就是一个 entry
        for (Map.Entry<String, String> entry : map.entrySet()) {
            System.out.println(entry.getKey() + ":" + entry.getValue());
        }
    }
}
