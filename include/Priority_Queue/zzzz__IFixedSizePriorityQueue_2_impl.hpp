#pragma once
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,TPriority>
constexpr  Priority_Queue::IFixedSizePriorityQueue_2::operator Priority_Queue::IPriorityQueue_2<TItem,TPriority>() const noexcept {
return Priority_Queue::IPriorityQueue_2<TItem,TPriority>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr  Priority_Queue::IFixedSizePriorityQueue_2::operator System::Collections::Generic::IEnumerable_1<TItem>() const noexcept {
return System::Collections::Generic::IEnumerable_1<TItem>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Priority_Queue::IFixedSizePriorityQueue_2::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 void Priority_Queue::IFixedSizePriorityQueue_2::Resize(int32_t maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::IFixedSizePriorityQueue_2>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNodes);
}
 int32_t Priority_Queue::IFixedSizePriorityQueue_2::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::IFixedSizePriorityQueue_2>::get(),
                            "get_MaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Priority_Queue::IFixedSizePriorityQueue_2::ResetNode(TItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Priority_Queue::IFixedSizePriorityQueue_2>::get(),
                            "ResetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
