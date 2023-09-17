#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "TMPro/zzzz__TMP_MaterialReference_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_MaterialReference::TMP_MaterialReference(::UnityEngine::Material material, int32_t referenceCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->material = material;
this->referenceCount = referenceCount;
}
constexpr void ::TMPro::TMP_MaterialReference::__set_material(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x0>(this->__instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::TMPro::TMP_MaterialReference::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x0>(this->__instance);
}
constexpr void ::TMPro::TMP_MaterialReference::__set_referenceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_MaterialReference::__get_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
} // end anonymous namespace
