#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct ParseResult;
}
// Type: Newtonsoft.Json.Utilities::ParseResult
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11814))
// CS Name: Newtonsoft.Json.Utilities.ParseResult
struct CORDL_TYPE ParseResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParseResult(int32_t value__) noexcept;


                    constexpr ParseResult(ParseResult const&) = default;
                    constexpr ParseResult(ParseResult&&) = default;
                    constexpr ParseResult& operator=(ParseResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParseResult& operator=(ParseResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParseResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParseResult_Unwrapped : int32_t {
__None = 0,
__Success = 1,
__Overflow = 2,
__Invalid = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParseResult_Unwrapped () const noexcept {
return std::bit_cast<__ParseResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Newtonsoft::Json::Utilities::ParseResult const None;

/// @brief Field Success offset 0
static Newtonsoft::Json::Utilities::ParseResult const Success;

/// @brief Field Overflow offset 0
static Newtonsoft::Json::Utilities::ParseResult const Overflow;

/// @brief Field Invalid offset 0
static Newtonsoft::Json::Utilities::ParseResult const Invalid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::ParseResult, "Newtonsoft.Json.Utilities", "ParseResult");
