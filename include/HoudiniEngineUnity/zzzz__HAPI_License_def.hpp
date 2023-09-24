#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_License;
}
// Type: HoudiniEngineUnity::HAPI_License
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9627))
// CS Name: HoudiniEngineUnity.HAPI_License
struct CORDL_TYPE HAPI_License : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_License(int32_t value__) noexcept;


                    constexpr HAPI_License(HAPI_License const&) = default;
                    constexpr HAPI_License(HAPI_License&&) = default;
                    constexpr HAPI_License& operator=(HAPI_License const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_License& operator=(HAPI_License&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_License(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_License_Unwrapped : int32_t {
__HAPI_LICENSE_NONE = 0,
__HAPI_LICENSE_HOUDINI_ENGINE = 1,
__HAPI_LICENSE_HOUDINI = 2,
__HAPI_LICENSE_HOUDINI_FX = 3,
__HAPI_LICENSE_HOUDINI_ENGINE_INDIE = 4,
__HAPI_LICENSE_HOUDINI_INDIE = 5,
__HAPI_LICENSE_MAX = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_License_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_License_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_LICENSE_NONE offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_NONE;

/// @brief Field HAPI_LICENSE_HOUDINI_ENGINE offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_ENGINE;

/// @brief Field HAPI_LICENSE_HOUDINI offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI;

/// @brief Field HAPI_LICENSE_HOUDINI_FX offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_FX;

/// @brief Field HAPI_LICENSE_HOUDINI_ENGINE_INDIE offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_ENGINE_INDIE;

/// @brief Field HAPI_LICENSE_HOUDINI_INDIE offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_INDIE;

/// @brief Field HAPI_LICENSE_MAX offset 0
static HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_License, "HoudiniEngineUnity", "HAPI_License");
