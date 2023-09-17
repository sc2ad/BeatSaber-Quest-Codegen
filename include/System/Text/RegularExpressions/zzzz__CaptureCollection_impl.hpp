#pragma once
namespace {
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
constexpr void ::System::Text::RegularExpressions::CaptureCollection::__set__group(::System::Text::RegularExpressions::Group value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::Group, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::RegularExpressions::Group>(value));
}
constexpr ::System::Text::RegularExpressions::Group ::System::Text::RegularExpressions::CaptureCollection::__get__group() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::Group, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::CaptureCollection::__set__capcount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Text::RegularExpressions::CaptureCollection::__get__capcount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::RegularExpressions::CaptureCollection::__set__captures(::ArrayW<::System::Text::RegularExpressions::Capture> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Text::RegularExpressions::Capture>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Text::RegularExpressions::Capture>>(value));
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture> ::System::Text::RegularExpressions::CaptureCollection::__get__captures() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Text::RegularExpressions::Capture>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
