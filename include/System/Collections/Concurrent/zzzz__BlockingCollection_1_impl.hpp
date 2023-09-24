#pragma once
#include "System/Collections/Concurrent/zzzz__BlockingCollection_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  System::Collections::Concurrent::BlockingCollection_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Collections::Concurrent::BlockingCollection_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::ICollection
constexpr  System::Collections::Concurrent::BlockingCollection_1<T>::operator System::Collections::ICollection() const noexcept {
return System::Collections::ICollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Collections::Concurrent::BlockingCollection_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr  System::Collections::Concurrent::BlockingCollection_1<T>::operator System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__collection(System::Collections::Concurrent::IProducerConsumerCollection_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::IProducerConsumerCollection_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::IProducerConsumerCollection_1<T>>(value));
}
constexpr System::Collections::Concurrent::IProducerConsumerCollection_1<T> System::Collections::Concurrent::BlockingCollection_1<T>::__get__collection() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::IProducerConsumerCollection_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__boundedCapacity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::BlockingCollection_1<T>::__get__boundedCapacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__freeNodes(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Collections::Concurrent::BlockingCollection_1<T>::__get__freeNodes() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__occupiedNodes(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Collections::Concurrent::BlockingCollection_1<T>::__get__occupiedNodes() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__isDisposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Collections::Concurrent::BlockingCollection_1<T>::__get__isDisposed() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__consumersCancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource System::Collections::Concurrent::BlockingCollection_1<T>::__get__consumersCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__producersCancellationTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource System::Collections::Concurrent::BlockingCollection_1<T>::__get__producersCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Collections::Concurrent::BlockingCollection_1<T>::__set__currentAdders(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::BlockingCollection_1<T>::__get__currentAdders() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Collections::Concurrent::BlockingCollection_1<T>::get_IsAddingCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "get_IsAddingCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::BlockingCollection_1<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Collections::Concurrent::BlockingCollection_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Concurrent::BlockingCollection_1<T> System::Collections::Concurrent::BlockingCollection_1<T>::New_ctor()  {
System::Collections::Concurrent::BlockingCollection_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::BlockingCollection_1<T>>())};
return o;
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Concurrent::BlockingCollection_1<T> System::Collections::Concurrent::BlockingCollection_1<T>::New_ctor(System::Collections::Concurrent::IProducerConsumerCollection_1<T> collection)  {
System::Collections::Concurrent::BlockingCollection_1<T> o{THROW_UNLESS(::il2cpp_utils::New<System::Collections::Concurrent::BlockingCollection_1<T>>(collection))};
return o;
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::_ctor(System::Collections::Concurrent::IProducerConsumerCollection_1<T> collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::IProducerConsumerCollection_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::Initialize(System::Collections::Concurrent::IProducerConsumerCollection_1<T> collection, int32_t boundedCapacity, int32_t collectionCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Concurrent::IProducerConsumerCollection_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection, boundedCapacity, collectionCount);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 bool System::Collections::Concurrent::BlockingCollection_1<T>::TryAddWithNoTimeValidation(T item, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "TryAddWithNoTimeValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, millisecondsTimeout, cancellationToken);
}
 T System::Collections::Concurrent::BlockingCollection_1<T>::Take()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "Take",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Collections::Concurrent::BlockingCollection_1<T>::TryTake(ByRef<T> item, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, millisecondsTimeout, cancellationToken);
}
 bool System::Collections::Concurrent::BlockingCollection_1<T>::TryTakeWithNoTimeValidation(ByRef<T> item, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken, System::Threading::CancellationTokenSource combinedTokenSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "TryTakeWithNoTimeValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, item, millisecondsTimeout, cancellationToken, combinedTokenSource);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::CompleteAdding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "CompleteAdding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::CancelWaitingConsumers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "CancelWaitingConsumers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::CancelWaitingProducers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "CancelWaitingProducers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_ICollection_CopyTo(System::Array array, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, index);
}
 System::Collections::Generic::IEnumerator_1<T> System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator System::Collections::Concurrent::BlockingCollection_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::ValidateMillisecondsTimeout(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "ValidateMillisecondsTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
 void System::Collections::Concurrent::BlockingCollection_1<T>::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Concurrent::BlockingCollection_1<T>>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
