#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DictionaryWrapper_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DictionaryWrapper_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedDictionary_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr  Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::operator System::Collections::IDictionaryEnumerator() const {
return System::Collections::IDictionaryEnumerator(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::operator System::Collections::IEnumerator() const {
return System::Collections::IEnumerator(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_e", ty: "System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>", modifiers: "", def_value: Some("csnull") }]
constexpr Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> _e) noexcept : ::bs_hook::ValueTypeWrapper() {this->_e = _e;
}
constexpr void Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::__set__e(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>, 0x0>(this->__instance, std::forward<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::__get__e() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>, 0x0>(this->__instance);
}
 void Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::_ctor(System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>> e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, e);
}
 System::Collections::DictionaryEntry Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::DictionaryEntry, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2__DictionaryEnumerator_2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::__set___9(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> value)  {
::cordl_internals::setStaticField<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>::get>(std::forward<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>(value));
}
 Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::__get___9()  {
return ::cordl_internals::getStaticField<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>::get>();
}
 void Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::__set___9__25_0(System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>::get>(std::forward<System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(value));
}
 System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>> Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::__get___9__25_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::DictionaryEntry,System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>::get>();
}
 Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::New_ctor()  {
Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>())};
return o;
}
 void Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::KeyValuePair_2<TKey,TValue> Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>::_GetEnumerator_b__25_0(System::Collections::DictionaryEntry de)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__DictionaryWrapper_2____c<TKey,TValue>>::get(),
                            "<GetEnumerator>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::DictionaryEntry>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<TKey,TValue>, false>(const_cast<void*>(instance), ___internal_method, de);
}
/// @brief Convert operator to System::Collections::Generic::IDictionary_2<TKey,TValue>
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator System::Collections::Generic::IDictionary_2<TKey,TValue>() const noexcept {
return System::Collections::Generic::IDictionary_2<TKey,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Newtonsoft::Json::Utilities::IWrappedDictionary
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator Newtonsoft::Json::Utilities::IWrappedDictionary() const noexcept {
return Newtonsoft::Json::Utilities::IWrappedDictionary(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IDictionary
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator System::Collections::IDictionary() const noexcept {
return System::Collections::IDictionary(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::__set__dictionary(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::__get__dictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::__set__genericDictionary(System::Collections::Generic::IDictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IDictionary_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IDictionary_2<TKey,TValue>>(value));
}
constexpr System::Collections::Generic::IDictionary_2<TKey,TValue> Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::__get__genericDictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IDictionary_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::__set__syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue> Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::New_ctor(System::Collections::IDictionary dictionary)  {
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>(dictionary))};
return o;
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::_ctor(System::Collections::IDictionary dictionary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dictionary);
}
 Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue> Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::New_ctor(System::Collections::Generic::IDictionary_2<TKey,TValue> dictionary)  {
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>(dictionary))};
return o;
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::_ctor(System::Collections::Generic::IDictionary_2<TKey,TValue> dictionary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IDictionary_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dictionary);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Add(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::ContainsKey(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 System::Collections::Generic::ICollection_1<TKey> Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::ICollection_1<TKey>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Remove(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::TryGetValue(TKey key, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 System::Collections::Generic::ICollection_1<TValue> Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::ICollection_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::get_Item(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::set_Item(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Add(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Contains(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::CopyTo(::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 int32_t Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Remove(System::Collections::Generic::KeyValuePair_2<TKey,TValue> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>> Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_Add(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_get_Item(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_set_Item(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 System::Collections::IDictionaryEnumerator Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionaryEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_Contains(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ICollection Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::Remove(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 System::Collections::ICollection Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_IDictionary_get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.IDictionary.get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>::get_UnderlyingDictionary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,TValue>>::get(),
                            "get_UnderlyingDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
