#pragma once
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__headIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__headIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__tailIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__tailIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__mask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__addTakeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__addTakeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__stealCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__stealCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__currentOp(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__currentOp() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__frozen(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__frozen() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__nextQueue(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__nextQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__set__ownerThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::__get__ownerThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::New_ctor(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> nextQueue)  {
System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>(nextQueue))};
return o;
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::_ctor(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> nextQueue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nextQueue);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::LocalPush(T item, ByRef<int64_t> emptyToNonEmptyListTransitionCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            "LocalPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item, emptyToNonEmptyListTransitionCount);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::LocalClear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            "LocalClear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::TryLocalPop(ByRef<T> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            "TryLocalPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::TrySteal(ByRef<T> result, bool take)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result, take);
}
 int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::DangerousCopyTo(::ArrayW<T> array, int32_t arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            "DangerousCopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, array, arrayIndex);
}
 int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>::get_DangerousCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(),
                            "get_DangerousCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::__set__array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::__set__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T> System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::New_ctor(::ArrayW<T> array)  {
System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>(array))};
return o;
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::_ctor(::ArrayW<T> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
 bool System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Concurrent::IProducerConsumerCollection_1<T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator System::Collections::Concurrent::IProducerConsumerCollection_1<T>() const noexcept {
return System::Collections::Concurrent::IProducerConsumerCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__locals(System::Threading::ThreadLocal_1<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>> value)  {
::cordl_internals::setInstanceField<System::Threading::ThreadLocal_1<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ThreadLocal_1<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>>(value));
}
constexpr System::Threading::ThreadLocal_1<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>> System::Collections::Concurrent::ConcurrentBag_1<T>::__get__locals() const {
return ::cordl_internals::getInstanceField<System::Threading::ThreadLocal_1<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__workStealingQueues(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>(value));
}
constexpr System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> System::Collections::Concurrent::ConcurrentBag_1<T>::__get__workStealingQueues() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__emptyToNonEmptyListTransitionCount(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Collections::Concurrent::ConcurrentBag_1<T>::__get__emptyToNonEmptyListTransitionCount() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Concurrent::ConcurrentBag_1<T> System::Collections::Concurrent::ConcurrentBag_1<T>::New_ctor()  {
System::Collections::Concurrent::ConcurrentBag_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::ConcurrentBag_1<T>>())};
return o;
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::ConcurrentBag_1<T>::TryTake(ByRef<T> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> System::Collections::Concurrent::ConcurrentBag_1<T>::GetCurrentThreadWorkStealingQueue(bool forceCreate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "GetCurrentThreadWorkStealingQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, false>(const_cast<void*>(instance), ___internal_method, forceCreate);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> System::Collections::Concurrent::ConcurrentBag_1<T>::CreateWorkStealingQueueForCurrentThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "CreateWorkStealingQueueForCurrentThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> System::Collections::Concurrent::ConcurrentBag_1<T>::GetUnownedWorkStealingQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "GetUnownedWorkStealingQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentBag_1<T>::TrySteal(ByRef<T> result, bool take)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result, take);
}
 bool System::Collections::Concurrent::ConcurrentBag_1<T>::TryStealFromTo(System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> startInclusive, System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> endExclusive, ByRef<T> result, bool take)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "TryStealFromTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, startInclusive, endExclusive, result, take);
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::CopyTo(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::CopyFromEachQueueToArray(::ArrayW<T> array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "CopyFromEachQueueToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 ::ArrayW<T> System::Collections::Concurrent::ConcurrentBag_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Concurrent::ConcurrentBag_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::get_DangerousCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "get_DangerousCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::ConcurrentBag_1<T>::get_GlobalQueuesLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "get_GlobalQueuesLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::FreezeBag(ByRef<bool> lockTaken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "FreezeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lockTaken);
}
 void System::Collections::Concurrent::ConcurrentBag_1<T>::UnfreezeBag(bool lockTaken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::ConcurrentBag_1<T>>::get(),
                            "UnfreezeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lockTaken);
}
