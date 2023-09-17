#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "TMPro/zzzz__TMP_FontWeightPair_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::TMPro::TMP_FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "italicTypeface", ty: "::TMPro::TMP_FontAsset", modifiers: "", def_value: Some("csnull") }]
constexpr ::TMPro::TMP_FontWeightPair::TMP_FontWeightPair(::TMPro::TMP_FontAsset regularTypeface, ::TMPro::TMP_FontAsset italicTypeface) noexcept : ::bs_hook::ValueTypeWrapper() {this->regularTypeface = regularTypeface;
this->italicTypeface = italicTypeface;
}
constexpr void ::TMPro::TMP_FontWeightPair::__set_regularTypeface(::TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset, 0x0>(this->__instance, std::forward<::TMPro::TMP_FontAsset>(value));
}
constexpr ::TMPro::TMP_FontAsset ::TMPro::TMP_FontWeightPair::__get_regularTypeface() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset, 0x0>(this->__instance);
}
constexpr void ::TMPro::TMP_FontWeightPair::__set_italicTypeface(::TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset, 0x8>(this->__instance, std::forward<::TMPro::TMP_FontAsset>(value));
}
constexpr ::TMPro::TMP_FontAsset ::TMPro::TMP_FontWeightPair::__get_italicTypeface() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset, 0x8>(this->__instance);
}
} // end anonymous namespace
