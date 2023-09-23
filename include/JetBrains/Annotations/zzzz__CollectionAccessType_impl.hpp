#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "JetBrains/Annotations/zzzz__CollectionAccessType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr JetBrains::Annotations::CollectionAccessType::CollectionAccessType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void JetBrains::Annotations::CollectionAccessType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t JetBrains::Annotations::CollectionAccessType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::None{0};
constexpr JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::Read{1};
constexpr JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::ModifyExistingContent{2};
constexpr JetBrains::Annotations::CollectionAccessType  JetBrains::Annotations::CollectionAccessType::UpdatedContent{6};
