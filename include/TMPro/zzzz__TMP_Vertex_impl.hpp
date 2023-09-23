#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__TMP_Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: TMPro::TMP_Vertex.get_zero
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_Vertex (*)()>(&TMPro::TMP_Vertex::get_zero)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a69e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Vertex>::get(),
                            "get_zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv2", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv4", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMP_Vertex::TMP_Vertex(UnityEngine::Vector3 position, UnityEngine::Vector2 uv, UnityEngine::Vector2 uv2, UnityEngine::Vector2 uv4, UnityEngine::Color32 color) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->uv = uv;
this->uv2 = uv2;
this->uv4 = uv4;
this->color = color;
}
constexpr void TMPro::TMP_Vertex::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMP_Vertex::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void TMPro::TMP_Vertex::__set_uv(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0xc>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 TMPro::TMP_Vertex::__get_uv() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0xc>(this->__instance);
}
constexpr void TMPro::TMP_Vertex::__set_uv2(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x14>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 TMPro::TMP_Vertex::__get_uv2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x14>(this->__instance);
}
constexpr void TMPro::TMP_Vertex::__set_uv4(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x1c>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 TMPro::TMP_Vertex::__get_uv4() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x1c>(this->__instance);
}
constexpr void TMPro::TMP_Vertex::__set_color(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x24>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::TMP_Vertex::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x24>(this->__instance);
}
 void TMPro::TMP_Vertex::__set_k_Zero(TMPro::TMP_Vertex value)  {
::cordl_internals::setStaticField<TMPro::TMP_Vertex, "k_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Vertex>::get>(std::forward<TMPro::TMP_Vertex>(value));
}
 TMPro::TMP_Vertex TMPro::TMP_Vertex::__get_k_Zero()  {
return ::cordl_internals::getStaticField<TMPro::TMP_Vertex, "k_Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Vertex>::get>();
}
 TMPro::TMP_Vertex TMPro::TMP_Vertex::get_zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_Vertex>::get(),
                            "get_zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TMPro::TMP_Vertex, false>(nullptr, ___internal_method);
}
