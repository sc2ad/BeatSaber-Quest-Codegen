#pragma once
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::ISortedListItemProcessor_1.ProcessInsertedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISortedListItemProcessor_1::*)(System::Collections::Generic::LinkedListNode_1<T>)>(&GlobalNamespace::ISortedListItemProcessor_1::ProcessInsertedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISortedListItemProcessor_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISortedListItemProcessor_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ISortedListItemProcessor_1.ProcessBeforeDeleteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISortedListItemProcessor_1::*)(System::Collections::Generic::LinkedListNode_1<T>)>(&GlobalNamespace::ISortedListItemProcessor_1::ProcessBeforeDeleteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISortedListItemProcessor_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISortedListItemProcessor_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ISortedListItemProcessor_1::ProcessInsertedData(System::Collections::Generic::LinkedListNode_1<T> insertedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISortedListItemProcessor_1>::get(),
                            "ProcessInsertedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, insertedNode);
}
 void GlobalNamespace::ISortedListItemProcessor_1::ProcessBeforeDeleteData(System::Collections::Generic::LinkedListNode_1<T> nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISortedListItemProcessor_1>::get(),
                            "ProcessBeforeDeleteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodeToDelete);
}
