#include "circle.h"

//	���ð뾶
void Circle::setR(int r)
{
	m_R = r;
}
//	��ȡ�뾶
int Circle::getR()
{
	return m_R;
}
//	����Բ��
void Circle::setCenter(Point center)
{
	m_Center = center;
 } 
//	��ȡԲ�� 
Point Circle::getCenter()
{
	return m_Center;
}

