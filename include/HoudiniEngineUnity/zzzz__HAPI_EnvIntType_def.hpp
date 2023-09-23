#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_EnvIntType;
}
// Type: HoudiniEngineUnity::HAPI_EnvIntType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9659))
// CS Name: HoudiniEngineUnity.HAPI_EnvIntType
struct CORDL_TYPE HAPI_EnvIntType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_EnvIntType(int32_t value__) noexcept;


                    constexpr HAPI_EnvIntType(HAPI_EnvIntType const&) = default;
                    constexpr HAPI_EnvIntType(HAPI_EnvIntType&&) = default;
                    constexpr HAPI_EnvIntType& operator=(HAPI_EnvIntType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_EnvIntType& operator=(HAPI_EnvIntType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_EnvIntType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_EnvIntType_Unwrapped : int32_t {
__HAPI_ENVINT_INVALID = -1,
__HAPI_ENVINT_VERSION_HOUDINI_MAJOR = 100,
__HAPI_ENVINT_VERSION_HOUDINI_MINOR = 110,
__HAPI_ENVINT_VERSION_HOUDINI_BUILD = 120,
__HAPI_ENVINT_VERSION_HOUDINI_PATCH = 130,
__HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR = 200,
__HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR = 210,
__HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API = 220,
__HAPI_ENVINT_MAX = 221,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_EnvIntType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_EnvIntType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_ENVINT_INVALID offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_INVALID;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_MAJOR offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_MAJOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_MINOR offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_MINOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_BUILD offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_BUILD;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_PATCH offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_PATCH;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API;

/// @brief Field HAPI_ENVINT_MAX offset 0
static HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_EnvIntType, "HoudiniEngineUnity", "HAPI_EnvIntType");
