#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ArrayUtility_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ArrayUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::*)(int32_t, int32_t)>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29a3010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange.Valid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::*)()>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::Valid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29a3018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            "Valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange.Center
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::*)()>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::Center)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29a302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            "Center",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::*)()>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::ToString)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x29a3044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "begin", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::UnityEngine__ProBuilder__ArrayUtility__SearchRange(int32_t begin, int32_t end) noexcept : ::bs_hook::ValueTypeWrapper() {this->begin = begin;
this->end = end;
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::__set_begin(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::__get_begin() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::__set_end(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::__get_end() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::_ctor(int32_t begin, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, begin, end);
}
 bool UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::Valid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            "Valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::Center()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            "Center",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility__SearchRange>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::ValuesWithIndexes(::ArrayW<T> arr, ::ArrayW<int32_t> indexes)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "ValuesWithIndexes",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, arr, indexes);
}
template<typename T>
 System::Collections::Generic::List_1<T> UnityEngine::ProBuilder::ArrayUtility::ValuesWithIndexes(System::Collections::Generic::List_1<T> arr, System::Collections::Generic::IList_1<int32_t> indexes)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "ValuesWithIndexes",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(nullptr, ___internal_method, arr, indexes);
}
template<typename T>
 System::Collections::Generic::IEnumerable_1<int32_t> UnityEngine::ProBuilder::ArrayUtility::AllIndexesOf(System::Collections::Generic::IList_1<T> list, System::Func_2<T,bool> lambda)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "AllIndexesOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<T,bool>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<int32_t>, false>(nullptr, ___internal_method, list, lambda);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Add(::ArrayW<T> arr, T val)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Add",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, arr, val);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::AddRange(::ArrayW<T> arr, ::ArrayW<T> val)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "AddRange",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, arr, val);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Remove(::ArrayW<T> arr, T val)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Remove",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, arr, val);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Remove(::ArrayW<T> arr, System::Collections::Generic::IEnumerable_1<T> val)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Remove",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, arr, val);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::RemoveAt(::ArrayW<T> arr, int32_t index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "RemoveAt",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, arr, index);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::RemoveAt(System::Collections::Generic::IList_1<T> list, System::Collections::Generic::IEnumerable_1<int32_t> indexes)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "RemoveAt",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, list, indexes);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::SortedRemoveAt(System::Collections::Generic::IList_1<T> list, System::Collections::Generic::IList_1<int32_t> sorted)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "SortedRemoveAt",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, list, sorted);
}
template<typename T>
 int32_t UnityEngine::ProBuilder::ArrayUtility::NearestIndexPriorToValue(System::Collections::Generic::IList_1<T> sorted_list, T value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "NearestIndexPriorToValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sorted_list, value);
}
template<typename T>
 System::Collections::Generic::List_1<T> UnityEngine::ProBuilder::ArrayUtility::Fill(System::Func_2<int32_t,T> ctor, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Fill",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<int32_t,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(nullptr, ___internal_method, ctor, length);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Fill(T val, int32_t length)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Fill",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, val, length);
}
template<typename T>
 bool UnityEngine::ProBuilder::ArrayUtility::ContainsMatch(::ArrayW<T> a, ::ArrayW<T> b)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "ContainsMatch",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template<typename T>
 bool UnityEngine::ProBuilder::ArrayUtility::ContainsMatch(::ArrayW<T> a, ::ArrayW<T> b, ByRef<int32_t> index_a, ByRef<int32_t> index_b)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "ContainsMatch",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b, index_a, index_b);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Concat(::ArrayW<T> x, ::ArrayW<T> y)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Concat",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, x, y);
}
template<typename T>
 int32_t UnityEngine::ProBuilder::ArrayUtility::IndexOf(System::Collections::Generic::List_1<System::Collections::Generic::List_1<T>> InList, T InValue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "IndexOf",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Collections::Generic::List_1<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, InList, InValue);
}
template<typename T>
 ::ArrayW<T> UnityEngine::ProBuilder::ArrayUtility::Fill(int32_t count, System::Func_2<int32_t,T> ctor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "Fill",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<int32_t,T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, count, ctor);
}
template<typename T,typename K>
 void UnityEngine::ProBuilder::ArrayUtility::AddOrAppend(System::Collections::Generic::Dictionary_2<T,System::Collections::Generic::List_1<K>> dictionary, T key, K value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "AddOrAppend",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<T,System::Collections::Generic::List_1<K>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dictionary, key, value);
}
template<typename T,typename K>
 void UnityEngine::ProBuilder::ArrayUtility::AddOrAppendRange(System::Collections::Generic::Dictionary_2<T,System::Collections::Generic::List_1<K>> dictionary, T key, System::Collections::Generic::List_1<K> value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "AddOrAppendRange",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<T,System::Collections::Generic::List_1<K>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<K>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<K>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dictionary, key, value);
}
template<typename TSource,typename TKey>
 System::Collections::Generic::IEnumerable_1<TSource> UnityEngine::ProBuilder::ArrayUtility::DistinctBy(System::Collections::Generic::IEnumerable_1<TSource> source, System::Func_2<TSource,TKey> keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "DistinctBy",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TSource>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TSource,TKey>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<TSource>, false>(nullptr, ___internal_method, source, keySelector);
}
template<typename TKey,typename TValue>
 ::StringW UnityEngine::ProBuilder::ArrayUtility::ToString(System::Collections::Generic::Dictionary_2<TKey,TValue> dict)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "ToString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, dict);
}
/// @param separator: ::StringW (default: u", ")
template<typename T>
 ::StringW UnityEngine::ProBuilder::ArrayUtility::ToString(System::Collections::Generic::IEnumerable_1<T> arr, ::StringW separator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ArrayUtility>::get(),
                        "ToString",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, arr, separator);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::__set_knownKeys(System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::__get_knownKeys() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::__set_keySelector(System::Func_2<TSource,UnityEngine::ProBuilder::Edge> value)  {
::cordl_internals::setInstanceField<System::Func_2<TSource,UnityEngine::ProBuilder::Edge>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TSource,UnityEngine::ProBuilder::Edge>>(value));
}
constexpr System::Func_2<TSource,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TSource,UnityEngine::ProBuilder::Edge>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::New_ctor()  {
UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>>())};
return o;
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>::_DistinctBy_b__0(TSource x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,UnityEngine::ProBuilder::Edge>>::get(),
                            "<DistinctBy>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::__set_knownKeys(System::Collections::Generic::HashSet_1<TKey> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<TKey>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<TKey>>(value));
}
constexpr System::Collections::Generic::HashSet_1<TKey> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::__get_knownKeys() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<TKey>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::__set_keySelector(System::Func_2<TSource,TKey> value)  {
::cordl_internals::setInstanceField<System::Func_2<TSource,TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TSource,TKey>>(value));
}
constexpr System::Func_2<TSource,TKey> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TSource,TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::New_ctor()  {
UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>>())};
return o;
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>::_DistinctBy_b__0(TSource x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__DisplayClass21_0_2<TSource,TKey>>::get(),
                            "<DistinctBy>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> value)  {
::cordl_internals::setStaticField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>(std::forward<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>(value));
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>();
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__set___9__23_0(System::Func_2<T,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<T,::StringW>, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>(std::forward<System::Func_2<T,::StringW>>(value));
}
 System::Func_2<T,::StringW> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__get___9__23_0()  {
return ::cordl_internals::getStaticField<System::Func_2<T,::StringW>, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>();
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::New_ctor()  {
UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>())};
return o;
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::_ToString_b__23_0(T x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get(),
                            "<ToString>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> value)  {
::cordl_internals::setStaticField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>(std::forward<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>(value));
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>();
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__set___9__23_0(System::Func_2<T,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<T,::StringW>, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>(std::forward<System::Func_2<T,::StringW>>(value));
}
 System::Func_2<T,::StringW> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::__get___9__23_0()  {
return ::cordl_internals::getStaticField<System::Func_2<T,::StringW>, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get>();
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::New_ctor()  {
UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>())};
return o;
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>::_ToString_b__23_0(T x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__ArrayUtility____c__23_1<T>>::get(),
                            "<ToString>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
