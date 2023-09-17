#pragma once
#include "System/Linq/zzzz__EnumerableSorter_1_impl.hpp"
namespace {
#include "System/Linq/zzzz__EnumerableSorter_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::System::Func_2<TElement,TKey>, ::System::Collections::Generic::IComparer_1<TKey>, bool, ::System::Linq::EnumerableSorter_1<TElement>)>(&::System::Linq::EnumerableSorter_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::ArrayW<TElement>, int32_t)>(&::System::Linq::EnumerableSorter_2::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2::__set_keySelector(::System::Func_2<TElement,TKey> value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,TKey>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<TElement,TKey>>(value));
}
constexpr ::System::Func_2<TElement,TKey> ::System::Linq::EnumerableSorter_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,TKey>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_comparer(::System::Collections::Generic::IComparer_1<TKey> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<TKey>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<TKey> ::System::Linq::EnumerableSorter_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_next(::System::Linq::EnumerableSorter_1<TElement> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<TElement>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<TElement> ::System::Linq::EnumerableSorter_2::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_keys(::ArrayW<TKey> value)  {
::cordl_internals::setInstanceField<::ArrayW<TKey>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<TKey>>(value));
}
constexpr ::ArrayW<TKey> ::System::Linq::EnumerableSorter_2::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<TKey>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<TElement,TKey>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2::EnumerableSorter_2(::System::Func_2<TElement,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  : ::System::Linq::EnumerableSorter_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2::_ctor(::System::Func_2<TElement,TKey> keySelector, ::System::Collections::Generic::IComparer_1<TKey> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2::ComputeKeys(::ArrayW<TElement> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<int32_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<int32_t,float_t>::*)(::System::Func_2<int32_t,float_t>, ::System::Collections::Generic::IComparer_1<float_t>, bool, ::System::Linq::EnumerableSorter_1<int32_t>)>(&::System::Linq::EnumerableSorter_2<int32_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<int32_t,float_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<int32_t,float_t>::*)(::ArrayW<int32_t>, int32_t)>(&::System::Linq::EnumerableSorter_2<int32_t,float_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<int32_t,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<int32_t,float_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<int32_t,float_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<int32_t,float_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<int32_t,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_keySelector(::System::Func_2<int32_t,float_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<int32_t,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<int32_t,float_t>>(value));
}
constexpr ::System::Func_2<int32_t,float_t> ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<int32_t,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_comparer(::System::Collections::Generic::IComparer_1<float_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<float_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<float_t> ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_next(::System::Linq::EnumerableSorter_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<int32_t>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<int32_t> ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__set_keys(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::System::Linq::EnumerableSorter_2<int32_t,float_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<int32_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<int32_t>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<int32_t,float_t>::EnumerableSorter_2(::System::Func_2<int32_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<int32_t> next)  : ::System::Linq::EnumerableSorter_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::_ctor(::System::Func_2<int32_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<int32_t> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<int32_t,float_t>::ComputeKeys(::ArrayW<int32_t> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<int32_t,float_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<int32_t,float_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<float_t,float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<float_t,float_t>::*)(::System::Func_2<float_t,float_t>, ::System::Collections::Generic::IComparer_1<float_t>, bool, ::System::Linq::EnumerableSorter_1<float_t>)>(&::System::Linq::EnumerableSorter_2<float_t,float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<float_t,float_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<float_t,float_t>::*)(::ArrayW<float_t>, int32_t)>(&::System::Linq::EnumerableSorter_2<float_t,float_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<float_t,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<float_t,float_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<float_t,float_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<float_t,float_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<float_t,float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<float_t,float_t>::__set_keySelector(::System::Func_2<float_t,float_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<float_t,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<float_t,float_t>>(value));
}
constexpr ::System::Func_2<float_t,float_t> ::System::Linq::EnumerableSorter_2<float_t,float_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<float_t,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<float_t,float_t>::__set_comparer(::System::Collections::Generic::IComparer_1<float_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<float_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<float_t> ::System::Linq::EnumerableSorter_2<float_t,float_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<float_t,float_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<float_t,float_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<float_t,float_t>::__set_next(::System::Linq::EnumerableSorter_1<float_t> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<float_t>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<float_t> ::System::Linq::EnumerableSorter_2<float_t,float_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<float_t,float_t>::__set_keys(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::System::Linq::EnumerableSorter_2<float_t,float_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<float_t,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<float_t>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<float_t,float_t>::EnumerableSorter_2(::System::Func_2<float_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<float_t> next)  : ::System::Linq::EnumerableSorter_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<float_t,float_t>::_ctor(::System::Func_2<float_t,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<float_t> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<float_t,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<float_t,float_t>::ComputeKeys(::ArrayW<float_t> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<float_t,float_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<float_t,float_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::System::Func_2<TElement,int32_t>, ::System::Collections::Generic::IComparer_1<int32_t>, bool, ::System::Linq::EnumerableSorter_1<TElement>)>(&::System::Linq::EnumerableSorter_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::ArrayW<TElement>, int32_t)>(&::System::Linq::EnumerableSorter_2::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2::__set_keySelector(::System::Func_2<TElement,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<TElement,int32_t>>(value));
}
constexpr ::System::Func_2<TElement,int32_t> ::System::Linq::EnumerableSorter_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t> ::System::Linq::EnumerableSorter_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_next(::System::Linq::EnumerableSorter_1<TElement> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<TElement>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<TElement> ::System::Linq::EnumerableSorter_2::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_keys(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Linq::EnumerableSorter_2::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<TElement,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2::EnumerableSorter_2(::System::Func_2<TElement,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  : ::System::Linq::EnumerableSorter_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2::_ctor(::System::Func_2<TElement,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2::ComputeKeys(::ArrayW<TElement> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::System::Func_2<TElement,float_t>, ::System::Collections::Generic::IComparer_1<float_t>, bool, ::System::Linq::EnumerableSorter_1<TElement>)>(&::System::Linq::EnumerableSorter_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::ArrayW<TElement>, int32_t)>(&::System::Linq::EnumerableSorter_2::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2::__set_keySelector(::System::Func_2<TElement,float_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<TElement,float_t>>(value));
}
constexpr ::System::Func_2<TElement,float_t> ::System::Linq::EnumerableSorter_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_comparer(::System::Collections::Generic::IComparer_1<float_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<float_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<float_t> ::System::Linq::EnumerableSorter_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_next(::System::Linq::EnumerableSorter_1<TElement> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<TElement>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<TElement> ::System::Linq::EnumerableSorter_2::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_keys(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::System::Linq::EnumerableSorter_2::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<TElement,float_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2::EnumerableSorter_2(::System::Func_2<TElement,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  : ::System::Linq::EnumerableSorter_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2::_ctor(::System::Func_2<TElement,float_t> keySelector, ::System::Collections::Generic::IComparer_1<float_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2::ComputeKeys(::ArrayW<TElement> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::System::Func_2<TElement,uint32_t>, ::System::Collections::Generic::IComparer_1<uint32_t>, bool, ::System::Linq::EnumerableSorter_1<TElement>)>(&::System::Linq::EnumerableSorter_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2::*)(::ArrayW<TElement>, int32_t)>(&::System::Linq::EnumerableSorter_2::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2::__set_keySelector(::System::Func_2<TElement,uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<TElement,uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<TElement,uint32_t>>(value));
}
constexpr ::System::Func_2<TElement,uint32_t> ::System::Linq::EnumerableSorter_2::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TElement,uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_comparer(::System::Collections::Generic::IComparer_1<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<uint32_t> ::System::Linq::EnumerableSorter_2::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_next(::System::Linq::EnumerableSorter_1<TElement> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<TElement>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<TElement> ::System::Linq::EnumerableSorter_2::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<TElement>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2::__set_keys(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> ::System::Linq::EnumerableSorter_2::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<TElement,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<TElement>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2::EnumerableSorter_2(::System::Func_2<TElement,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  : ::System::Linq::EnumerableSorter_1<TElement>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2::_ctor(::System::Func_2<TElement,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<TElement> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2::ComputeKeys(::ArrayW<TElement> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>, ::System::Collections::Generic::IComparer_1<int32_t>, bool, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_keySelector(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>(value));
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t> ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__set_keys(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::EnumerableSorter_2(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next)  : ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::_ctor(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::ComputeKeys(::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>, ::System::Collections::Generic::IComparer_1<uint32_t>, bool, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_keySelector(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>(value));
}
constexpr ::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<uint32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<uint32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<uint32_t> ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_next(::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__set_keys(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::EnumerableSorter_2(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next)  : ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::_ctor(::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t> keySelector, ::System::Collections::Generic::IComparer_1<uint32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::ComputeKeys(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord,uint32_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::*)(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>, ::System::Collections::Generic::IComparer_1<int32_t>, bool, ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>)>(&::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::*)(::ArrayW<::Zenject::____Zenject__DisposableManager__DisposableInfo>, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__set_keySelector(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>(value));
}
constexpr ::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__set_keys(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::EnumerableSorter_2(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> next)  : ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::_ctor(::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__DisposableManager__DisposableInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::ComputeKeys(::ArrayW<::Zenject::____Zenject__DisposableManager__DisposableInfo> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::____Zenject__DisposableManager__DisposableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__DisposableManager__DisposableInfo,int32_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::*)(::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>, ::System::Collections::Generic::IComparer_1<int32_t>, bool, ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>)>(&::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::*)(::ArrayW<::Zenject::____Zenject__PoolableManager__PoolableInfo>, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__set_keySelector(::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>(value));
}
constexpr ::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__set_keys(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::EnumerableSorter_2(::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> next)  : ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::_ctor(::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::Zenject::____Zenject__PoolableManager__PoolableInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::ComputeKeys(::ArrayW<::Zenject::____Zenject__PoolableManager__PoolableInfo> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::____Zenject__PoolableManager__PoolableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::Zenject::____Zenject__PoolableManager__PoolableInfo,int32_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::*)(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>, ::System::Collections::Generic::IComparer_1<int32_t>, bool, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>)>(&::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::*)(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, int32_t)>(&::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::*)(int32_t, int32_t)>(&::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_keySelector(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>(value));
}
constexpr ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_keySelector() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IComparer_1<int32_t>>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<int32_t> ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_descending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_descending() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_next(::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__set_keys(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::__get_keys() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keySelector", ty: "::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IComparer_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "descending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }]
 ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::EnumerableSorter_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next)  : ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_2>(keySelector, comparer, descending, next))) {}
 void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::_ctor(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t> keySelector, ::System::Collections::Generic::IComparer_1<int32_t> comparer, bool descending, ::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keySelector, comparer, descending, next);
}
 void ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::ComputeKeys(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t ::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>,int32_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
} // end anonymous namespace
