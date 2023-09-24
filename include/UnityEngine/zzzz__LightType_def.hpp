#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct LightType;
}
// Type: UnityEngine::LightType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10045))
// CS Name: UnityEngine.LightType
struct CORDL_TYPE LightType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightType(int32_t value__) noexcept;


                    constexpr LightType(LightType const&) = default;
                    constexpr LightType(LightType&&) = default;
                    constexpr LightType& operator=(LightType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightType& operator=(LightType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LightType_Unwrapped : int32_t {
__Spot = 0,
__Directional = 1,
__Point = 2,
__Area = 3,
__Rectangle = 3,
__Disc = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightType_Unwrapped () const noexcept {
return std::bit_cast<__LightType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Spot offset 0
static UnityEngine::LightType const Spot;

/// @brief Field Directional offset 0
static UnityEngine::LightType const Directional;

/// @brief Field Point offset 0
static UnityEngine::LightType const Point;

/// @brief Field Area offset 0
static UnityEngine::LightType const Area;

/// @brief Field Rectangle offset 0
static UnityEngine::LightType const Rectangle;

/// @brief Field Disc offset 0
static UnityEngine::LightType const Disc;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightType, "UnityEngine", "LightType");
