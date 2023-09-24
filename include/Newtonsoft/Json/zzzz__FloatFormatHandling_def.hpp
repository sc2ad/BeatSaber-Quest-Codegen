#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
// Type: Newtonsoft.Json::FloatFormatHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11740))
// CS Name: Newtonsoft.Json.FloatFormatHandling
struct CORDL_TYPE FloatFormatHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloatFormatHandling(int32_t value__) noexcept;


                    constexpr FloatFormatHandling(FloatFormatHandling const&) = default;
                    constexpr FloatFormatHandling(FloatFormatHandling&&) = default;
                    constexpr FloatFormatHandling& operator=(FloatFormatHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FloatFormatHandling& operator=(FloatFormatHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FloatFormatHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FloatFormatHandling_Unwrapped : int32_t {
__String = 0,
__Symbol = 1,
__DefaultValue = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloatFormatHandling_Unwrapped () const noexcept {
return std::bit_cast<__FloatFormatHandling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field String offset 0
static Newtonsoft::Json::FloatFormatHandling const String;

/// @brief Field Symbol offset 0
static Newtonsoft::Json::FloatFormatHandling const Symbol;

/// @brief Field DefaultValue offset 0
static Newtonsoft::Json::FloatFormatHandling const DefaultValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::FloatFormatHandling, "Newtonsoft.Json", "FloatFormatHandling");
