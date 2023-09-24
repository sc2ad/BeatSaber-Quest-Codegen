#pragma once
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<T>
constexpr  Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::operator System::Collections::Generic::IEnumerator_1<T>() const noexcept {
return System::Collections::Generic::IEnumerator_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__set___2__current(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__set___4__this(Priority_Queue::StablePriorityQueue_1<T> value)  {
::cordl_internals::setInstanceField<Priority_Queue::StablePriorityQueue_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Priority_Queue::StablePriorityQueue_1<T>>(value));
}
constexpr Priority_Queue::StablePriorityQueue_1<T> Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<Priority_Queue::StablePriorityQueue_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__set__i_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T> Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::New_ctor(int32_t __1__state)  {
Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>(__1__state))};
return o;
}
 void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__StablePriorityQueue_1___GetEnumerator_d__22<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>
constexpr  Priority_Queue::StablePriorityQueue_1<T>::operator Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>() const noexcept {
return Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<T,float_t>
constexpr  Priority_Queue::StablePriorityQueue_1<T>::operator Priority_Queue::IPriorityQueue_2<T,float_t>() const noexcept {
return Priority_Queue::IPriorityQueue_2<T,float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr  Priority_Queue::StablePriorityQueue_1<T>::operator System::Collections::Generic::IEnumerable_1<T>() const noexcept {
return System::Collections::Generic::IEnumerable_1<T>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Priority_Queue::StablePriorityQueue_1<T>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::StablePriorityQueue_1<T>::__set__numNodes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::StablePriorityQueue_1<T>::__get__numNodes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::StablePriorityQueue_1<T>::__set__nodes(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> Priority_Queue::StablePriorityQueue_1<T>::__get__nodes() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::StablePriorityQueue_1<T>::__set__numNodesEverEnqueued(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Priority_Queue::StablePriorityQueue_1<T>::__get__numNodesEverEnqueued() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Priority_Queue::StablePriorityQueue_1<T> Priority_Queue::StablePriorityQueue_1<T>::New_ctor(int32_t maxNodes)  {
Priority_Queue::StablePriorityQueue_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::StablePriorityQueue_1<T>>(maxNodes))};
return o;
}
 void Priority_Queue::StablePriorityQueue_1<T>::_ctor(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 int32_t Priority_Queue::StablePriorityQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Priority_Queue::StablePriorityQueue_1<T>::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "get_MaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::StablePriorityQueue_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::StablePriorityQueue_1<T>::Contains(T node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::StablePriorityQueue_1<T>::Enqueue(T node, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, priority);
}
 void Priority_Queue::StablePriorityQueue_1<T>::CascadeUp(T node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "CascadeUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::StablePriorityQueue_1<T>::CascadeDown(T node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "CascadeDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 bool Priority_Queue::StablePriorityQueue_1<T>::HasHigherPriority(T higher, T lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "HasHigherPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, higher, lower);
}
 T Priority_Queue::StablePriorityQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::StablePriorityQueue_1<T>::Resize(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 T Priority_Queue::StablePriorityQueue_1<T>::get_First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::StablePriorityQueue_1<T>::UpdatePriority(T node, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, priority);
}
 void Priority_Queue::StablePriorityQueue_1<T>::OnNodeUpdated(T node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "OnNodeUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::StablePriorityQueue_1<T>::Remove(T node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::StablePriorityQueue_1<T>::ResetNode(T node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "ResetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 System::Collections::Generic::IEnumerator_1<T> Priority_Queue::StablePriorityQueue_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator Priority_Queue::StablePriorityQueue_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::StablePriorityQueue_1<T>::IsValidQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::StablePriorityQueue_1<T>>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
