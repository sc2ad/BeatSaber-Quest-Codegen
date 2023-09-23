#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct CubemapFace;
}
// Type: UnityEngine::CubemapFace
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10058))
// CS Name: UnityEngine.CubemapFace
struct CORDL_TYPE CubemapFace : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CubemapFace(int32_t value__) noexcept;


                    constexpr CubemapFace(CubemapFace const&) = default;
                    constexpr CubemapFace(CubemapFace&&) = default;
                    constexpr CubemapFace& operator=(CubemapFace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CubemapFace& operator=(CubemapFace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CubemapFace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CubemapFace_Unwrapped : int32_t {
__Unknown = -1,
__PositiveX = 0,
__NegativeX = 1,
__PositiveY = 2,
__NegativeY = 3,
__PositiveZ = 4,
__NegativeZ = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CubemapFace_Unwrapped () const noexcept {
return std::bit_cast<__CubemapFace_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::CubemapFace const Unknown;

/// @brief Field PositiveX offset 0
static UnityEngine::CubemapFace const PositiveX;

/// @brief Field NegativeX offset 0
static UnityEngine::CubemapFace const NegativeX;

/// @brief Field PositiveY offset 0
static UnityEngine::CubemapFace const PositiveY;

/// @brief Field NegativeY offset 0
static UnityEngine::CubemapFace const NegativeY;

/// @brief Field PositiveZ offset 0
static UnityEngine::CubemapFace const PositiveZ;

/// @brief Field NegativeZ offset 0
static UnityEngine::CubemapFace const NegativeZ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CubemapFace, "UnityEngine", "CubemapFace");
