#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "source", ty: "UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actual", ty: "UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::TextureEntry::TextureEntry(UnityEngine::Texture source, UnityEngine::UIElements::TextureId actual, bool replaced) noexcept : ::bs_hook::ValueTypeWrapper() {this->source = source;
this->actual = actual;
this->replaced = replaced;
}
constexpr void UnityEngine::UIElements::UIR::TextureEntry::__set_source(UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture, 0x0>(this->__instance, std::forward<UnityEngine::Texture>(value));
}
constexpr UnityEngine::Texture UnityEngine::UIElements::UIR::TextureEntry::__get_source() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextureEntry::__set_actual(UnityEngine::UIElements::TextureId value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::TextureId, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::TextureId>(value));
}
constexpr UnityEngine::UIElements::TextureId UnityEngine::UIElements::UIR::TextureEntry::__get_actual() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::TextureId, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextureEntry::__set_replaced(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::TextureEntry::__get_replaced() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->__instance);
}
