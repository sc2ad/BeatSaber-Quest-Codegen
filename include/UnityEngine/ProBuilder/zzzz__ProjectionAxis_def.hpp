#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
// Type: UnityEngine.ProBuilder::ProjectionAxis
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12100))
// CS Name: UnityEngine.ProBuilder.ProjectionAxis
struct CORDL_TYPE ProjectionAxis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProjectionAxis(int32_t value__) noexcept;


                    constexpr ProjectionAxis(ProjectionAxis const&) = default;
                    constexpr ProjectionAxis(ProjectionAxis&&) = default;
                    constexpr ProjectionAxis& operator=(ProjectionAxis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProjectionAxis& operator=(ProjectionAxis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProjectionAxis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ProjectionAxis_Unwrapped : int32_t {
__X = 0,
__Y = 1,
__Z = 2,
__XNegative = 3,
__YNegative = 4,
__ZNegative = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectionAxis_Unwrapped () const noexcept {
return std::bit_cast<__ProjectionAxis_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field X offset 0
static UnityEngine::ProBuilder::ProjectionAxis const X;

/// @brief Field Y offset 0
static UnityEngine::ProBuilder::ProjectionAxis const Y;

/// @brief Field Z offset 0
static UnityEngine::ProBuilder::ProjectionAxis const Z;

/// @brief Field XNegative offset 0
static UnityEngine::ProBuilder::ProjectionAxis const XNegative;

/// @brief Field YNegative offset 0
static UnityEngine::ProBuilder::ProjectionAxis const YNegative;

/// @brief Field ZNegative offset 0
static UnityEngine::ProBuilder::ProjectionAxis const ZNegative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProjectionAxis, "UnityEngine.ProBuilder", "ProjectionAxis");
