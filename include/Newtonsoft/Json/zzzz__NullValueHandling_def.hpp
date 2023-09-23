#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct NullValueHandling;
}
// Type: Newtonsoft.Json::NullValueHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11780))
// CS Name: Newtonsoft.Json.NullValueHandling
struct CORDL_TYPE NullValueHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NullValueHandling(int32_t value__) noexcept;


                    constexpr NullValueHandling(NullValueHandling const&) = default;
                    constexpr NullValueHandling(NullValueHandling&&) = default;
                    constexpr NullValueHandling& operator=(NullValueHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NullValueHandling& operator=(NullValueHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NullValueHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NullValueHandling_Unwrapped : int32_t {
__Include = 0,
__Ignore = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NullValueHandling_Unwrapped () const noexcept {
return std::bit_cast<__NullValueHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Include offset 0
static Newtonsoft::Json::NullValueHandling const Include;

/// @brief Field Ignore offset 0
static Newtonsoft::Json::NullValueHandling const Ignore;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::NullValueHandling, "Newtonsoft.Json", "NullValueHandling");
