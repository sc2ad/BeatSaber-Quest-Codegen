#pragma once
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropData_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IListDragAndDropArgs.get_insertAtIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_insertAtIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IListDragAndDropArgs),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IListDragAndDropArgs>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IListDragAndDropArgs.get_dragAndDropData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IDragAndDropData (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IListDragAndDropArgs),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IListDragAndDropArgs>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IListDragAndDropArgs.get_dragAndDropPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::DragAndDropPosition (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IListDragAndDropArgs),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IListDragAndDropArgs>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 int32_t UnityEngine::UIElements::IListDragAndDropArgs::get_insertAtIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IListDragAndDropArgs>::get(),
                            "get_insertAtIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::IDragAndDropData UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IListDragAndDropArgs>::get(),
                            "get_dragAndDropData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IDragAndDropData, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::DragAndDropPosition UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IListDragAndDropArgs>::get(),
                            "get_dragAndDropPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::DragAndDropPosition, false>(const_cast<void*>(instance), ___internal_method);
}
