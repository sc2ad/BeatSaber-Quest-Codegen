#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::CalendarId::CalendarId(uint16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::CalendarId::__set_value__(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Globalization::CalendarId::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::UNINITIALIZED_VALUE{0u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::GREGORIAN{1u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::GREGORIAN_US{2u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::JAPAN{3u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::TAIWAN{4u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::KOREA{5u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::HIJRI{6u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::THAI{7u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::HEBREW{8u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::GREGORIAN_ME_FRENCH{9u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::GREGORIAN_ARABIC{10u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::GREGORIAN_XLIT_ENGLISH{11u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::GREGORIAN_XLIT_FRENCH{12u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::JULIAN{13u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::JAPANESELUNISOLAR{14u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::CHINESELUNISOLAR{15u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::SAKA{16u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::LUNAR_ETO_CHN{17u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::LUNAR_ETO_KOR{18u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::LUNAR_ETO_ROKUYOU{19u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::KOREANLUNISOLAR{20u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::TAIWANLUNISOLAR{21u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::PERSIAN{22u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::UMALQURA{23u};
constexpr System::Globalization::CalendarId  System::Globalization::CalendarId::LAST_CALENDAR{23u};
