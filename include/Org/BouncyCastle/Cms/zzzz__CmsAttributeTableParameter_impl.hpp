#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableParameter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Org::BouncyCastle::Cms::CmsAttributeTableParameter::CmsAttributeTableParameter(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Org::BouncyCastle::Cms::CmsAttributeTableParameter::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Cms::CmsAttributeTableParameter::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::ContentType{0};
constexpr Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::Digest{1};
constexpr Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::Signature{2};
constexpr Org::BouncyCastle::Cms::CmsAttributeTableParameter  Org::BouncyCastle::Cms::CmsAttributeTableParameter::DigestAlgorithmIdentifier{3};
