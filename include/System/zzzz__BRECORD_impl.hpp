#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__BRECORD_def.hpp"
// Ctor Parameters [CppParam { name: "pvRecord", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pRecInfo", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr System::BRECORD::BRECORD(::cordl_internals::intptr_t pvRecord, ::cordl_internals::intptr_t pRecInfo) noexcept : ::bs_hook::ValueTypeWrapper() {this->pvRecord = pvRecord;
this->pRecInfo = pRecInfo;
}
constexpr void System::BRECORD::__set_pvRecord(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::BRECORD::__get_pvRecord() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void System::BRECORD::__set_pRecInfo(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::BRECORD::__get_pRecInfo() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
