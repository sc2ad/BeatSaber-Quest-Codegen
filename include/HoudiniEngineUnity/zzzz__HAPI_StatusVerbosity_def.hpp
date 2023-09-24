#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_StatusVerbosity;
}
// Type: HoudiniEngineUnity::HAPI_StatusVerbosity
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9629))
// CS Name: HoudiniEngineUnity.HAPI_StatusVerbosity
struct CORDL_TYPE HAPI_StatusVerbosity : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_StatusVerbosity(int32_t value__) noexcept;


                    constexpr HAPI_StatusVerbosity(HAPI_StatusVerbosity const&) = default;
                    constexpr HAPI_StatusVerbosity(HAPI_StatusVerbosity&&) = default;
                    constexpr HAPI_StatusVerbosity& operator=(HAPI_StatusVerbosity const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_StatusVerbosity& operator=(HAPI_StatusVerbosity&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_StatusVerbosity(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_StatusVerbosity_Unwrapped : int32_t {
__HAPI_STATUSVERBOSITY_0 = 0,
__HAPI_STATUSVERBOSITY_1 = 1,
__HAPI_STATUSVERBOSITY_2 = 2,
__HAPI_STATUSVERBOSITY_ALL = 2,
__HAPI_STATUSVERBOSITY_ERRORS = 0,
__HAPI_STATUSVERBOSITY_WARNINGS = 1,
__HAPI_STATUSVERBOSITY_MESSAGES = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_StatusVerbosity_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_StatusVerbosity_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_STATUSVERBOSITY_0 offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_0;

/// @brief Field HAPI_STATUSVERBOSITY_1 offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_1;

/// @brief Field HAPI_STATUSVERBOSITY_2 offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_2;

/// @brief Field HAPI_STATUSVERBOSITY_ALL offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_ALL;

/// @brief Field HAPI_STATUSVERBOSITY_ERRORS offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_ERRORS;

/// @brief Field HAPI_STATUSVERBOSITY_WARNINGS offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_WARNINGS;

/// @brief Field HAPI_STATUSVERBOSITY_MESSAGES offset 0
static HoudiniEngineUnity::HAPI_StatusVerbosity const HAPI_STATUSVERBOSITY_MESSAGES;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_StatusVerbosity, "HoudiniEngineUnity", "HAPI_StatusVerbosity");
