package com.softgraden.jnidemo;

/**
 * @author by DELL
 * @date on 2019/3/27
 * @describe
 */
public class JniDemo {
    //静态代码块
    static {
        System.loadLibrary("JniDemo");
    }

    public static native String getStringFromJni();

    public static native String getSSS();
}
