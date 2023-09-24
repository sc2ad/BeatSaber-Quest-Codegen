#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct CalendarId;
}
// Type: System.Globalization::CalendarId
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3652))
// CS Name: System.Globalization.CalendarId
struct CORDL_TYPE CalendarId : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr CalendarId(uint16_t value__) noexcept;


                    constexpr CalendarId(CalendarId const&) = default;
                    constexpr CalendarId(CalendarId&&) = default;
                    constexpr CalendarId& operator=(CalendarId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CalendarId& operator=(CalendarId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CalendarId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CalendarId_Unwrapped : uint16_t {
__UNINITIALIZED_VALUE = 0u,
__GREGORIAN = 1u,
__GREGORIAN_US = 2u,
__JAPAN = 3u,
__TAIWAN = 4u,
__KOREA = 5u,
__HIJRI = 6u,
__THAI = 7u,
__HEBREW = 8u,
__GREGORIAN_ME_FRENCH = 9u,
__GREGORIAN_ARABIC = 10u,
__GREGORIAN_XLIT_ENGLISH = 11u,
__GREGORIAN_XLIT_FRENCH = 12u,
__JULIAN = 13u,
__JAPANESELUNISOLAR = 14u,
__CHINESELUNISOLAR = 15u,
__SAKA = 16u,
__LUNAR_ETO_CHN = 17u,
__LUNAR_ETO_KOR = 18u,
__LUNAR_ETO_ROKUYOU = 19u,
__KOREANLUNISOLAR = 20u,
__TAIWANLUNISOLAR = 21u,
__PERSIAN = 22u,
__UMALQURA = 23u,
__LAST_CALENDAR = 23u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CalendarId_Unwrapped () const noexcept {
return std::bit_cast<__CalendarId_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint16_t;


// Fields

 uint16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint16_t value) ;

constexpr uint16_t __get_value__() const;

/// @brief Field UNINITIALIZED_VALUE offset 0
static System::Globalization::CalendarId const UNINITIALIZED_VALUE;

/// @brief Field GREGORIAN offset 0
static System::Globalization::CalendarId const GREGORIAN;

/// @brief Field GREGORIAN_US offset 0
static System::Globalization::CalendarId const GREGORIAN_US;

/// @brief Field JAPAN offset 0
static System::Globalization::CalendarId const JAPAN;

/// @brief Field TAIWAN offset 0
static System::Globalization::CalendarId const TAIWAN;

/// @brief Field KOREA offset 0
static System::Globalization::CalendarId const KOREA;

/// @brief Field HIJRI offset 0
static System::Globalization::CalendarId const HIJRI;

/// @brief Field THAI offset 0
static System::Globalization::CalendarId const THAI;

/// @brief Field HEBREW offset 0
static System::Globalization::CalendarId const HEBREW;

/// @brief Field GREGORIAN_ME_FRENCH offset 0
static System::Globalization::CalendarId const GREGORIAN_ME_FRENCH;

/// @brief Field GREGORIAN_ARABIC offset 0
static System::Globalization::CalendarId const GREGORIAN_ARABIC;

/// @brief Field GREGORIAN_XLIT_ENGLISH offset 0
static System::Globalization::CalendarId const GREGORIAN_XLIT_ENGLISH;

/// @brief Field GREGORIAN_XLIT_FRENCH offset 0
static System::Globalization::CalendarId const GREGORIAN_XLIT_FRENCH;

/// @brief Field JULIAN offset 0
static System::Globalization::CalendarId const JULIAN;

/// @brief Field JAPANESELUNISOLAR offset 0
static System::Globalization::CalendarId const JAPANESELUNISOLAR;

/// @brief Field CHINESELUNISOLAR offset 0
static System::Globalization::CalendarId const CHINESELUNISOLAR;

/// @brief Field SAKA offset 0
static System::Globalization::CalendarId const SAKA;

/// @brief Field LUNAR_ETO_CHN offset 0
static System::Globalization::CalendarId const LUNAR_ETO_CHN;

/// @brief Field LUNAR_ETO_KOR offset 0
static System::Globalization::CalendarId const LUNAR_ETO_KOR;

/// @brief Field LUNAR_ETO_ROKUYOU offset 0
static System::Globalization::CalendarId const LUNAR_ETO_ROKUYOU;

/// @brief Field KOREANLUNISOLAR offset 0
static System::Globalization::CalendarId const KOREANLUNISOLAR;

/// @brief Field TAIWANLUNISOLAR offset 0
static System::Globalization::CalendarId const TAIWANLUNISOLAR;

/// @brief Field PERSIAN offset 0
static System::Globalization::CalendarId const PERSIAN;

/// @brief Field UMALQURA offset 0
static System::Globalization::CalendarId const UMALQURA;

/// @brief Field LAST_CALENDAR offset 0
static System::Globalization::CalendarId const LAST_CALENDAR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CalendarId, "System.Globalization", "CalendarId");
