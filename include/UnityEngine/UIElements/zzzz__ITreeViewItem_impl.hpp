#pragma once
#include "UnityEngine/UIElements/zzzz__ITreeViewItem_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ITreeViewItem.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::ITreeViewItem::*)()>(&UnityEngine::UIElements::ITreeViewItem::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ITreeViewItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITreeViewItem>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ITreeViewItem.get_children
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> (UnityEngine::UIElements::ITreeViewItem::*)()>(&UnityEngine::UIElements::ITreeViewItem::get_children)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ITreeViewItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITreeViewItem>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ITreeViewItem.get_hasChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ITreeViewItem::*)()>(&UnityEngine::UIElements::ITreeViewItem::get_hasChildren)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ITreeViewItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITreeViewItem>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 int32_t UnityEngine::UIElements::ITreeViewItem::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITreeViewItem>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem> UnityEngine::UIElements::ITreeViewItem::get_children()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITreeViewItem>::get(),
                            "get_children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ITreeViewItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::ITreeViewItem::get_hasChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ITreeViewItem>::get(),
                            "get_hasChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
