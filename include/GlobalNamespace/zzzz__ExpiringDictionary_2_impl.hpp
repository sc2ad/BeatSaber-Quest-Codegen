#pragma once
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::__set_key(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TKey>(value));
}
constexpr TKey GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::__set_value(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::__set_expireTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::__get_expireTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::New_ctor()  {
GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr  GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::operator System::Collections::Generic::IEnumerator_1<TValue>() const noexcept {
return System::Collections::Generic::IEnumerator_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___2__current(TValue value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TValue>(value));
}
constexpr TValue GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___2__current() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___4__this(GlobalNamespace::ExpiringDictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<TKey,TValue> GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___7__wrap1(System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue> GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_Collections_Generic_IEnumerator_TValue__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            "System.Collections.Generic.IEnumerator<TValue>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr  GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::operator System::Collections::Generic::IEnumerable_1<TValue>() const noexcept {
return System::Collections::Generic::IEnumerable_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__timeProvider(BGNet::Core::ITimeProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITimeProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITimeProvider>(value));
}
constexpr BGNet::Core::ITimeProvider GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITimeProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__expirationLengthMs(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__expirationLengthMs() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__expirationQueue(GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>>(value));
}
constexpr GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__expirationQueue() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OrderedSet_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__entryLookup(System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__entryLookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<TKey,GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__reusableEntries(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__reusableEntries() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ExpiringDictionary_2<TKey,TValue> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::New_ctor(BGNet::Core::ITimeProvider timeProvider, int64_t expirationLengthMs)  {
GlobalNamespace::ExpiringDictionary_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>(timeProvider, expirationLengthMs))};
return o;
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::_ctor(BGNet::Core::ITimeProvider timeProvider, int64_t expirationLengthMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, expirationLengthMs);
}
 int32_t GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::CompareEntries(GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> a, GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "CompareEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::RemoveExpiredEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "RemoveExpiredEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<TValue> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<TValue> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Enumerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::ContainsKey(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::TryGetValue(TKey key, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::TryGetValueAndResetExpiration(TKey key, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "TryGetValueAndResetExpiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Remove(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::ResetExpiration(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "ResetExpiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Add(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 TValue GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Get(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Set(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 TValue GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::get_Item(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::set_Item(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::GetEntry(TKey key, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "GetEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::ReleaseEntry(GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue> entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExpiringDictionary_2<TKey,TValue>>::get(),
                            "ReleaseEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ExpiringDictionary_2__Entry<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, entry);
}
