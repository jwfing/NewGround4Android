package org.jwfing.restlib;

public class NativeLib {

    // Used to load the 'restlib' library on application startup.
    static {
        System.loadLibrary("restlib");
    }

    /**
     * A native method that is implemented by the 'restlib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}