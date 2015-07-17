#ifndef OUTPUT_H_
#define OUTPUT_H_

extern uint8_t PWM_PIN[8];

void initOutput();//output初期化
void mixTable();//テーブル操作するメソッド（多分各操作をこのメソッドで命令する）
void writeServos();//サーボモーターに書き込む処理
void writeMotors();//モーターに書き込む処理

#endif /* OUTPUT_H_ */
