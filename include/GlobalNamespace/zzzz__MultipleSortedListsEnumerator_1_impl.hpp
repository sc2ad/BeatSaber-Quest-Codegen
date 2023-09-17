#pragma once
namespace {
#include "GlobalNamespace/zzzz__MultipleSortedListsEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__BinaryHeap_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem.get_currentValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::get_currentValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            "get_currentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::*)(::System::Collections::Generic::IReadOnlyList_1<T>)>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem.MoveToNextItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::MoveToNextItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            "MoveToNextItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::*)(::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>)>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IComparable_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>
constexpr  ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::operator ::System::IComparable_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>() const noexcept {
return ::System::IComparable_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::__set__dataList(::System::Collections::Generic::IReadOnlyList_1<T> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<T>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<T> ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::__get__dataList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::__set__idx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::__get__idx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::__set__currentValue(T value)  {
::cordl_internals::setInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::__get__currentValue() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::get_currentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            "get_currentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "dataList", ty: "::System::Collections::Generic::IReadOnlyList_1<T>", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem(::System::Collections::Generic::IReadOnlyList_1<T> dataList)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>(dataList))) {}
 void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::_ctor(::System::Collections::Generic::IReadOnlyList_1<T> dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataList);
}
 bool ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::MoveToNextItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            "MoveToNextItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem::CompareTo(::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> heapItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, heapItem);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4.System_Collections_Generic_IEnumerator_T__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_Collections_Generic_IEnumerator_T__get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::*)()>(&::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr  ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::operator ::System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__set___4__this(::GlobalNamespace::MultipleSortedListsEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>>(value));
}
constexpr ::GlobalNamespace::MultipleSortedListsEnumerator_1<T> ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__set__heapItem_5__2(::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T> ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::__get__heapItem_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>(__1__state))) {}
 void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1___GetEnumerator_d__4>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MultipleSortedListsEnumerator_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultipleSortedListsEnumerator_1::*)(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>>)>(&::GlobalNamespace::MultipleSortedListsEnumerator_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultipleSortedListsEnumerator_1.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::MultipleSortedListsEnumerator_1::*)()>(&::GlobalNamespace::MultipleSortedListsEnumerator_1::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultipleSortedListsEnumerator_1.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<T> (::GlobalNamespace::MultipleSortedListsEnumerator_1::*)()>(&::GlobalNamespace::MultipleSortedListsEnumerator_1::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::MultipleSortedListsEnumerator_1::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultipleSortedListsEnumerator_1::__set__heap(::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>>(value));
}
constexpr ::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>> ::GlobalNamespace::MultipleSortedListsEnumerator_1::__get__heap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::____GlobalNamespace__MultipleSortedListsEnumerator_1__HeapItem<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dataList", ty: "::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>>", modifiers: "", def_value: None }]
 ::GlobalNamespace::MultipleSortedListsEnumerator_1::MultipleSortedListsEnumerator_1(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>> dataList)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MultipleSortedListsEnumerator_1>(dataList))) {}
 void ::GlobalNamespace::MultipleSortedListsEnumerator_1::_ctor(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>> dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataList);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::MultipleSortedListsEnumerator_1::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<T> ::GlobalNamespace::MultipleSortedListsEnumerator_1::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
