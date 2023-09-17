#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
// Type: System.Xml.Schema::XsdDateTimeFlags
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11701))
// CS Name: System.Xml.Schema.XsdDateTimeFlags
struct CORDL_TYPE XsdDateTimeFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XsdDateTimeFlags(int32_t value__) noexcept;


                    constexpr XsdDateTimeFlags(XsdDateTimeFlags const&) = default;
                    constexpr XsdDateTimeFlags(XsdDateTimeFlags&&) = default;
                    constexpr XsdDateTimeFlags& operator=(XsdDateTimeFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XsdDateTimeFlags& operator=(XsdDateTimeFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XsdDateTimeFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XsdDateTimeFlags_Unwrapped : int32_t {
__DateTime = 1,
__Time = 2,
__Date = 4,
__GYearMonth = 8,
__GYear = 16,
__GMonthDay = 32,
__GDay = 64,
__GMonth = 128,
__XdrDateTimeNoTz = 256,
__XdrDateTime = 512,
__XdrTimeNoTz = 1024,
__AllXsd = 255,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdDateTimeFlags_Unwrapped () const noexcept {
return std::bit_cast<__XsdDateTimeFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DateTime offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const DateTime;

/// @brief Field Time offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const Time;

/// @brief Field Date offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const Date;

/// @brief Field GYearMonth offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const GYearMonth;

/// @brief Field GYear offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const GYear;

/// @brief Field GMonthDay offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const GMonthDay;

/// @brief Field GDay offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const GDay;

/// @brief Field GMonth offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const GMonth;

/// @brief Field XdrDateTimeNoTz offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const XdrDateTimeNoTz;

/// @brief Field XdrDateTime offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const XdrDateTime;

/// @brief Field XdrTimeNoTz offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const XdrTimeNoTz;

/// @brief Field AllXsd offset 0
static ::System::Xml::Schema::XsdDateTimeFlags const AllXsd;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTimeFlags, "System.Xml.Schema", "XsdDateTimeFlags");
