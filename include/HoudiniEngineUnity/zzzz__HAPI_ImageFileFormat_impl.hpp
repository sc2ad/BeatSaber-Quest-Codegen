#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageFileFormat_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descriptionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultExtensionSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_ImageFileFormat::HAPI_ImageFileFormat(int32_t nameSH, int32_t descriptionSH, int32_t defaultExtensionSH) noexcept : ::bs_hook::ValueTypeWrapper() {this->nameSH = nameSH;
this->descriptionSH = descriptionSH;
this->defaultExtensionSH = defaultExtensionSH;
}
constexpr void HoudiniEngineUnity::HAPI_ImageFileFormat::__set_nameSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageFileFormat::__get_nameSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageFileFormat::__set_descriptionSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageFileFormat::__get_descriptionSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_ImageFileFormat::__set_defaultExtensionSH(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HAPI_ImageFileFormat::__get_defaultExtensionSH() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
