#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot(T Item, int32_t SequenceNumber) noexcept : ::bs_hook::ValueTypeWrapper() {this->Item = Item;
this->SequenceNumber = SequenceNumber;
}
constexpr void GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__set_Item(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__get_Item() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__set_SequenceNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot::__get_SequenceNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__set__slots(::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>>>(value));
}
constexpr ::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__get__slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::System__Collections__Concurrent__ConcurrentQueue_1__Segment__Slot<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__set__slotsMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__get__slotsMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__set__headAndTail(System::Collections::Concurrent::PaddedHeadAndTail value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::PaddedHeadAndTail, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::PaddedHeadAndTail>(value));
}
constexpr System::Collections::Concurrent::PaddedHeadAndTail System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__get__headAndTail() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::PaddedHeadAndTail, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__set__preservedForObservation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__get__preservedForObservation() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__set__frozenForEnqueues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__get__frozenForEnqueues() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__set__nextSegment(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::__get__nextSegment() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::New_ctor(int32_t boundedLength)  {
System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(boundedLength))};
return o;
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::_ctor(int32_t boundedLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, boundedLength);
}
 int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::get_FreezeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(),
                            "get_FreezeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::EnsureFrozenForEnqueues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(),
                            "EnsureFrozenForEnqueues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::TryDequeue(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>::TryEnqueue(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(),
                            "TryEnqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set_head(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get_head() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set_tail(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get_tail() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set_tailTail(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get_tailTail() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set_headHead(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get_headHead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set___4__this(System::Collections::Concurrent::ConcurrentQueue_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::ConcurrentQueue_1<T>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::ConcurrentQueue_1<T>>(value));
}
constexpr System::Collections::Concurrent::ConcurrentQueue_1<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::ConcurrentQueue_1<T>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set__headTail_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get__headTail_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set__i_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set__s_5__4(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get__s_5__4() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__set__i_5__5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::__get__i_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::New_ctor(int32_t __1__state)  {
System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>(__1__state))};
return o;
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1___Enumerate_d__28<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Concurrent::IProducerConsumerCollection_1<T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator System::Collections::Concurrent::IProducerConsumerCollection_1<T>() const noexcept {
return System::Collections::Concurrent::IProducerConsumerCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__set__crossSegmentLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__crossSegmentLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__set__tail(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__tail() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__set__head(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__head() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Concurrent::ConcurrentQueue_1<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::New_ctor()  {
System::Collections::Concurrent::ConcurrentQueue_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::ConcurrentQueue_1<T>>())};
return o;
}
 void System::Collections::Concurrent::ConcurrentQueue_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 ::ArrayW<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentQueue_1<T>::GetCount(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> s, int32_t head, int32_t tail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, head, tail);
}
 int64_t System::Collections::Concurrent::ConcurrentQueue_1<T>::GetCount(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> head, int32_t headHead, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> tail, int32_t tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, head, headHead, tail, tailTail);
}
 void System::Collections::Concurrent::ConcurrentQueue_1<T>::CopyTo(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentQueue_1<T>::SnapForObservation(ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>> head, ByRef<int32_t> headHead, ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>> tail, ByRef<int32_t> tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "SnapForObservation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, head, headHead, tail, tailTail);
}
 T System::Collections::Concurrent::ConcurrentQueue_1<T>::GetItemWhenAvailable(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> segment, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "GetItemWhenAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, segment, i);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Concurrent::ConcurrentQueue_1<T>::Enumerate(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> head, int32_t headHead, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T> tail, int32_t tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentQueue_1__Segment<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method, head, headHead, tail, tailTail);
}
 void System::Collections::Concurrent::ConcurrentQueue_1<T>::Enqueue(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void System::Collections::Concurrent::ConcurrentQueue_1<T>::EnqueueSlow(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "EnqueueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryDequeue(ByRef<T> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryDequeueSlow(ByRef<T> item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentQueue_1<T>>::get(),
                            "TryDequeueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
