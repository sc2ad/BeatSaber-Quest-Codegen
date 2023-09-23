#pragma once
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::*)(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>, ::ArrayW<::bs_hook::Il2CppWrapperType>, ::ArrayW<int32_t>)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::__set__buckets(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>>(value));
}
constexpr ::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::__set__locks(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::__get__locks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::__set__countPerLock(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::__get__countPerLock() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "buckets", ty: "::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>", modifiers: "", def_value: None }, CppParam { name: "locks", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "countPerLock", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::System__Collections__Concurrent__ConcurrentDictionary_2__Tables(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> buckets, ::ArrayW<::bs_hook::Il2CppWrapperType> locks, ::ArrayW<int32_t> countPerLock)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Concurrent__ConcurrentDictionary_2__Tables>(buckets, locks, countPerLock))) {}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables::_ctor(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> buckets, ::ArrayW<::bs_hook::Il2CppWrapperType> locks, ::ArrayW<int32_t> countPerLock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buckets, locks, countPerLock);
}
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::*)(TKey, TValue, int32_t, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__set__key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TKey>(value));
}
constexpr TKey System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__get__key() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__set__value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__get__value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__set__next(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__get__next() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__set__hashcode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::__get__hashcode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "hashcode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>", modifiers: "", def_value: None }]
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::System__Collections__Concurrent__ConcurrentDictionary_2__Node(TKey key, TValue value, int32_t hashcode, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> next)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Concurrent__ConcurrentDictionary_2__Node>(key, value, hashcode, next))) {}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node::_ctor(TKey key, TValue value, int32_t hashcode, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value, hashcode, next);
}
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator.get_Entry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::DictionaryEntry (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::operator System::Collections::IDictionaryEnumerator() const noexcept {
return System::Collections::IDictionaryEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::__set__enumerator(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::__get__enumerator() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dictionary", ty: "System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>", modifiers: "", def_value: None }]
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> dictionary)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>(dictionary))) {}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::_ctor(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> dictionary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dictionary);
}
 System::Collections::DictionaryEntry System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::DictionaryEntry, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__DictionaryEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::*)(int32_t)>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey,TValue___get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<TKey,TValue> (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey,TValue___get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::*)()>(&System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__set___2__current(System::Collections::Generic::KeyValuePair_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(value));
}
constexpr System::Collections::Generic::KeyValuePair_2<TKey,TValue> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__get___2__current() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__set___4__this(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>>(value));
}
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__set__buckets_5__2(::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>>(value));
}
constexpr ::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__get__buckets_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__set__i_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__set__current_5__4(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::__get__current_5__4() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Node<TKey,TValue>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>(__1__state))) {}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::KeyValuePair_2<TKey,TValue> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey,TValue___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<TKey,TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2___GetEnumerator_d__35>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.IsValueWriteAtomic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::IsValueWriteAtomic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "IsValueWriteAtomic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Collections::Generic::IEqualityComparer_1<TKey>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TKey>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.InitializeFromCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::InitializeFromCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "InitializeFromCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(int32_t, int32_t, bool, System::Collections::Generic::IEqualityComparer_1<TKey>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TKey>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.TryAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, TValue)>(&System::Collections::Concurrent::ConcurrentDictionary_2::TryAdd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.ContainsKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey)>(&System::Collections::Concurrent::ConcurrentDictionary_2::ContainsKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.TryRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, ByRef<TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::TryRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.TryRemoveInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, ByRef<TValue>, bool, TValue)>(&System::Collections::Concurrent::ConcurrentDictionary_2::TryRemoveInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryRemoveInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.TryGetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, ByRef<TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::TryGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.TryGetValueInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, int32_t, ByRef<TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::TryGetValueInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryGetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.ToArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::ToArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.CopyToPairs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::CopyToPairs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "CopyToPairs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.CopyToEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::ArrayW<System::Collections::DictionaryEntry>, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::CopyToEntries)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "CopyToEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::DictionaryEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.CopyToObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::ArrayW<::bs_hook::Il2CppWrapperType>, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::CopyToObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "CopyToObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.TryAddInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, int32_t, TValue, bool, bool, ByRef<TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::TryAddInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryAddInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey)>(&System::Collections::Concurrent::ConcurrentDictionary_2::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, TValue)>(&System::Collections::Concurrent::ConcurrentDictionary_2::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.ThrowKeyNotFoundException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Concurrent::ConcurrentDictionary_2::ThrowKeyNotFoundException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ThrowKeyNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.ThrowKeyNullException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::ThrowKeyNullException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ThrowKeyNullException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetCountInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetCountInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetCountInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetOrAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, System::Func_2<TKey,TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetOrAdd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetOrAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetOrAdd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, TValue)>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetOrAdd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetOrAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_IDictionary_TKey,TValue__Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey, TValue)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_IDictionary_TKey,TValue__Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.IDictionary<TKey,TValue>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_IDictionary_TKey,TValue__Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(TKey)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_IDictionary_TKey,TValue__Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.IDictionary<TKey,TValue>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<TKey> (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::get_Keys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<TValue> (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::get_Values)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Collections::Generic::KeyValuePair_2<TKey,TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Collections::Generic::KeyValuePair_2<TKey,TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Collections::Generic::KeyValuePair_2<TKey,TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionaryEnumerator (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_get_IsFixedSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_IsFixedSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_Keys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_Values)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_IDictionary_set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Array, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GrowTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::GrowTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetBucket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetBucket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetBucket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetBucketAndLockNo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ByRef<int32_t>, ByRef<int32_t>, int32_t, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetBucketAndLockNo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetBucketAndLockNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.get_DefaultConcurrencyLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::get_DefaultConcurrencyLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_DefaultConcurrencyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.AcquireAllLocks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(ByRef<int32_t>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::AcquireAllLocks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "AcquireAllLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.AcquireLocks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(int32_t, int32_t, ByRef<int32_t>)>(&System::Collections::Concurrent::ConcurrentDictionary_2::AcquireLocks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "AcquireLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.ReleaseLocks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(int32_t, int32_t)>(&System::Collections::Concurrent::ConcurrentDictionary_2::ReleaseLocks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ReleaseLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<TKey> (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.GetValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<TValue> (System::Collections::Concurrent::ConcurrentDictionary_2::*)()>(&System::Collections::Concurrent::ConcurrentDictionary_2::GetValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.OnSerializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Runtime::Serialization::StreamingContext)>(&System::Collections::Concurrent::ConcurrentDictionary_2::OnSerializing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.OnSerialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Runtime::Serialization::StreamingContext)>(&System::Collections::Concurrent::ConcurrentDictionary_2::OnSerialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "OnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Collections::Concurrent::ConcurrentDictionary_2.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Concurrent::ConcurrentDictionary_2::*)(System::Runtime::Serialization::StreamingContext)>(&System::Collections::Concurrent::ConcurrentDictionary_2::OnDeserialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IDictionary_2<TKey,TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::Generic::IDictionary_2<TKey,TValue>() const noexcept {
return System::Collections::Generic::IDictionary_2<TKey,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IDictionary
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::IDictionary() const noexcept {
return System::Collections::IDictionary(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>() const noexcept {
return System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2::operator System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__tables(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> System::Collections::Concurrent::ConcurrentDictionary_2::__get__tables() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__comparer(System::Collections::Generic::IEqualityComparer_1<TKey> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEqualityComparer_1<TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEqualityComparer_1<TKey>>(value));
}
constexpr System::Collections::Generic::IEqualityComparer_1<TKey> System::Collections::Concurrent::ConcurrentDictionary_2::__get__comparer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEqualityComparer_1<TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__growLockArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::ConcurrentDictionary_2::__get__growLockArray() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__budget(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::ConcurrentDictionary_2::__get__budget() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__serializationArray(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(value));
}
constexpr ::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> System::Collections::Concurrent::ConcurrentDictionary_2::__get__serializationArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__serializationConcurrencyLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::ConcurrentDictionary_2::__get__serializationConcurrencyLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2::__set__serializationCapacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::ConcurrentDictionary_2::__get__serializationCapacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::__set_s_isValueWriteAtomic(bool value)  {
::cordl_internals::setStaticField<bool, "s_isValueWriteAtomic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get>(std::forward<bool>(value));
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::__get_s_isValueWriteAtomic()  {
return ::cordl_internals::getStaticField<bool, "s_isValueWriteAtomic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get>();
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::IsValueWriteAtomic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "IsValueWriteAtomic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 System::Collections::Concurrent::ConcurrentDictionary_2::ConcurrentDictionary_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConcurrentDictionary_2>())) {}
 void System::Collections::Concurrent::ConcurrentDictionary_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<TKey>", modifiers: "", def_value: None }]
 System::Collections::Concurrent::ConcurrentDictionary_2::ConcurrentDictionary_2(System::Collections::Generic::IEqualityComparer_1<TKey> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConcurrentDictionary_2>(comparer))) {}
 void System::Collections::Concurrent::ConcurrentDictionary_2::_ctor(System::Collections::Generic::IEqualityComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comparer);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::InitializeFromCollection(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "InitializeFromCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection);
}
// Ctor Parameters [CppParam { name: "concurrencyLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "growLockArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IEqualityComparer_1<TKey>", modifiers: "", def_value: None }]
 System::Collections::Concurrent::ConcurrentDictionary_2::ConcurrentDictionary_2(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, System::Collections::Generic::IEqualityComparer_1<TKey> comparer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConcurrentDictionary_2>(concurrencyLevel, capacity, growLockArray, comparer))) {}
 void System::Collections::Concurrent::ConcurrentDictionary_2::_ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray, System::Collections::Generic::IEqualityComparer_1<TKey> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEqualityComparer_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, concurrencyLevel, capacity, growLockArray, comparer);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::TryAdd(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::ContainsKey(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::TryRemove(TKey key, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::TryRemoveInternal(TKey key, ByRef<TValue> value, bool matchValue, TValue oldValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryRemoveInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value, matchValue, oldValue);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::TryGetValue(TKey key, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::TryGetValueInternal(TKey key, int32_t hashcode, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryGetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, hashcode, value);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___CopyTo(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 ::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> System::Collections::Concurrent::ConcurrentDictionary_2::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::CopyToPairs(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "CopyToPairs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::CopyToEntries(::ArrayW<System::Collections::DictionaryEntry> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "CopyToEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::DictionaryEntry>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::CopyToObjects(::ArrayW<::bs_hook::Il2CppWrapperType> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "CopyToObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> System::Collections::Concurrent::ConcurrentDictionary_2::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::TryAddInternal(TKey key, int32_t hashcode, TValue value, bool updateIfExists, bool acquireLock, ByRef<TValue> resultingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "TryAddInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, hashcode, value, updateIfExists, acquireLock, resultingValue);
}
 TValue System::Collections::Concurrent::ConcurrentDictionary_2::get_Item(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::set_Item(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::ThrowKeyNotFoundException(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ThrowKeyNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::ThrowKeyNullException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ThrowKeyNullException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentDictionary_2::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentDictionary_2::GetCountInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetCountInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue System::Collections::Concurrent::ConcurrentDictionary_2::GetOrAdd(TKey key, System::Func_2<TKey,TValue> valueFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetOrAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key, valueFactory);
}
 TValue System::Collections::Concurrent::ConcurrentDictionary_2::GetOrAdd(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetOrAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_IDictionary_TKey,TValue__Add(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.IDictionary<TKey,TValue>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_IDictionary_TKey,TValue__Remove(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.IDictionary<TKey,TValue>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 System::Collections::Generic::ICollection_1<TKey> System::Collections::Concurrent::ConcurrentDictionary_2::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::ICollection_1<TKey>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::ICollection_1<TValue> System::Collections::Concurrent::ConcurrentDictionary_2::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::ICollection_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Add(System::Collections::Generic::KeyValuePair_2<TKey,TValue> keyValuePair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyValuePair);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Contains(System::Collections::Generic::KeyValuePair_2<TKey,TValue> keyValuePair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, keyValuePair);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey,TValue___Remove(System::Collections::Generic::KeyValuePair_2<TKey,TValue> keyValuePair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, keyValuePair);
}
 System::Collections::IEnumerator System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_Contains(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 System::Collections::IDictionaryEnumerator System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionaryEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ICollection System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_Remove(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 System::Collections::ICollection System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_get_Item(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_IDictionary_set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.IDictionary.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 bool System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentDictionary_2::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::GrowTable(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue> tables)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentDictionary_2__Tables<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tables);
}
 int32_t System::Collections::Concurrent::ConcurrentDictionary_2::GetBucket(int32_t hashcode, int32_t bucketCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetBucket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hashcode, bucketCount);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::GetBucketAndLockNo(int32_t hashcode, ByRef<int32_t> bucketNo, ByRef<int32_t> lockNo, int32_t bucketCount, int32_t lockCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetBucketAndLockNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hashcode, bucketNo, lockNo, bucketCount, lockCount);
}
 int32_t System::Collections::Concurrent::ConcurrentDictionary_2::get_DefaultConcurrencyLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "get_DefaultConcurrencyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::AcquireAllLocks(ByRef<int32_t> locksAcquired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "AcquireAllLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, locksAcquired);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::AcquireLocks(int32_t fromInclusive, int32_t toExclusive, ByRef<int32_t> locksAcquired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "AcquireLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromInclusive, toExclusive, locksAcquired);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::ReleaseLocks(int32_t fromInclusive, int32_t toExclusive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "ReleaseLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromInclusive, toExclusive);
}
 System::Collections::ObjectModel::ReadOnlyCollection_1<TKey> System::Collections::Concurrent::ConcurrentDictionary_2::GetKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ObjectModel::ReadOnlyCollection_1<TValue> System::Collections::Concurrent::ConcurrentDictionary_2::GetValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::OnSerializing(System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::OnSerialized(System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "OnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Collections::Concurrent::ConcurrentDictionary_2::OnDeserialized(System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentDictionary_2>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
