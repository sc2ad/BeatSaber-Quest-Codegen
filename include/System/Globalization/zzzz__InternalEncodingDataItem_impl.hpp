#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__InternalEncodingDataItem_def.hpp"
// Ctor Parameters [CppParam { name: "webName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::InternalEncodingDataItem::InternalEncodingDataItem(::StringW webName, uint16_t codePage) noexcept : ::bs_hook::ValueTypeWrapper() {this->webName = webName;
this->codePage = codePage;
}
constexpr void System::Globalization::InternalEncodingDataItem::__set_webName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::InternalEncodingDataItem::__get_webName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void System::Globalization::InternalEncodingDataItem::__set_codePage(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Globalization::InternalEncodingDataItem::__get_codePage() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
