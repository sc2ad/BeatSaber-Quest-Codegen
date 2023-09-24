#pragma once
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__ShuffleExtensions_def.hpp"
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::ShuffleExtensions::Shuffle(System::Collections::Generic::IEnumerable_1<T> source, System::Random random)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShuffleExtensions>::get(),
                        "Shuffle",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Random>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, source, random);
}
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::ShuffleExtensions::PickRandomElementsWithTombstone(System::Collections::Generic::IEnumerable_1<T> source, int32_t limit, int32_t count, System::Random random, T tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShuffleExtensions>::get(),
                        "PickRandomElementsWithTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Random>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, source, limit, count, random, tombstone);
}
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::ShuffleExtensions::TakeWithTombstone(System::Collections::Generic::IEnumerable_1<T> source, int32_t limit, T tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShuffleExtensions>::get(),
                        "TakeWithTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, source, limit, tombstone);
}
template<typename T1,typename T2>
 System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>> GlobalNamespace::ShuffleExtensions::ZipSkipTombstone(System::Collections::Generic::IEnumerable_1<T1> collection1, System::Collections::Generic::IEnumerable_1<T2> collection2, T2 collection2Tombstone)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ShuffleExtensions>::get(),
                        "ZipSkipTombstone",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T1>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<T2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>, false>(nullptr, ___internal_method, collection1, collection2, collection2Tombstone);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_random(System::Random value)  {
::cordl_internals::setInstanceField<System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Random>(value));
}
constexpr System::Random GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_random() const {
return ::cordl_internals::getInstanceField<System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__random(System::Random value)  {
::cordl_internals::setInstanceField<System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Random>(value));
}
constexpr System::Random GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__random() const {
return ::cordl_internals::getInstanceField<System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__index_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__picked_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__picked_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___7__wrap3(System::Collections::Generic::IEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_random(System::Random value)  {
::cordl_internals::setInstanceField<System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Random>(value));
}
constexpr System::Random GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_random() const {
return ::cordl_internals::getInstanceField<System::Random, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__random(System::Random value)  {
::cordl_internals::setInstanceField<System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Random>(value));
}
constexpr System::Random GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__random() const {
return ::cordl_internals::getInstanceField<System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set_tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___3__tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__index_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__index_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set__picked_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get__picked_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__set___7__wrap3(System::Collections::Generic::IEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___PickRandomElementsWithTombstone_d__1_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__enumerator_5__2(System::Collections::Generic::IEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__enumerator_5__2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__index_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__index_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__source(System::Collections::Generic::IEnumerable_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__source() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__limit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__limit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set_tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get_tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set___3__tombstone(T value)  {
::cordl_internals::setInstanceField<T, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get___3__tombstone() const {
return ::cordl_internals::getInstanceField<T, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__enumerator_5__2(System::Collections::Generic::IEnumerator_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__enumerator_5__2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__set__index_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__get__index_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___TakeWithTombstone_d__2_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___2__current(System::ValueTuple_2<T1,T2> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<T1,T2>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ValueTuple_2<T1,T2>>(value));
}
constexpr System::ValueTuple_2<T1,T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___2__current() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<T1,T2>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection1(System::Collections::Generic::IEnumerable_1<T1> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T1>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T1> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection1(System::Collections::Generic::IEnumerable_1<T1> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T1>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T1> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection2(System::Collections::Generic::IEnumerable_1<T2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T2>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection2(System::Collections::Generic::IEnumerable_1<T2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T2>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection2Tombstone(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection2Tombstone(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set__enum1_5__2(System::Collections::Generic::IEnumerator_1<T1> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T1>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T1>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T1> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum1_5__2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T1>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set__enum2_5__3(System::Collections::Generic::IEnumerator_1<T2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T2>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum2_5__3() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ValueTuple_2<T1,T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_Generic_IEnumerator_(T1,T2)__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<T1,T2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::ValueTuple_2<T1,T2>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___2__current(System::ValueTuple_2<T1,T2> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_2<T1,T2>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ValueTuple_2<T1,T2>>(value));
}
constexpr System::ValueTuple_2<T1,T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___2__current() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_2<T1,T2>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection1(System::Collections::Generic::IEnumerable_1<T1> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T1>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T1> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection1(System::Collections::Generic::IEnumerable_1<T1> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T1>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T1> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T1>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection2(System::Collections::Generic::IEnumerable_1<T2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T2>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection2(System::Collections::Generic::IEnumerable_1<T2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerable_1<T2>>(value));
}
constexpr System::Collections::Generic::IEnumerable_1<T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerable_1<T2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set_collection2Tombstone(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get_collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set___3__collection2Tombstone(T2 value)  {
::cordl_internals::setInstanceField<T2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T2>(value));
}
constexpr T2 GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get___3__collection2Tombstone() const {
return ::cordl_internals::getInstanceField<T2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set__enum1_5__2(System::Collections::Generic::IEnumerator_1<T1> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T1>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T1>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T1> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum1_5__2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T1>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__set__enum2_5__3(System::Collections::Generic::IEnumerator_1<T2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<T2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<T2>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__get__enum2_5__3() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<T2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ValueTuple_2<T1,T2> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_Generic_IEnumerator_(T1,T2)__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.Generic.IEnumerator<(T1,T2)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<T1,T2>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>> GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_Generic_IEnumerable_(T1,T2)__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.Generic.IEnumerable<(T1,T2)>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<T1,T2>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ShuffleExtensions___ZipSkipTombstone_d__3_2<T1,T2>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
