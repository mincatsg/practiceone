package package1212;

import java.io.IOException;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class TcpServlet {

    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(10000);

        Socket s =  ss.accept();

        InputStream is = s.getInputStream();

        byte[] bytes = new byte[1024];
        int len = is.read(bytes);


        System.out.println(new String(bytes,0,len));

    }
}
