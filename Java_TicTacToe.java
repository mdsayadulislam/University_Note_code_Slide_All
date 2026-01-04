
package Java_TicTacToe;


//import javax.swing.JFrame;
import javax.swing.*;
import java.awt.Color;
import javax.swing.JFrame;
import javax.swing.JOptionPane;




/**
 *
 * @author ALPHA TECH
 */
public class Java_TicTacToe extends javax.swing.JFrame {
    

    private String startgame="X";
    private int xcount = 0;
    private int ocount = 0;
    boolean checker;
    
    
    public Java_TicTacToe() {
        initComponents();
    }
    private void gameScore()
    {
        
        jblplayerX.setText(String.valueOf(xcount));
        jblplayerO.setText(String.valueOf(ocount));
    }
     private void choose_a_Player()
{
       
       if(startgame.equalsIgnoreCase("X")) 
       {
           startgame = "O";
       }
       else 
       {
           startgame = "X";
       }
}
     private void enableButtons() {
    jButton1.setEnabled(true);
    jButton2.setEnabled(true);
    jButton3.setEnabled(true);
    jButton4.setEnabled(true);
    jButton5.setEnabled(true);
    jButton6.setEnabled(true);
    jButton7.setEnabled(true);
    jButton8.setEnabled(true);
    jButton9.setEnabled(true);
}
     private void resetGame() {
        // Reset the text on all buttons
        jButton1.setText("");
        jButton2.setText("");
        jButton3.setText("");
        jButton4.setText("");
        jButton5.setText("");
        jButton6.setText("");
        jButton7.setText("");
        jButton8.setText("");
        jButton9.setText("");

        // Get the default button color to reset the highlights
        Color defaultColor = new JButton().getBackground();
        jButton1.setBackground(defaultColor);
        jButton2.setBackground(defaultColor);
        jButton3.setBackground(defaultColor);
        jButton4.setBackground(defaultColor);
        jButton5.setBackground(defaultColor);
        jButton6.setBackground(defaultColor);
        jButton7.setBackground(defaultColor);
        jButton8.setBackground(defaultColor);
        jButton9.setBackground(defaultColor);

        // Re-enable all buttons
        enableButtons();
        
        // Set the starting player back to X for the new round
        startgame = "X";
    }
// Inside the Java_TicTacToe class

private void disableButtons() {
    // Setting all game buttons to be disabled (unclickable)
    jButton1.setEnabled(false);
    jButton2.setEnabled(false);
    jButton3.setEnabled(false);
    jButton4.setEnabled(false);
    jButton5.setEnabled(false);
    jButton6.setEnabled(false);
    jButton7.setEnabled(false);
    jButton8.setEnabled(false);
    jButton9.setEnabled(false);
}
// Inside the Java_TicTacToe class

private void winningGame() {
    String b1 = jButton1.getText();
    String b2 = jButton2.getText();  
    String b3 = jButton3.getText();  
    String b4 = jButton4.getText();  
    String b5 = jButton5.getText();  
    String b6 = jButton6.getText();  
    String b7 = jButton7.getText();  
    String b8 = jButton8.getText();  
    String b9 = jButton9.getText();  

    boolean winnerFound = false;

    // --- PLAYER X WINNING CONDITIONS ---
    if (b1.equals("X") && b2.equals("X") && b3.equals("X")) {
        winnerFound = true;
        jButton1.setBackground(Color.ORANGE);
        jButton2.setBackground(Color.ORANGE);
        jButton3.setBackground(Color.ORANGE);
    } else if (b4.equals("X") && b5.equals("X") && b6.equals("X")) {
        winnerFound = true;
        jButton4.setBackground(Color.ORANGE);
        jButton5.setBackground(Color.ORANGE);
        jButton6.setBackground(Color.ORANGE);
    } else if (b7.equals("X") && b8.equals("X") && b9.equals("X")) {
        winnerFound = true;
        jButton7.setBackground(Color.ORANGE);
        jButton8.setBackground(Color.ORANGE);
        jButton9.setBackground(Color.ORANGE);
    } else if (b1.equals("X") && b4.equals("X") && b7.equals("X")) {
        winnerFound = true;
        jButton1.setBackground(Color.ORANGE);
        jButton4.setBackground(Color.ORANGE);
        jButton7.setBackground(Color.ORANGE);
    } else if (b2.equals("X") && b5.equals("X") && b8.equals("X")) {
        winnerFound = true;
        jButton2.setBackground(Color.ORANGE);
        jButton5.setBackground(Color.ORANGE);
        jButton8.setBackground(Color.ORANGE);
    } else if (b3.equals("X") && b6.equals("X") && b9.equals("X")) {
        winnerFound = true;
        jButton3.setBackground(Color.ORANGE);
        jButton6.setBackground(Color.ORANGE);
        jButton9.setBackground(Color.ORANGE);
    } else if (b1.equals("X") && b5.equals("X") && b9.equals("X")) {
        winnerFound = true;
        jButton1.setBackground(Color.ORANGE);
        jButton5.setBackground(Color.ORANGE);
        jButton9.setBackground(Color.ORANGE);
    } else if (b3.equals("X") && b5.equals("X") && b7.equals("X")) {
        winnerFound = true;
        jButton3.setBackground(Color.ORANGE);
        jButton5.setBackground(Color.ORANGE);
        jButton7.setBackground(Color.ORANGE);
    } 

    // --- PLAYER O WINNING CONDITIONS ---
    else if (b1.equals("O") && b2.equals("O") && b3.equals("O")) {
        winnerFound = true;
        jButton1.setBackground(Color.CYAN);
        jButton2.setBackground(Color.CYAN);
        jButton3.setBackground(Color.CYAN);
    } else if (b4.equals("O") && b5.equals("O") && b6.equals("O")) {
        winnerFound = true;
        jButton4.setBackground(Color.CYAN);
        jButton5.setBackground(Color.CYAN);
        jButton6.setBackground(Color.CYAN);
    } else if (b7.equals("O") && b8.equals("O") && b9.equals("O")) {
        winnerFound = true;
        jButton7.setBackground(Color.CYAN);
        jButton8.setBackground(Color.CYAN);
        jButton9.setBackground(Color.CYAN);
    } else if (b1.equals("O") && b4.equals("O") && b7.equals("O")) {
        winnerFound = true;
        jButton1.setBackground(Color.CYAN);
        jButton4.setBackground(Color.CYAN);
        jButton7.setBackground(Color.CYAN);
    } else if (b2.equals("O") && b5.equals("O") && b8.equals("O")) {
        winnerFound = true;
        jButton2.setBackground(Color.CYAN);
        jButton5.setBackground(Color.CYAN);
        jButton8.setBackground(Color.CYAN);
    } else if (b3.equals("O") && b6.equals("O") && b9.equals("O")) {
        winnerFound = true;
        jButton3.setBackground(Color.CYAN);
        jButton6.setBackground(Color.CYAN);
        jButton9.setBackground(Color.CYAN);
    } else if (b1.equals("O") && b5.equals("O") && b9.equals("O")) {
        winnerFound = true;
        jButton1.setBackground(Color.CYAN);
        jButton5.setBackground(Color.CYAN);
        jButton9.setBackground(Color.CYAN);
    } else if (b3.equals("O") && b5.equals("O") && b7.equals("O")) {
        winnerFound = true;
        jButton3.setBackground(Color.CYAN);
        jButton5.setBackground(Color.CYAN);
        jButton7.setBackground(Color.CYAN);
    } 
    
    // Check for Winner
    if (winnerFound) {
        String winner = startgame; // The player who just played is the winner
        JOptionPane.showMessageDialog(this, "Player " + winner + " wins", "Tic Tac Toe", JOptionPane.INFORMATION_MESSAGE);
        if (winner.equals("X")) {
            xcount++;
        } else {
            ocount++;
        }
        gameScore(); // Update score display
        disableButtons(); // P4: Stop the game by disabling buttons
    } 
    
    // --- DRAW CONDITION --- (P5: Check for draw only if no winner was found)
    else if (!b1.isEmpty() && !b2.isEmpty() && !b3.isEmpty() && 
             !b4.isEmpty() && !b5.isEmpty() && !b6.isEmpty() && 
             !b7.isEmpty() && !b8.isEmpty() && !b9.isEmpty()) {
        JOptionPane.showMessageDialog(this, "Game Draw!", "Tic Tac Toe", JOptionPane.INFORMATION_MESSAGE);
        disableButtons(); // P4: Stop the game by disabling buttons
    }
}
    
    

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel2 = new javax.swing.JPanel();
        jPanel1 = new javax.swing.JPanel();
        jPanel5 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jPanel4 = new javax.swing.JPanel();
        Exit = new javax.swing.JButton();
        jButton16 = new javax.swing.JButton();
        Reset = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();
        jblplayerO = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jblplayerX = new javax.swing.JLabel();
        jPanel3 = new javax.swing.JPanel();
        jButton1 = new javax.swing.JButton();
        jButton3 = new javax.swing.JButton();
        jButton4 = new javax.swing.JButton();
        jButton5 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jButton7 = new javax.swing.JButton();
        jButton8 = new javax.swing.JButton();
        jButton9 = new javax.swing.JButton();
        jButton6 = new javax.swing.JButton();
        jPanel6 = new javax.swing.JPanel();
        jLabel3 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel2.setBackground(new java.awt.Color(95, 158, 160));
        jPanel2.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jPanel1.setBackground(new java.awt.Color(95, 158, 160));
        jPanel1.setBorder(javax.swing.BorderFactory.createEtchedBorder(javax.swing.border.EtchedBorder.RAISED));
        jPanel1.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jPanel5.setBackground(new java.awt.Color(95, 158, 160));
        jPanel5.setBorder(javax.swing.BorderFactory.createEtchedBorder(javax.swing.border.EtchedBorder.RAISED));
        jPanel5.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        jLabel1.setText("Player O:");

        jPanel4.setBackground(new java.awt.Color(95, 158, 160));
        jPanel4.setBorder(javax.swing.BorderFactory.createEtchedBorder(javax.swing.border.EtchedBorder.RAISED));
        jPanel4.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        Exit.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        Exit.setText("Exit");
        Exit.setMaximumSize(new java.awt.Dimension(200, 158));
        Exit.setMinimumSize(new java.awt.Dimension(200, 158));
        Exit.setPreferredSize(new java.awt.Dimension(200, 158));
        Exit.setRolloverEnabled(false);
        Exit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ExitActionPerformed(evt);
            }
        });

        jButton16.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        jButton16.setText("New Game");
        jButton16.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton16.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton16.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton16.setRolloverEnabled(false);
        jButton16.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton16ActionPerformed(evt);
            }
        });

        Reset.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        Reset.setText("Reset");
        Reset.setMaximumSize(new java.awt.Dimension(200, 158));
        Reset.setMinimumSize(new java.awt.Dimension(200, 158));
        Reset.setPreferredSize(new java.awt.Dimension(200, 158));
        Reset.setRolloverEnabled(false);
        Reset.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ResetActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel4Layout = new javax.swing.GroupLayout(jPanel4);
        jPanel4.setLayout(jPanel4Layout);
        jPanel4Layout.setHorizontalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel4Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                    .addGroup(jPanel4Layout.createSequentialGroup()
                        .addGap(6, 6, 6)
                        .addComponent(Reset, javax.swing.GroupLayout.PREFERRED_SIZE, 194, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(Exit, javax.swing.GroupLayout.PREFERRED_SIZE, 181, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jButton16, javax.swing.GroupLayout.PREFERRED_SIZE, 413, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(106, 106, 106))
        );
        jPanel4Layout.setVerticalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel4Layout.createSequentialGroup()
                .addContainerGap(31, Short.MAX_VALUE)
                .addComponent(jButton16, javax.swing.GroupLayout.PREFERRED_SIZE, 89, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(Exit, javax.swing.GroupLayout.PREFERRED_SIZE, 63, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(Reset, javax.swing.GroupLayout.PREFERRED_SIZE, 62, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(47, 47, 47))
        );

        jLabel2.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        jLabel2.setText("Player X:");

        jblplayerO.setFont(new java.awt.Font("Segoe UI", 1, 40)); // NOI18N
        jblplayerO.setOpaque(true);

        jLabel4.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        jLabel4.setOpaque(true);

        jblplayerX.setFont(new java.awt.Font("Segoe UI", 1, 40)); // NOI18N
        jblplayerX.setOpaque(true);

        javax.swing.GroupLayout jPanel5Layout = new javax.swing.GroupLayout(jPanel5);
        jPanel5.setLayout(jPanel5Layout);
        jPanel5Layout.setHorizontalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addContainerGap(12, Short.MAX_VALUE)
                .addComponent(jPanel4, javax.swing.GroupLayout.PREFERRED_SIZE, 426, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(16, 16, 16))
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addGap(15, 15, 15)
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1)
                    .addComponent(jLabel2))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jblplayerX, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jblplayerO, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(6, 6, 6)
                .addComponent(jLabel4)
                .addContainerGap())
        );
        jPanel5Layout.setVerticalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addGap(17, 17, 17)
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel2)
                    .addComponent(jblplayerX, javax.swing.GroupLayout.PREFERRED_SIZE, 67, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel5Layout.createSequentialGroup()
                        .addGap(4, 4, 4)
                        .addComponent(jblplayerO, javax.swing.GroupLayout.PREFERRED_SIZE, 68, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(10, 10, 10)
                .addComponent(jPanel4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(15, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel5, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(379, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel5, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(360, Short.MAX_VALUE))
        );

        jPanel3.setBackground(new java.awt.Color(95, 158, 160));
        jPanel3.setBorder(javax.swing.BorderFactory.createEtchedBorder(javax.swing.border.EtchedBorder.RAISED));
        jPanel3.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jButton1.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton1.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton1.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton1.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton1.setRolloverEnabled(false);
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jButton3.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton3.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton3.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton3.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton3.setRolloverEnabled(false);
        jButton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton3ActionPerformed(evt);
            }
        });

        jButton4.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton4.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton4.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton4.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton4.setRolloverEnabled(false);
        jButton4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton4ActionPerformed(evt);
            }
        });

        jButton5.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton5.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton5.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton5.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton5.setRolloverEnabled(false);
        jButton5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton5ActionPerformed(evt);
            }
        });

        jButton2.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton2.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton2.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton2.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton2.setRolloverEnabled(false);
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        jButton7.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton7.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton7.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton7.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton7.setRolloverEnabled(false);
        jButton7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton7ActionPerformed(evt);
            }
        });

        jButton8.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton8.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton8.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton8.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton8.setRolloverEnabled(false);
        jButton8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton8ActionPerformed(evt);
            }
        });

        jButton9.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton9.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton9.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton9.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton9.setRolloverEnabled(false);
        jButton9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton9ActionPerformed(evt);
            }
        });

        jButton6.setFont(new java.awt.Font("Segoe UI", 1, 96)); // NOI18N
        jButton6.setMaximumSize(new java.awt.Dimension(200, 158));
        jButton6.setMinimumSize(new java.awt.Dimension(200, 158));
        jButton6.setPreferredSize(new java.awt.Dimension(200, 158));
        jButton6.setRolloverEnabled(false);
        jButton6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton6ActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addGap(27, 27, 27)
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel3Layout.createSequentialGroup()
                        .addComponent(jButton7, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jButton8, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jButton9, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel3Layout.createSequentialGroup()
                        .addComponent(jButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jButton5, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jButton6, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(jPanel3Layout.createSequentialGroup()
                        .addComponent(jButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 135, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(226, Short.MAX_VALUE))
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addGap(26, 26, 26)
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton5, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton6, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jButton7, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton8, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton9, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(518, 518, 518))
        );

        jPanel6.setBackground(new java.awt.Color(95, 158, 160));
        jPanel6.setBorder(javax.swing.BorderFactory.createEtchedBorder(javax.swing.border.EtchedBorder.RAISED));
        jPanel6.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));

        jLabel3.setFont(new java.awt.Font("Segoe UI", 1, 50)); // NOI18N
        jLabel3.setText("Tic Tac Toe Game ");

        javax.swing.GroupLayout jPanel6Layout = new javax.swing.GroupLayout(jPanel6);
        jPanel6.setLayout(jPanel6Layout);
        jPanel6Layout.setHorizontalGroup(
            jPanel6Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel6Layout.createSequentialGroup()
                .addGap(416, 416, 416)
                .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 437, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(538, Short.MAX_VALUE))
        );
        jPanel6Layout.setVerticalGroup(
            jPanel6Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel6Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 52, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(21, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jPanel3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(51, 51, 51))
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel6, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(76, 76, 76)
                .addComponent(jPanel6, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE))))
        );

        getContentPane().add(jPanel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 1190, 650));

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void jButton4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton4ActionPerformed
if (jButton4.getText().isEmpty()) {
        jButton4.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }        // TODO add your handling code here:
    }//GEN-LAST:event_jButton4ActionPerformed
    
    
    private void jButton5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton5ActionPerformed
    if (jButton5.getText().isEmpty()) {
        jButton5.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }        // TODO add your handling code here:
    }//GEN-LAST:event_jButton5ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed

      
if (jButton2.getText().isEmpty()) {
        jButton2.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }       // TODO add your handling code here:
    }//GEN-LAST:event_jButton2ActionPerformed

    private void jButton7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton7ActionPerformed
    if (jButton7.getText().isEmpty()) {
        jButton7.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }        // TODO add your handling code here:
    }//GEN-LAST:event_jButton7ActionPerformed

    private void jButton8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton8ActionPerformed
   if (jButton8.getText().isEmpty()) {
        jButton8.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }         // TODO add your handling code here:
    }//GEN-LAST:event_jButton8ActionPerformed

    private void jButton9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton9ActionPerformed
   if (jButton9.getText().isEmpty()) {
        jButton9.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }          // TODO add your handling code here:
    }//GEN-LAST:event_jButton9ActionPerformed

    private void jButton6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton6ActionPerformed
     if (jButton6.getText().isEmpty()) {
        jButton6.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }        // TODO add your handling code here:
    }//GEN-LAST:event_jButton6ActionPerformed
private JFrame frame;
    private void ExitActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ExitActionPerformed
        frame = new JFrame("Exit");
        if ((JOptionPane.showConfirmDialog(frame,"Confirm if you want to exit","Tic Tac Toe",
               JOptionPane.YES_NO_OPTION))== (JOptionPane.YES_NO_OPTION))
                       {  
                           System.exit(0);
                       }
    }//GEN-LAST:event_ExitActionPerformed

    private void jButton16ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton16ActionPerformed
  resetGame(); 
    
    // Optional: Show a message that the game restarted but scores remain
    JOptionPane.showMessageDialog(this, "New Round Started. Current Scores Maintained.", "Tic Tac Toe", JOptionPane.INFORMATION_MESSAGE);
    }//GEN-LAST:event_jButton16ActionPerformed

    private void ResetActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ResetActionPerformed
        boolean True = false;
                  jButton1.setEnabled(True);
                  jButton2.setEnabled(True);
                  jButton3.setEnabled(True);
                  jButton4.setEnabled(True);
                  jButton5.setEnabled(True);
                  jButton6.setEnabled(True);
                  jButton7.setEnabled(True);
                  jButton8.setEnabled(True);
                  jButton9.setEnabled(True);
                  
                  jblplayerX.setText("0");
                  jblplayerO.setText("0");
                  
                  jButton1.setText("");
                  jButton2.setText("");
                  jButton3.setText("");
                  jButton4.setText("");
                  jButton5.setText("");
                  jButton6.setText("");
                  jButton7.setText("");
                  jButton8.setText("");
                  jButton9.setText("");
                  
                  jButton1.setBackground(Color.LIGHT_GRAY);
                  jButton2.setBackground(Color.LIGHT_GRAY);
                  jButton3.setBackground(Color.LIGHT_GRAY);
                  jButton4.setBackground(Color.LIGHT_GRAY);
                  jButton5.setBackground(Color.LIGHT_GRAY);
                  jButton6.setBackground(Color.LIGHT_GRAY);
                  jButton7.setBackground(Color.LIGHT_GRAY);
                  jButton8.setBackground(Color.LIGHT_GRAY);
                  jButton9.setBackground(Color.LIGHT_GRAY);
                   
                  
                      
                  
    }//GEN-LAST:event_ResetActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
     if (jButton1.getText().isEmpty()) { // Check if the button is empty
        jButton1.setText(startgame);
         // Note: The checker variable logic is redundant but harmless.
         // It's usually cleaner to just rely on startgame.
         checker = !startgame.equalsIgnoreCase("X");
        winningGame(); // Check for winner AFTER setting text
        choose_a_Player(); // Switch player AFTER checking for winner
    }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton3ActionPerformed
   if (jButton3.getText().isEmpty()) {
        jButton3.setText(startgame);
        checker = !startgame.equalsIgnoreCase("X");
        winningGame();
        choose_a_Player();
    }     // TODO add your handling code here:
    }//GEN-LAST:event_jButton3ActionPerformed

    /**
     * @param args the command line arguments
     */
   public static void main(String args[]) {
    // ... code before try block ...
    try {
        for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
            if ("Nimbus".equals(info.getName())) {
                javax.swing.UIManager.setLookAndFeel(info.getClassName());
                break;
            }
        }
        // </editor-fold> tag here is fine
    } catch (ReflectiveOperationException | javax.swing.UnsupportedLookAndFeelException ex) {
        
    }
    // Line 795:
    java.awt.EventQueue.invokeLater(() -> new Java_TicTacToe().setVisible(true));
}
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton Exit;
    private javax.swing.JButton Reset;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton16;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton4;
    private javax.swing.JButton jButton5;
    private javax.swing.JButton jButton6;
    private javax.swing.JButton jButton7;
    private javax.swing.JButton jButton8;
    private javax.swing.JButton jButton9;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    private javax.swing.JPanel jPanel5;
    private javax.swing.JPanel jPanel6;
    private javax.swing.JLabel jblplayerO;
    private javax.swing.JLabel jblplayerX;
    // End of variables declaration//GEN-END:variables
}
