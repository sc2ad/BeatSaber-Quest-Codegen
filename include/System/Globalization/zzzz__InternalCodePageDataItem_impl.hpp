#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__InternalCodePageDataItem_def.hpp"
// Ctor Parameters [CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uiFamilyCodePage", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Names", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr System::Globalization::InternalCodePageDataItem::InternalCodePageDataItem(uint16_t codePage, uint16_t uiFamilyCodePage, uint32_t flags, ::StringW Names) noexcept : ::bs_hook::ValueTypeWrapper() {this->codePage = codePage;
this->uiFamilyCodePage = uiFamilyCodePage;
this->flags = flags;
this->Names = Names;
}
constexpr void System::Globalization::InternalCodePageDataItem::__set_codePage(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Globalization::InternalCodePageDataItem::__get_codePage() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void System::Globalization::InternalCodePageDataItem::__set_uiFamilyCodePage(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Globalization::InternalCodePageDataItem::__get_uiFamilyCodePage() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void System::Globalization::InternalCodePageDataItem::__set_flags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Globalization::InternalCodePageDataItem::__get_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void System::Globalization::InternalCodePageDataItem::__set_Names(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::InternalCodePageDataItem::__get_Names() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
