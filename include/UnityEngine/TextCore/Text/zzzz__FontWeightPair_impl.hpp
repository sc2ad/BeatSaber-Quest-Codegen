#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__FontWeightPair_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "italicTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::TextCore::Text::FontWeightPair::FontWeightPair(::UnityEngine::TextCore::Text::FontAsset regularTypeface, ::UnityEngine::TextCore::Text::FontAsset italicTypeface) noexcept : ::bs_hook::ValueTypeWrapper() {this->regularTypeface = regularTypeface;
this->italicTypeface = italicTypeface;
}
constexpr void ::UnityEngine::TextCore::Text::FontWeightPair::__set_regularTypeface(::UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x0>(this->__instance, std::forward<::UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset ::UnityEngine::TextCore::Text::FontWeightPair::__get_regularTypeface() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontWeightPair::__set_italicTypeface(::UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance, std::forward<::UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset ::UnityEngine::TextCore::Text::FontWeightPair::__get_italicTypeface() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance);
}
} // end anonymous namespace
