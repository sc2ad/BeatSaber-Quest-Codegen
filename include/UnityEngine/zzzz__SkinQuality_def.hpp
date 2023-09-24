#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct SkinQuality;
}
// Type: UnityEngine::SkinQuality
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10052))
// CS Name: UnityEngine.SkinQuality
struct CORDL_TYPE SkinQuality : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SkinQuality(int32_t value__) noexcept;


                    constexpr SkinQuality(SkinQuality const&) = default;
                    constexpr SkinQuality(SkinQuality&&) = default;
                    constexpr SkinQuality& operator=(SkinQuality const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SkinQuality& operator=(SkinQuality&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SkinQuality(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SkinQuality_Unwrapped : int32_t {
__Auto = 0,
__Bone1 = 1,
__Bone2 = 2,
__Bone4 = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SkinQuality_Unwrapped () const noexcept {
return std::bit_cast<__SkinQuality_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static UnityEngine::SkinQuality const Auto;

/// @brief Field Bone1 offset 0
static UnityEngine::SkinQuality const Bone1;

/// @brief Field Bone2 offset 0
static UnityEngine::SkinQuality const Bone2;

/// @brief Field Bone4 offset 0
static UnityEngine::SkinQuality const Bone4;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkinQuality, "UnityEngine", "SkinQuality");
