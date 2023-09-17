#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct PrimitiveType;
}
// Type: UnityEngine::PrimitiveType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9974))
// CS Name: UnityEngine.PrimitiveType
struct CORDL_TYPE PrimitiveType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PrimitiveType(int32_t value__) noexcept;


                    constexpr PrimitiveType(PrimitiveType const&) = default;
                    constexpr PrimitiveType(PrimitiveType&&) = default;
                    constexpr PrimitiveType& operator=(PrimitiveType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PrimitiveType& operator=(PrimitiveType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PrimitiveType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PrimitiveType_Unwrapped : int32_t {
__Sphere = 0,
__Capsule = 1,
__Cylinder = 2,
__Cube = 3,
__Plane = 4,
__Quad = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PrimitiveType_Unwrapped () const noexcept {
return std::bit_cast<__PrimitiveType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sphere offset 0
static ::UnityEngine::PrimitiveType const Sphere;

/// @brief Field Capsule offset 0
static ::UnityEngine::PrimitiveType const Capsule;

/// @brief Field Cylinder offset 0
static ::UnityEngine::PrimitiveType const Cylinder;

/// @brief Field Cube offset 0
static ::UnityEngine::PrimitiveType const Cube;

/// @brief Field Plane offset 0
static ::UnityEngine::PrimitiveType const Plane;

/// @brief Field Quad offset 0
static ::UnityEngine::PrimitiveType const Quad;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PrimitiveType, "UnityEngine", "PrimitiveType");
