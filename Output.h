#ifndef OUTPUT_H_
#define OUTPUT_H_

extern uint8_t PWM_PIN[8];

void initOutput();//output������
void mixTable();//�e�[�u�����삷�郁�\�b�h�i�����e��������̃��\�b�h�Ŗ��߂���j
void writeServos();//�T�[�{���[�^�[�ɏ������ޏ���
void writeMotors();//���[�^�[�ɏ������ޏ���

#endif /* OUTPUT_H_ */
