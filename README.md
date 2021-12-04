# minitalk
# for 42tokyo
二つのプログラムを同時に実行し、プログラム間でシグナルを使い文字列を送受信する。

# 使い方
実行ファイル server client

./severで取得したpidが出力される。

./client pid "文字列" を実行するとseverに"文字列"が表示される。

# 使用可能関数
write　signal　sigemptyset　sigaddset　sigaction　kill　getpid　malloc　free　pause　sleep　usleep　exit
