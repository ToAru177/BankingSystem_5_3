#ifndef _ACCOUNTARRAY_H_
#define	_ACCOUNTARRAY_H_

#include "Account.h"

#define NumOfUser	100

typedef Account * ACCOUNT_PTR;

class AccountArray {
private:
	ACCOUNT_PTR *accArr;	// ���� ���� ����Ʈ(������ �迭)
	int arrlen;				// �迭�� ��� ��
	

	AccountArray(const AccountArray &arr) {}
	AccountArray& operator=(const AccountArray &arr){}

public:
	// ������
	AccountArray(int len = NumOfUser);
	
	// [] ������ �����ε�
	ACCOUNT_PTR& operator[](int idx);

	// [] ������ �����ε�
	ACCOUNT_PTR operator[](int idx) const;

	// �迭 ���� ��ȯ
	int GetArrLen() const;

	// �Ҹ���
	~AccountArray();

};


#endif // !1

