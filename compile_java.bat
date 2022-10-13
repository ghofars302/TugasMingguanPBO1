@echo off

echo "Compiling main.java into main.class"
"%JAVA_HOME%\bin\javac.exe" ./main.java

echo "Executing main.class"
"%JAVA_HOME%\bin\java.exe" main
