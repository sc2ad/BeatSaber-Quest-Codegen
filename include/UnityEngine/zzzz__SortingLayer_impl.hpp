#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__SortingLayer_def.hpp"
//  Writing Method size for method: UnityEngine::SortingLayer.GetLayerValueFromID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&UnityEngine::SortingLayer::GetLayerValueFromID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b681cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SortingLayer>::get(),
                            "GetLayerValueFromID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SortingLayer::SortingLayer(int32_t m_Id) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Id = m_Id;
}
constexpr void UnityEngine::SortingLayer::__set_m_Id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SortingLayer::__get_m_Id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
 int32_t UnityEngine::SortingLayer::GetLayerValueFromID(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SortingLayer>::get(),
                            "GetLayerValueFromID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, id);
}
