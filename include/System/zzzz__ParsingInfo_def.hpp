#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class System__DateTimeParse__MatchNumberDelegate;
}
namespace System::Globalization {
class Calendar;
}
namespace System {
struct System__DateTimeParse__TM;
}
// Forward declare root types
namespace System {
struct ParsingInfo;
}
// Type: System::ParsingInfo
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2400))
// CS Name: System.ParsingInfo
struct CORDL_TYPE ParsingInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "calendar", ty: "System::Globalization::Calendar", modifiers: "", def_value: None }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeMark", ty: "System::System__DateTimeParse__TM", modifiers: "", def_value: None }, CppParam { name: "fUseHour12", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fUseTwoDigitYear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fAllowInnerWhite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fAllowTrailingWhite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fCustomNumberParser", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parseNumberDelegate", ty: "System::System__DateTimeParse__MatchNumberDelegate", modifiers: "", def_value: None }]
constexpr ParsingInfo(System::Globalization::Calendar calendar, int32_t dayOfWeek, System::System__DateTimeParse__TM timeMark, bool fUseHour12, bool fUseTwoDigitYear, bool fAllowInnerWhite, bool fAllowTrailingWhite, bool fCustomNumberParser, System::System__DateTimeParse__MatchNumberDelegate parseNumberDelegate) noexcept;


                    constexpr ParsingInfo(ParsingInfo const&) = default;
                    constexpr ParsingInfo(ParsingInfo&&) = default;
                    constexpr ParsingInfo& operator=(ParsingInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParsingInfo& operator=(ParsingInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParsingInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Globalization::Calendar __declspec(property(get=__get_calendar, put=__set_calendar))  calendar;

constexpr void __set_calendar(System::Globalization::Calendar value) ;

constexpr System::Globalization::Calendar __get_calendar() const;

 int32_t __declspec(property(get=__get_dayOfWeek, put=__set_dayOfWeek))  dayOfWeek;

constexpr void __set_dayOfWeek(int32_t value) ;

constexpr int32_t __get_dayOfWeek() const;

 System::System__DateTimeParse__TM __declspec(property(get=__get_timeMark, put=__set_timeMark))  timeMark;

constexpr void __set_timeMark(System::System__DateTimeParse__TM value) ;

constexpr System::System__DateTimeParse__TM __get_timeMark() const;

 bool __declspec(property(get=__get_fUseHour12, put=__set_fUseHour12))  fUseHour12;

constexpr void __set_fUseHour12(bool value) ;

constexpr bool __get_fUseHour12() const;

 bool __declspec(property(get=__get_fUseTwoDigitYear, put=__set_fUseTwoDigitYear))  fUseTwoDigitYear;

constexpr void __set_fUseTwoDigitYear(bool value) ;

constexpr bool __get_fUseTwoDigitYear() const;

 bool __declspec(property(get=__get_fAllowInnerWhite, put=__set_fAllowInnerWhite))  fAllowInnerWhite;

constexpr void __set_fAllowInnerWhite(bool value) ;

constexpr bool __get_fAllowInnerWhite() const;

 bool __declspec(property(get=__get_fAllowTrailingWhite, put=__set_fAllowTrailingWhite))  fAllowTrailingWhite;

constexpr void __set_fAllowTrailingWhite(bool value) ;

constexpr bool __get_fAllowTrailingWhite() const;

 bool __declspec(property(get=__get_fCustomNumberParser, put=__set_fCustomNumberParser))  fCustomNumberParser;

constexpr void __set_fCustomNumberParser(bool value) ;

constexpr bool __get_fCustomNumberParser() const;

 System::System__DateTimeParse__MatchNumberDelegate __declspec(property(get=__get_parseNumberDelegate, put=__set_parseNumberDelegate))  parseNumberDelegate;

constexpr void __set_parseNumberDelegate(System::System__DateTimeParse__MatchNumberDelegate value) ;

constexpr System::System__DateTimeParse__MatchNumberDelegate __get_parseNumberDelegate() const;


// Methods

/// @brief Method Init addr 0x2438bbc size 0xc virtual false final false
 void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ParsingInfo, "System", "ParsingInfo");
