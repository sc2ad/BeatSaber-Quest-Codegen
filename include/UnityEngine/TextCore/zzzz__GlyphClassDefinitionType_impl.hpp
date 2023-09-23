#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::GlyphClassDefinitionType::GlyphClassDefinitionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextCore::GlyphClassDefinitionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::GlyphClassDefinitionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Undefined{0};
constexpr UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Base{1};
constexpr UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Ligature{2};
constexpr UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Mark{3};
constexpr UnityEngine::TextCore::GlyphClassDefinitionType  UnityEngine::TextCore::GlyphClassDefinitionType::Component{4};
