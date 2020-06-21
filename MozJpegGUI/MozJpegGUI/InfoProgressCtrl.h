/****************************************************************************

    Name: InfoProgresssCtrl.h

    Desc: CProgressCtrl�ɕ������\���@�\��ǉ��D

  Author: donadona
  reidphoa�����InfoProgressBar.h������

*********************************************************************/
#if !defined(AFX_INFOPROGRESSCTRL_H__09E9DBA9_0BB8_4EF2_9208_C4A44A679B89__INCLUDED_)
#define AFX_INFOPROGRESSCTRL_H__09E9DBA9_0BB8_4EF2_9208_C4A44A679B89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CInfoProgressCtrl : public CProgressCtrl
{
public:

	CInfoProgressCtrl();
	virtual ~CInfoProgressCtrl();

	virtual void SetTxtColor(COLORREF rgbIn, COLORREF rgbOut)
	{
		m_rgbIn  = rgbIn;
		m_rgbOut = rgbOut;
	}
	// smooth:true(default) �o�[�����炩�ɐL�΂� false:�o�[�𑬂₩�ɐL�΂�
	virtual bool SetSmoothMove(const bool smooth);

	// �I�[�o�[���C�h
	//{{AFX_VIRTUAL(CInfoProgressCtrl)

	virtual void PreSubclassWindow();

	//}}AFX_VIRTUAL

	// �v���O���X�o�[�̉����l�Ə���l��ݒ肵�ĕ`�悷��
	virtual void SetRange(short nLower, short nUpper);
	// �v���O���X�o�[�̉����l�Ə���l��ݒ肵�ĕ`�悷��
	virtual void SetRange32(int nLower, int nUpper);
	// �v���O���X�o�[��L�΂��ʂ�ݒ肷��B�Ԃ�l�F���O�̐L����
	virtual int SetStep(int nStep);
	// �v���O���X�o�[��L�΂��B�Ԃ�l�F���O�̈ʒu
	virtual int StepIt();
	// �v���O���X�o�[��nPos�L�΂��B�Ԃ�l�F���O�̈ʒu
	virtual int OffsetPos(int nPos);
	// �v���O���X�o�[�̈ʒu��ݒ肷��B�Ԃ�l�F���O�̈ʒu
	virtual int SetPos(int nPos);
	// REVIEW: Sets the state of the progress bar.
	virtual int SetState(int iState);


protected:
	virtual void DrawText(CDC* pDC);
	// �v���O���X�o�[�̈ʒu���u�ԓI��m_Pos�֕ύX����
	int InstantSetPos();


	CFont		m_font;			// �t�H���g
	COLORREF	m_rgbIn;		// ������̐F(�o�[���j
	COLORREF	m_rgbOut;		// ������̐F(�o�[�O)
	CRect		m_rcBarMax;		// �o�[�̗̈�
	bool		m_smoothMove;	// true:���炩�ɐL�т�(�f�t�H���g����)
	int			m_rangeMin;		// �v���O���X�o�[�R���g���[���̉����l
	int			m_rangeMax;		// �v���O���X�o�[�R���g���[���̏���l
	int			m_pos;			// �v���O���X�o�[�R���g���[���̌��ݒl
	int			m_step;			// �v���O���X�o�[�R���g���[���̃X�e�b�v�l
	int			m_state;		// �v���O���X�o�[�R���g���[���̏��
	int			m_previousPos;	// �v���O���X�o�[�R���g���[���̉ߋ��l
	int			m_previousMin;	// �v���O���X�o�[�R���g���[���̉ߋ������l
	int			m_previousMax;	// �v���O���X�o�[�R���g���[���̉ߋ�����l
	CString		m_previousTxt;	// �v���O���X�o�[�R���g���[���̉ߋ��e�L�X�g
	int			m_previousState;// �v���O���X�o�[�R���g���[���̉ߋ����

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CInfoProgressCtrl)
	afx_msg void OnPaint();
	afx_msg LRESULT	OnSetText(WPARAM wParam, LPARAM lParam);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}

#endif // !defined(AFX_INFOPROGRESSCTRL_H__09E9DBA9_0BB8_4EF2_9208_C4A44A679B89__INCLUDED_)
