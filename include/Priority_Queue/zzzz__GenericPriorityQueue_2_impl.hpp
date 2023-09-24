#pragma once
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TItem>
constexpr  Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::operator System::Collections::Generic::IEnumerator_1<TItem>() const noexcept {
return System::Collections::Generic::IEnumerator_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__set___2__current(TItem value)  {
::cordl_internals::setInstanceField<TItem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TItem>(value));
}
constexpr TItem Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<TItem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__set___4__this(Priority_Queue::GenericPriorityQueue_2<TItem,float_t> value)  {
::cordl_internals::setInstanceField<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>(value));
}
constexpr Priority_Queue::GenericPriorityQueue_2<TItem,float_t> Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__get___4__this() const {
return ::cordl_internals::getInstanceField<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__set__i_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t> Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::New_ctor(int32_t __1__state)  {
Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>(__1__state))};
return o;
}
 void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 TItem Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::System_Collections_Generic_IEnumerator_TItem__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>::get(),
                            "System.Collections.Generic.IEnumerator<TItem>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TItem>
constexpr  Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::operator System::Collections::Generic::IEnumerator_1<TItem>() const noexcept {
return System::Collections::Generic::IEnumerator_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__set___2__current(TItem value)  {
::cordl_internals::setInstanceField<TItem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TItem>(value));
}
constexpr TItem Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__get___2__current() const {
return ::cordl_internals::getInstanceField<TItem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__set___4__this(Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> value)  {
::cordl_internals::setInstanceField<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>(value));
}
constexpr Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__get___4__this() const {
return ::cordl_internals::getInstanceField<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__set__i_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority> Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::New_ctor(int32_t __1__state)  {
Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>(__1__state))};
return o;
}
 void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 TItem Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::System_Collections_Generic_IEnumerator_TItem__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>::get(),
                            "System.Collections.Generic.IEnumerator<TItem>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::operator Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>() const noexcept {
return Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,float_t>
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::operator Priority_Queue::IPriorityQueue_2<TItem,float_t>() const noexcept {
return Priority_Queue::IPriorityQueue_2<TItem,float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::operator System::Collections::Generic::IEnumerable_1<TItem>() const noexcept {
return System::Collections::Generic::IEnumerable_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__set__numNodes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__get__numNodes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__set__nodes(::ArrayW<TItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<TItem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<TItem>>(value));
}
constexpr ::ArrayW<TItem> Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__get__nodes() const {
return ::cordl_internals::getInstanceField<::ArrayW<TItem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__set__numNodesEverEnqueued(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__get__numNodesEverEnqueued() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__set__comparer(System::Comparison_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Comparison_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Comparison_1<float_t>>(value));
}
constexpr System::Comparison_1<float_t> Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::__get__comparer() const {
return ::cordl_internals::getInstanceField<System::Comparison_1<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Priority_Queue::GenericPriorityQueue_2<TItem,float_t> Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::New_ctor(int32_t maxNodes)  {
Priority_Queue::GenericPriorityQueue_2<TItem,float_t> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>(maxNodes))};
return o;
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::_ctor(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 Priority_Queue::GenericPriorityQueue_2<TItem,float_t> Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::New_ctor(int32_t maxNodes, System::Collections::Generic::IComparer_1<float_t> comparer)  {
Priority_Queue::GenericPriorityQueue_2<TItem,float_t> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>(maxNodes, comparer))};
return o;
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::_ctor(int32_t maxNodes, System::Collections::Generic::IComparer_1<float_t> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes, comparer);
}
 Priority_Queue::GenericPriorityQueue_2<TItem,float_t> Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::New_ctor(int32_t maxNodes, System::Comparison_1<float_t> comparer)  {
Priority_Queue::GenericPriorityQueue_2<TItem,float_t> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>(maxNodes, comparer))};
return o;
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::_ctor(int32_t maxNodes, System::Comparison_1<float_t> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Comparison_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes, comparer);
}
 int32_t Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "get_MaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::Contains(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::Enqueue(TItem node, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, priority);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::CascadeUp(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "CascadeUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::CascadeDown(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "CascadeDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 bool Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::HasHigherPriority(TItem higher, TItem lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "HasHigherPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, higher, lower);
}
 TItem Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::Resize(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 TItem Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::get_First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::UpdatePriority(TItem node, float_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, priority);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::OnNodeUpdated(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "OnNodeUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::Remove(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::ResetNode(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "ResetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 System::Collections::Generic::IEnumerator_1<TItem> Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::GenericPriorityQueue_2<TItem,float_t>::IsValidQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,float_t>>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::operator Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>() const noexcept {
return Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,TPriority>
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::operator Priority_Queue::IPriorityQueue_2<TItem,TPriority>() const noexcept {
return Priority_Queue::IPriorityQueue_2<TItem,TPriority>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::operator System::Collections::Generic::IEnumerable_1<TItem>() const noexcept {
return System::Collections::Generic::IEnumerable_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__set__numNodes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__get__numNodes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__set__nodes(::ArrayW<TItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<TItem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<TItem>>(value));
}
constexpr ::ArrayW<TItem> Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__get__nodes() const {
return ::cordl_internals::getInstanceField<::ArrayW<TItem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__set__numNodesEverEnqueued(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__get__numNodesEverEnqueued() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__set__comparer(System::Comparison_1<TPriority> value)  {
::cordl_internals::setInstanceField<System::Comparison_1<TPriority>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Comparison_1<TPriority>>(value));
}
constexpr System::Comparison_1<TPriority> Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::__get__comparer() const {
return ::cordl_internals::getInstanceField<System::Comparison_1<TPriority>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::New_ctor(int32_t maxNodes)  {
Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>(maxNodes))};
return o;
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::_ctor(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::New_ctor(int32_t maxNodes, System::Collections::Generic::IComparer_1<TPriority> comparer)  {
Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>(maxNodes, comparer))};
return o;
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::_ctor(int32_t maxNodes, System::Collections::Generic::IComparer_1<TPriority> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IComparer_1<TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes, comparer);
}
 Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::New_ctor(int32_t maxNodes, System::Comparison_1<TPriority> comparer)  {
Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> o{THROW_UNLESS(::il2cpp_utils::New<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>(maxNodes, comparer))};
return o;
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::_ctor(int32_t maxNodes, System::Comparison_1<TPriority> comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Comparison_1<TPriority>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes, comparer);
}
 int32_t Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "get_MaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::Contains(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::Enqueue(TItem node, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, priority);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::CascadeUp(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "CascadeUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::CascadeDown(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "CascadeDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 bool Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::HasHigherPriority(TItem higher, TItem lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "HasHigherPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, higher, lower);
}
 TItem Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::Resize(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 TItem Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::get_First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::UpdatePriority(TItem node, TPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, priority);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::OnNodeUpdated(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "OnNodeUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::Remove(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::ResetNode(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "ResetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 System::Collections::Generic::IEnumerator_1<TItem> Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<TItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>::IsValidQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::GenericPriorityQueue_2<TItem,TPriority>>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
