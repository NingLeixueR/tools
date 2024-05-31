#pragma once

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

namespace ngl
{
	// Ĭ������Ϊfalse
	template<typename T, typename... Types>
	struct is_containery_type
	{
		static const bool value = false;
	};

	template<>
	struct is_containery_type<std::string>
	{
		static const bool value = true;
	};

	// Vector����Ϊtrue
	template<typename T, typename... Types>
	struct is_containery_type<std::vector<T, Types...>>
	{
		static const bool value = true;
	};
	// Vector����Ϊtrue
	template<typename T, typename... Types>
	struct is_containery_type<std::list<T, Types...>>
	{
		static const bool value = true;
	};

	// deque����
	template<typename T, typename... Types>
	struct is_containery_type<std::deque<T, Types...>>
	{
		static const bool value = true;
	};

	// set����
	template<typename T, typename... Types>
	struct is_containery_type<std::set<T, Types...>>
	{
		static const bool value = true;
	};

	// multiset����
	template<typename T, typename... Types>
	struct is_containery_type<std::multiset<T, Types...>>
	{
		static const bool value = true;
	};

	// map����
	template<typename K, typename V, typename... Types>
	struct is_containery_type<std::map<K, V, Types...>>
	{
		static const bool value = true;
	};

	// multimap����
	template<typename K, typename V, typename... Types>
	struct is_containery_type<std::multimap<K, V, Types...>>
	{
		static const bool value = true;
	};

	// �����ȡ�������͵�ģ��
	template<typename T, typename... Types>
	constexpr bool is_container = is_containery_type<T, Types...>::value;
}// namespace ngl