package 学院宿舍管理系统;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;

public class Gui {
    Login login = new Login();

    public void Login_Frame() {
        JFrame frame = new JFrame("登录窗口");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLocationRelativeTo(null); // 将窗口置于屏幕中央

        JPanel panel = new JPanel();
        panel.setLayout(new GridBagLayout());

        // 账号标签和文本框
        JLabel accountLabel = new JLabel("账号:");
        JTextField accountTextField = new JTextField(15);
        // 密码标签和文本框
        JLabel passwordLabel = new JLabel("密码:");
        JPasswordField passwordField = new JPasswordField(15);

        // 登录按钮
        JButton loginButton = new JButton("登录");
        loginButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String frame_name = accountTextField.getText();
                String frame_password = String.valueOf(passwordField.getPassword());
                try {
                    login.password_verify(frame_name, frame_password);
                } catch (IOException | ClassNotFoundException ex) {
                    throw new RuntimeException(ex);
                }
            }
        });
        // 注册按钮
        JButton registerButton = new JButton("注册");
        registerButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String frame_new_name = accountTextField.getText();
                String frame_new_password = String.valueOf(passwordField.getPassword());
                try {
                    login.user_register(frame_new_name, frame_new_password);
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
            }
        });

        // 将组件添加到面板中
        GridBagConstraints constraints = new GridBagConstraints();
        constraints.gridx = 0;
        constraints.gridy = 0;
        constraints.anchor = GridBagConstraints.LINE_END;
        constraints.insets = new Insets(5, 5, 5, 5);
        panel.add(accountLabel, constraints);

        constraints.gridx = 1;
        constraints.gridy = 0;
        constraints.anchor = GridBagConstraints.LINE_START;
        panel.add(accountTextField, constraints);

        constraints.gridx = 0;
        constraints.gridy = 1;
        constraints.anchor = GridBagConstraints.LINE_END;
        panel.add(passwordLabel, constraints);

        constraints.gridx = 1;
        constraints.gridy = 1;
        constraints.anchor = GridBagConstraints.LINE_START;
        panel.add(passwordField, constraints);

        constraints.gridx = 0;
        constraints.gridy = 2;
        constraints.anchor = GridBagConstraints.LINE_END;
        constraints.insets = new Insets(20, 5, 5, 5); // 调整上方间距
        panel.add(loginButton, constraints);

        constraints.gridx = 1;
        constraints.gridy = 2;
        constraints.anchor = GridBagConstraints.LINE_END;
        constraints.insets = new Insets(20, 5, 5, 5); // 调整上方间距
        panel.add(registerButton, constraints);

        frame.add(panel);
        frame.setVisible(true);

    }
}
