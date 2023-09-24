#pragma once
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
/// @brief Convert operator to GlobalNamespace::ISortedList_1<TBase>
constexpr  GlobalNamespace::SortedList_2<T,TBase>::operator GlobalNamespace::ISortedList_1<TBase>() const noexcept {
return GlobalNamespace::ISortedList_1<TBase>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SortedList_2<T,TBase>::__set__items(System::Collections::Generic::LinkedList_1<TBase> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<TBase>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<TBase>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<TBase> GlobalNamespace::SortedList_2<T,TBase>::__get__items() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<TBase>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SortedList_2<T,TBase>::__set__sortedListDataProcessor(GlobalNamespace::ISortedListItemProcessor_1<TBase> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ISortedListItemProcessor_1<TBase>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ISortedListItemProcessor_1<TBase>>(value));
}
constexpr GlobalNamespace::ISortedListItemProcessor_1<TBase> GlobalNamespace::SortedList_2<T,TBase>::__get__sortedListDataProcessor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ISortedListItemProcessor_1<TBase>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SortedList_2<T,TBase>::__set__lastUsedNode(System::Collections::Generic::LinkedListNode_1<TBase> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedListNode_1<TBase>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedListNode_1<TBase>>(value));
}
constexpr System::Collections::Generic::LinkedListNode_1<TBase> GlobalNamespace::SortedList_2<T,TBase>::__get__lastUsedNode() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedListNode_1<TBase>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::SortedList_2<T,TBase>::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::LinkedList_1<TBase> GlobalNamespace::SortedList_2<T,TBase>::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedList_1<TBase>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SortedList_2<T,TBase> GlobalNamespace::SortedList_2<T,TBase>::New_ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor)  {
GlobalNamespace::SortedList_2<T,TBase> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SortedList_2<T,TBase>>(sortedListDataProcessor))};
return o;
}
 void GlobalNamespace::SortedList_2<T,TBase>::_ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISortedListItemProcessor_1<TBase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sortedListDataProcessor);
}
 System::Collections::Generic::LinkedListNode_1<TBase> GlobalNamespace::SortedList_2<T,TBase>::Insert(TBase newItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedListNode_1<TBase>, false>(const_cast<void*>(instance), ___internal_method, newItem);
}
 void GlobalNamespace::SortedList_2<T,TBase>::Remove(System::Collections::Generic::LinkedListNode_1<TBase> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<TBase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::SortedList_2<T,TBase>::TouchLastUsedNode(System::Collections::Generic::LinkedListNode_1<TBase> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            "TouchLastUsedNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<TBase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 System::Collections::Generic::LinkedListNode_1<TBase> GlobalNamespace::SortedList_2<T,TBase>::InsertInternal(TBase newItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_2<T,TBase>>::get(),
                            "InsertInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedListNode_1<TBase>, false>(const_cast<void*>(instance), ___internal_method, newItem);
}
