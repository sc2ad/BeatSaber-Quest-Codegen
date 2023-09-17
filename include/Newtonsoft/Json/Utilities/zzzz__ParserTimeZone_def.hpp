#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct ParserTimeZone;
}
// Type: Newtonsoft.Json.Utilities::ParserTimeZone
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11787))
// CS Name: Newtonsoft.Json.Utilities.ParserTimeZone
struct CORDL_TYPE ParserTimeZone : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParserTimeZone(int32_t value__) noexcept;


                    constexpr ParserTimeZone(ParserTimeZone const&) = default;
                    constexpr ParserTimeZone(ParserTimeZone&&) = default;
                    constexpr ParserTimeZone& operator=(ParserTimeZone const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParserTimeZone& operator=(ParserTimeZone&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParserTimeZone(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParserTimeZone_Unwrapped : int32_t {
__Unspecified = 0,
__Utc = 1,
__LocalWestOfUtc = 2,
__LocalEastOfUtc = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParserTimeZone_Unwrapped () const noexcept {
return std::bit_cast<__ParserTimeZone_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unspecified offset 0
static ::Newtonsoft::Json::Utilities::ParserTimeZone const Unspecified;

/// @brief Field Utc offset 0
static ::Newtonsoft::Json::Utilities::ParserTimeZone const Utc;

/// @brief Field LocalWestOfUtc offset 0
static ::Newtonsoft::Json::Utilities::ParserTimeZone const LocalWestOfUtc;

/// @brief Field LocalEastOfUtc offset 0
static ::Newtonsoft::Json::Utilities::ParserTimeZone const LocalEastOfUtc;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ParserTimeZone, "Newtonsoft.Json.Utilities", "ParserTimeZone");
