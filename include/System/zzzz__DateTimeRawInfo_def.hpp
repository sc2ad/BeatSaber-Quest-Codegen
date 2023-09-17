#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct ____System__DateTimeParse__TM;
}
// Forward declare root types
namespace System {
struct DateTimeRawInfo;
}
// Type: System::DateTimeRawInfo
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2396))
// CS Name: System.DateTimeRawInfo
struct CORDL_TYPE DateTimeRawInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "num", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "numCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeMark", ty: "::System::____System__DateTimeParse__TM", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "hasSameDateAndTimeSeparators", ty: "bool", modifiers: "", def_value: None }]
constexpr DateTimeRawInfo(void* num, int32_t numCount, int32_t month, int32_t year, int32_t dayOfWeek, int32_t era, ::System::____System__DateTimeParse__TM timeMark, double_t fraction, bool hasSameDateAndTimeSeparators) noexcept;


                    constexpr DateTimeRawInfo(DateTimeRawInfo const&) = default;
                    constexpr DateTimeRawInfo(DateTimeRawInfo&&) = default;
                    constexpr DateTimeRawInfo& operator=(DateTimeRawInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeRawInfo& operator=(DateTimeRawInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeRawInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_num, put=__set_num))  num;

constexpr void __set_num(void* value) ;

constexpr void* __get_num() const;

 int32_t __declspec(property(get=__get_numCount, put=__set_numCount))  numCount;

constexpr void __set_numCount(int32_t value) ;

constexpr int32_t __get_numCount() const;

 int32_t __declspec(property(get=__get_month, put=__set_month))  month;

constexpr void __set_month(int32_t value) ;

constexpr int32_t __get_month() const;

 int32_t __declspec(property(get=__get_year, put=__set_year))  year;

constexpr void __set_year(int32_t value) ;

constexpr int32_t __get_year() const;

 int32_t __declspec(property(get=__get_dayOfWeek, put=__set_dayOfWeek))  dayOfWeek;

constexpr void __set_dayOfWeek(int32_t value) ;

constexpr int32_t __get_dayOfWeek() const;

 int32_t __declspec(property(get=__get_era, put=__set_era))  era;

constexpr void __set_era(int32_t value) ;

constexpr int32_t __get_era() const;

 ::System::____System__DateTimeParse__TM __declspec(property(get=__get_timeMark, put=__set_timeMark))  timeMark;

constexpr void __set_timeMark(::System::____System__DateTimeParse__TM value) ;

constexpr ::System::____System__DateTimeParse__TM __get_timeMark() const;

 double_t __declspec(property(get=__get_fraction, put=__set_fraction))  fraction;

constexpr void __set_fraction(double_t value) ;

constexpr double_t __get_fraction() const;

 bool __declspec(property(get=__get_hasSameDateAndTimeSeparators, put=__set_hasSameDateAndTimeSeparators))  hasSameDateAndTimeSeparators;

constexpr void __set_hasSameDateAndTimeSeparators(bool value) ;

constexpr bool __get_hasSameDateAndTimeSeparators() const;


// Methods

/// @brief Method Init addr 0x24389d8 size 0x20 virtual false final false
 void Init(void* numberBuffer) ;

/// @brief Method AddNumber addr 0x24389f8 size 0x18 virtual false final false
 void AddNumber(int32_t value) ;

/// @brief Method GetNumber addr 0x2438a10 size 0xc virtual false final false
 int32_t GetNumber(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeRawInfo, "System", "DateTimeRawInfo");
