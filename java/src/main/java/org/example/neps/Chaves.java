package org.example.neps;

import java.util.Scanner;
import java.util.Stack;

public class Chaves {
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String str;
        var ans = true;
        var stack = new Stack<Character>();
        for (int i = 0; i < n; i++) {
            str = sc.nextLine();
            if (str.contains("{") || str.contains("}")) {
                for (int j = 0; j < str.length(); j++) {
                    if (str.charAt(j) == '{') {
                        stack.push(str.charAt(j));
                    } else if (str.charAt(j) == '}') {
                        if (stack.isEmpty()) {
                            ans = false;
                        } else {
                            stack.pop();
                        }
                    }
                }
            }
        }

        sc.close();

        if (ans && stack.isEmpty()) {
            System.out.println('S');
        } else {
            System.out.println('N');
        }
    }
}
