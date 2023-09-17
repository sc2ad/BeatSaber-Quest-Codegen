#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SessionEnvIntType;
}
// Type: HoudiniEngineUnity::HAPI_SessionEnvIntType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9660))
// CS Name: HoudiniEngineUnity.HAPI_SessionEnvIntType
struct CORDL_TYPE HAPI_SessionEnvIntType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_SessionEnvIntType(int32_t value__) noexcept;


                    constexpr HAPI_SessionEnvIntType(HAPI_SessionEnvIntType const&) = default;
                    constexpr HAPI_SessionEnvIntType(HAPI_SessionEnvIntType&&) = default;
                    constexpr HAPI_SessionEnvIntType& operator=(HAPI_SessionEnvIntType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_SessionEnvIntType& operator=(HAPI_SessionEnvIntType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_SessionEnvIntType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_SessionEnvIntType_Unwrapped : int32_t {
__HAPI_SESSIONENVINT_INVALID = -1,
__HAPI_SESSIONENVINT_LICENSE = 100,
__HAPI_SESSIONENVINT_MAX = 101,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_SessionEnvIntType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_SessionEnvIntType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_SESSIONENVINT_INVALID offset 0
static ::HoudiniEngineUnity::HAPI_SessionEnvIntType const HAPI_SESSIONENVINT_INVALID;

/// @brief Field HAPI_SESSIONENVINT_LICENSE offset 0
static ::HoudiniEngineUnity::HAPI_SessionEnvIntType const HAPI_SESSIONENVINT_LICENSE;

/// @brief Field HAPI_SESSIONENVINT_MAX offset 0
static ::HoudiniEngineUnity::HAPI_SessionEnvIntType const HAPI_SESSIONENVINT_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SessionEnvIntType, "HoudiniEngineUnity", "HAPI_SessionEnvIntType");
