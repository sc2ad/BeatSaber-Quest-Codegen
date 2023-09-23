#pragma once
#include "System/Runtime/InteropServices/zzzz__ErrorWrapper_def.hpp"
constexpr void System::Runtime::InteropServices::ErrorWrapper::__set_m_ErrorCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::InteropServices::ErrorWrapper::__get_m_ErrorCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
