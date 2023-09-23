#pragma once
#include "System/Globalization/zzzz__SortVersion_def.hpp"
#include "System/zzzz__Guid_def.hpp"
constexpr void System::Globalization::SortVersion::__set_m_NlsVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::SortVersion::__get_m_NlsVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::SortVersion::__set_m_SortId(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Guid>(value));
}
constexpr System::Guid System::Globalization::SortVersion::__get_m_SortId() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
