#pragma once

#include <cstdint>
#include <vector>

namespace ngl
{
	class bit
	{
		int8_t* m_bit;
		int32_t m_bitarraycount;
	public:
		bit();

		void init(int8_t* abit, int32_t abitarraycount);

		static bool set(int abit, int8_t& avalues, bool abool);

		//# ������λ������Ϊabool
		bool set(bool abool);

		//# ��abitλ����Ϊabool
		bool set(int abit, bool abool);

		//# ��ȡabitλ��bool
		bool get(int abit)const;

		//# �����׸�����aboolֵ��λ��
		int find_first(bool abool);
	};
}// namespace ngl