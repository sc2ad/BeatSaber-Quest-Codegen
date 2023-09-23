#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "metrics", ty: "UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: Some("{}") }, CppParam { name: "glyphRect", ty: "UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "classDefinitionType", ty: "UnityEngine::TextCore::GlyphClassDefinitionType", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::GlyphMarshallingStruct(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType) noexcept : ::bs_hook::ValueTypeWrapper() {this->index = index;
this->metrics = metrics;
this->glyphRect = glyphRect;
this->scale = scale;
this->atlasIndex = atlasIndex;
this->classDefinitionType = classDefinitionType;
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__set_index(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__get_index() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__set_metrics(UnityEngine::TextCore::GlyphMetrics value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::GlyphMetrics, 0x4>(this->__instance, std::forward<UnityEngine::TextCore::GlyphMetrics>(value));
}
constexpr UnityEngine::TextCore::GlyphMetrics UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__get_metrics() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::GlyphMetrics, 0x4>(this->__instance);
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__set_glyphRect(UnityEngine::TextCore::GlyphRect value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::GlyphRect, 0x18>(this->__instance, std::forward<UnityEngine::TextCore::GlyphRect>(value));
}
constexpr UnityEngine::TextCore::GlyphRect UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__get_glyphRect() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::GlyphRect, 0x18>(this->__instance);
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__set_scale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__set_atlasIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__get_atlasIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__set_classDefinitionType(UnityEngine::TextCore::GlyphClassDefinitionType value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::GlyphClassDefinitionType, 0x30>(this->__instance, std::forward<UnityEngine::TextCore::GlyphClassDefinitionType>(value));
}
constexpr UnityEngine::TextCore::GlyphClassDefinitionType UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct::__get_classDefinitionType() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::GlyphClassDefinitionType, 0x30>(this->__instance);
}
