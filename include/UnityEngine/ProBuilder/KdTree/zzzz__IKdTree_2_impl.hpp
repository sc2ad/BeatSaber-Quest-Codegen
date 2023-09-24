#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>
constexpr  UnityEngine::ProBuilder::KdTree::IKdTree_2::operator System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::ProBuilder::KdTree::IKdTree_2::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::ProBuilder::KdTree::IKdTree_2::Add(::ArrayW<TKey> point, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 bool UnityEngine::ProBuilder::KdTree::IKdTree_2::TryFindValueAt(::ArrayW<TKey> point, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "TryFindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 TValue UnityEngine::ProBuilder::KdTree::IKdTree_2::FindValueAt(::ArrayW<TKey> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "FindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, point);
}
 bool UnityEngine::ProBuilder::KdTree::IKdTree_2::TryFindValue(TValue value, ByRef<::ArrayW<TKey>> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "TryFindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TKey>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, point);
}
 ::ArrayW<TKey> UnityEngine::ProBuilder::KdTree::IKdTree_2::FindValue(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "FindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TKey>, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> UnityEngine::ProBuilder::KdTree::IKdTree_2::RadialSearch(::ArrayW<TKey> center, TKey radius, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "RadialSearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method, center, radius, count);
}
 void UnityEngine::ProBuilder::KdTree::IKdTree_2::RemoveAt(::ArrayW<TKey> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point);
}
 void UnityEngine::ProBuilder::KdTree::IKdTree_2::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param count: int32_t (default: 2147483647)
 ::ArrayW<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> UnityEngine::ProBuilder::KdTree::IKdTree_2::GetNearestNeighbours(::ArrayW<TKey> point, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "GetNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method, point, count);
}
 int32_t UnityEngine::ProBuilder::KdTree::IKdTree_2::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::KdTree::IKdTree_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
