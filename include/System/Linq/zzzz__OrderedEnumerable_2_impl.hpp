#pragma once
#include "System/Linq/zzzz__OrderedEnumerable_1_impl.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_2_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
//  Writing Method size for method: System::Linq::OrderedEnumerable_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2::*)(System::Collections::Generic::IEnumerable_1<TElement>, System::Func_2<TElement,TKey>, System::Collections::Generic::IComparer_1<TKey>, bool)>(&System::Linq::OrderedEnumerable_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<TElement> (System::Linq::OrderedEnumerable_2::*)(System::Linq::EnumerableSorter_1<TElement>)>(&System::Linq::OrderedEnumerable_2::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2::__set_parent(System::Linq::OrderedEnumerable_1<TElement> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<TElement>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<TElement> System::Linq::OrderedEnumerable_2::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_keySelector(System::Func_2<TElement,TKey> value)  {
::cordl_internals::setInstanceField<System::Func_2<TElement,TKey>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TElement,TKey>>(value));
}
constexpr System::Func_2<TElement,TKey> System::Linq::OrderedEnumerable_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TElement,TKey>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_comparer(System::Collections::Generic::IComparer_1<TKey> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<TKey>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<TKey>>(value));
}
constexpr System::Collections::Generic::IComparer_1<TKey> System::Linq::OrderedEnumerable_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<TKey>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<TElement,TKey>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,TKey> keySelector, System::Collections::Generic::IComparer_1<TKey> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2::_ctor(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,TKey> keySelector, System::Collections::Generic::IComparer_1<TKey> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<TElement> System::Linq::OrderedEnumerable_2::GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<TElement>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<int32_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<int32_t,float_t>::*)(System::Collections::Generic::IEnumerable_1<int32_t>, System::Func_2<int32_t,float_t>, System::Collections::Generic::IComparer_1<float_t>, bool)>(&System::Linq::OrderedEnumerable_2<int32_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<int32_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<int32_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<int32_t,float_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<int32_t> (System::Linq::OrderedEnumerable_2<int32_t,float_t>::*)(System::Linq::EnumerableSorter_1<int32_t>)>(&System::Linq::OrderedEnumerable_2<int32_t,float_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<int32_t,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<int32_t,float_t>::__set_parent(System::Linq::OrderedEnumerable_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<int32_t>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<int32_t> System::Linq::OrderedEnumerable_2<int32_t,float_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<int32_t,float_t>::__set_keySelector(System::Func_2<int32_t,float_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<int32_t,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<int32_t,float_t>>(value));
}
constexpr System::Func_2<int32_t,float_t> System::Linq::OrderedEnumerable_2<int32_t,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<int32_t,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<int32_t,float_t>::__set_comparer(System::Collections::Generic::IComparer_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<float_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<float_t> System::Linq::OrderedEnumerable_2<int32_t,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<int32_t,float_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<int32_t,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<int32_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<int32_t,float_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<int32_t> source, System::Func_2<int32_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<int32_t,float_t>::_ctor(System::Collections::Generic::IEnumerable_1<int32_t> source, System::Func_2<int32_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<int32_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<int32_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<int32_t> System::Linq::OrderedEnumerable_2<int32_t,float_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<int32_t> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<int32_t,float_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<float_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<float_t,float_t>::*)(System::Collections::Generic::IEnumerable_1<float_t>, System::Func_2<float_t,float_t>, System::Collections::Generic::IComparer_1<float_t>, bool)>(&System::Linq::OrderedEnumerable_2<float_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<float_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<float_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<float_t,float_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<float_t> (System::Linq::OrderedEnumerable_2<float_t,float_t>::*)(System::Linq::EnumerableSorter_1<float_t>)>(&System::Linq::OrderedEnumerable_2<float_t,float_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<float_t,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<float_t,float_t>::__set_parent(System::Linq::OrderedEnumerable_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<float_t>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<float_t> System::Linq::OrderedEnumerable_2<float_t,float_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<float_t,float_t>::__set_keySelector(System::Func_2<float_t,float_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<float_t,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<float_t,float_t>>(value));
}
constexpr System::Func_2<float_t,float_t> System::Linq::OrderedEnumerable_2<float_t,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<float_t,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<float_t,float_t>::__set_comparer(System::Collections::Generic::IComparer_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<float_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<float_t> System::Linq::OrderedEnumerable_2<float_t,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<float_t,float_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<float_t,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<float_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<float_t,float_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<float_t> source, System::Func_2<float_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<float_t,float_t>::_ctor(System::Collections::Generic::IEnumerable_1<float_t> source, System::Func_2<float_t,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<float_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<float_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<float_t> System::Linq::OrderedEnumerable_2<float_t,float_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<float_t> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<float_t,float_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<float_t>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2::*)(System::Collections::Generic::IEnumerable_1<TElement>, System::Func_2<TElement,int32_t>, System::Collections::Generic::IComparer_1<int32_t>, bool)>(&System::Linq::OrderedEnumerable_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<TElement> (System::Linq::OrderedEnumerable_2::*)(System::Linq::EnumerableSorter_1<TElement>)>(&System::Linq::OrderedEnumerable_2::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2::__set_parent(System::Linq::OrderedEnumerable_1<TElement> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<TElement>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<TElement> System::Linq::OrderedEnumerable_2::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_keySelector(System::Func_2<TElement,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<TElement,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TElement,int32_t>>(value));
}
constexpr System::Func_2<TElement,int32_t> System::Linq::OrderedEnumerable_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TElement,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_comparer(System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<int32_t> System::Linq::OrderedEnumerable_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<TElement,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2::_ctor(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<TElement> System::Linq::OrderedEnumerable_2::GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<TElement>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2::*)(System::Collections::Generic::IEnumerable_1<TElement>, System::Func_2<TElement,float_t>, System::Collections::Generic::IComparer_1<float_t>, bool)>(&System::Linq::OrderedEnumerable_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<TElement> (System::Linq::OrderedEnumerable_2::*)(System::Linq::EnumerableSorter_1<TElement>)>(&System::Linq::OrderedEnumerable_2::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2::__set_parent(System::Linq::OrderedEnumerable_1<TElement> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<TElement>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<TElement> System::Linq::OrderedEnumerable_2::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_keySelector(System::Func_2<TElement,float_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<TElement,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TElement,float_t>>(value));
}
constexpr System::Func_2<TElement,float_t> System::Linq::OrderedEnumerable_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TElement,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_comparer(System::Collections::Generic::IComparer_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<float_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<float_t> System::Linq::OrderedEnumerable_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<TElement,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2::_ctor(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,float_t> keySelector, System::Collections::Generic::IComparer_1<float_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<TElement> System::Linq::OrderedEnumerable_2::GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<TElement>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2::*)(System::Collections::Generic::IEnumerable_1<TElement>, System::Func_2<TElement,uint32_t>, System::Collections::Generic::IComparer_1<uint32_t>, bool)>(&System::Linq::OrderedEnumerable_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<TElement> (System::Linq::OrderedEnumerable_2::*)(System::Linq::EnumerableSorter_1<TElement>)>(&System::Linq::OrderedEnumerable_2::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2::__set_parent(System::Linq::OrderedEnumerable_1<TElement> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<TElement>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<TElement> System::Linq::OrderedEnumerable_2::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<TElement>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_keySelector(System::Func_2<TElement,uint32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<TElement,uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TElement,uint32_t>>(value));
}
constexpr System::Func_2<TElement,uint32_t> System::Linq::OrderedEnumerable_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<TElement,uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_comparer(System::Collections::Generic::IComparer_1<uint32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<uint32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<uint32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<uint32_t> System::Linq::OrderedEnumerable_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<uint32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<TElement>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<TElement,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2::_ctor(System::Collections::Generic::IEnumerable_1<TElement> source, System::Func_2<TElement,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TElement,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<TElement> System::Linq::OrderedEnumerable_2::GetEnumerableSorter(System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<TElement>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>, System::Collections::Generic::IComparer_1<int32_t>, bool)>(&System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> (System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>)>(&System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_parent(System::Linq::OrderedEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_keySelector(System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>(value));
}
constexpr System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_comparer(System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<int32_t> System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> source, System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::_ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> source, System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>, System::Collections::Generic::IComparer_1<uint32_t>, bool)>(&System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(&System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_parent(System::Linq::OrderedEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_keySelector(System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>(value));
}
constexpr System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_comparer(System::Collections::Generic::IComparer_1<uint32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<uint32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<uint32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<uint32_t> System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<uint32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> source, System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::_ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> source, System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::*)(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>, System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>, System::Collections::Generic::IComparer_1<int32_t>, bool)>(&System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> (System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::*)(System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>)>(&System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__set_parent(System::Linq::OrderedEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo> System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__set_keySelector(System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>(value));
}
constexpr System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__set_comparer(System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<int32_t> System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo> source, System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::_ctor(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo> source, System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::*)(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>, System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>, System::Collections::Generic::IComparer_1<int32_t>, bool)>(&System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> (System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::*)(System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>)>(&System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__set_parent(System::Linq::OrderedEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo> System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__set_keySelector(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>(value));
}
constexpr System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__set_comparer(System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<int32_t> System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo> source, System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::_ctor(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo> source, System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>, false>(const_cast<void*>(instance), ___internal_method, next);
}
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::*)(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>, System::Collections::Generic::IComparer_1<int32_t>, bool)>(&System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>.GetEnumerableSorter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> (System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::*)(System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>)>(&System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::GetEnumerableSorter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_parent(System::Linq::OrderedEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Linq::OrderedEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::OrderedEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Linq::OrderedEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Linq::OrderedEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_keySelector(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>(value));
}
constexpr System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_comparer(System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr System::Collections::Generic::IComparer_1<int32_t> System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IComparer_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }]
 System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::OrderedEnumerable_2(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> source, System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  : System::Linq::OrderedEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>(THROW_UNLESS(::il2cpp_utils::New<OrderedEnumerable_2>(source, keySelector, comparer, descending))) {}
 void System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::_ctor(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> source, System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, keySelector, comparer, descending);
}
 System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::GetEnumerableSorter(System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::OrderedEnumerable_2<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            "GetEnumerableSorter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method, next);
}
