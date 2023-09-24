#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct LightmapBakeType;
}
// Type: UnityEngine::LightmapBakeType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10047))
// CS Name: UnityEngine.LightmapBakeType
struct CORDL_TYPE LightmapBakeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightmapBakeType(int32_t value__) noexcept;


                    constexpr LightmapBakeType(LightmapBakeType const&) = default;
                    constexpr LightmapBakeType(LightmapBakeType&&) = default;
                    constexpr LightmapBakeType& operator=(LightmapBakeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightmapBakeType& operator=(LightmapBakeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightmapBakeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LightmapBakeType_Unwrapped : int32_t {
__Realtime = 4,
__Baked = 2,
__Mixed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightmapBakeType_Unwrapped () const noexcept {
return std::bit_cast<__LightmapBakeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Realtime offset 0
static UnityEngine::LightmapBakeType const Realtime;

/// @brief Field Baked offset 0
static UnityEngine::LightmapBakeType const Baked;

/// @brief Field Mixed offset 0
static UnityEngine::LightmapBakeType const Mixed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightmapBakeType, "UnityEngine", "LightmapBakeType");
