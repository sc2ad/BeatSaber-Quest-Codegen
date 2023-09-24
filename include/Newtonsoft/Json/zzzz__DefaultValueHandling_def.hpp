#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
// Type: Newtonsoft.Json::DefaultValueHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11758))
// CS Name: Newtonsoft.Json.DefaultValueHandling
struct CORDL_TYPE DefaultValueHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DefaultValueHandling(int32_t value__) noexcept;


                    constexpr DefaultValueHandling(DefaultValueHandling const&) = default;
                    constexpr DefaultValueHandling(DefaultValueHandling&&) = default;
                    constexpr DefaultValueHandling& operator=(DefaultValueHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DefaultValueHandling& operator=(DefaultValueHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DefaultValueHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DefaultValueHandling_Unwrapped : int32_t {
__Include = 0,
__Ignore = 1,
__Populate = 2,
__IgnoreAndPopulate = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DefaultValueHandling_Unwrapped () const noexcept {
return std::bit_cast<__DefaultValueHandling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Include offset 0
static Newtonsoft::Json::DefaultValueHandling const Include;

/// @brief Field Ignore offset 0
static Newtonsoft::Json::DefaultValueHandling const Ignore;

/// @brief Field Populate offset 0
static Newtonsoft::Json::DefaultValueHandling const Populate;

/// @brief Field IgnoreAndPopulate offset 0
static Newtonsoft::Json::DefaultValueHandling const IgnoreAndPopulate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::DefaultValueHandling, "Newtonsoft.Json", "DefaultValueHandling");
