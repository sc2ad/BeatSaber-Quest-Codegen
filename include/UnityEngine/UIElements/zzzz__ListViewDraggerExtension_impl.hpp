#pragma once
#include "UnityEngine/UIElements/zzzz__ListViewDraggerExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ListViewDraggerExtension.GetRecycledItemFromIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ReusableCollectionItem (*)(UnityEngine::UIElements::BaseVerticalCollectionView, int32_t)>(&UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromIndex)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2c90ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListViewDraggerExtension>::get(),
                            "GetRecycledItemFromIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVerticalCollectionView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::ReusableCollectionItem UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromIndex(UnityEngine::UIElements::BaseVerticalCollectionView listView, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListViewDraggerExtension>::get(),
                            "GetRecycledItemFromIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::BaseVerticalCollectionView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ReusableCollectionItem, false>(nullptr, ___internal_method, listView, index);
}
