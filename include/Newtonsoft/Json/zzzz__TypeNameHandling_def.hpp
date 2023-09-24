#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
// Type: Newtonsoft.Json::TypeNameHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11782))
// CS Name: Newtonsoft.Json.TypeNameHandling
struct CORDL_TYPE TypeNameHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeNameHandling(int32_t value__) noexcept;


                    constexpr TypeNameHandling(TypeNameHandling const&) = default;
                    constexpr TypeNameHandling(TypeNameHandling&&) = default;
                    constexpr TypeNameHandling& operator=(TypeNameHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeNameHandling& operator=(TypeNameHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeNameHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TypeNameHandling_Unwrapped : int32_t {
__None = 0,
__Objects = 1,
__Arrays = 2,
__All = 3,
__Auto = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeNameHandling_Unwrapped () const noexcept {
return std::bit_cast<__TypeNameHandling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Newtonsoft::Json::TypeNameHandling const None;

/// @brief Field Objects offset 0
static Newtonsoft::Json::TypeNameHandling const Objects;

/// @brief Field Arrays offset 0
static Newtonsoft::Json::TypeNameHandling const Arrays;

/// @brief Field All offset 0
static Newtonsoft::Json::TypeNameHandling const All;

/// @brief Field Auto offset 0
static Newtonsoft::Json::TypeNameHandling const Auto;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::TypeNameHandling, "Newtonsoft.Json", "TypeNameHandling");
