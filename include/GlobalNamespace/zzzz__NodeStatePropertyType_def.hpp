#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
// Type: ::NodeStatePropertyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8452))
// CS Name: NodeStatePropertyType
struct CORDL_TYPE NodeStatePropertyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NodeStatePropertyType(int32_t value__) noexcept;


                    constexpr NodeStatePropertyType(NodeStatePropertyType const&) = default;
                    constexpr NodeStatePropertyType(NodeStatePropertyType&&) = default;
                    constexpr NodeStatePropertyType& operator=(NodeStatePropertyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NodeStatePropertyType& operator=(NodeStatePropertyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NodeStatePropertyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NodeStatePropertyType_Unwrapped : int32_t {
__Acceleration = 0,
__AngularAcceleration = 1,
__Velocity = 2,
__AngularVelocity = 3,
__Position = 4,
__Orientation = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NodeStatePropertyType_Unwrapped () const noexcept {
return std::bit_cast<__NodeStatePropertyType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Acceleration offset 0
static GlobalNamespace::NodeStatePropertyType const Acceleration;

/// @brief Field AngularAcceleration offset 0
static GlobalNamespace::NodeStatePropertyType const AngularAcceleration;

/// @brief Field Velocity offset 0
static GlobalNamespace::NodeStatePropertyType const Velocity;

/// @brief Field AngularVelocity offset 0
static GlobalNamespace::NodeStatePropertyType const AngularVelocity;

/// @brief Field Position offset 0
static GlobalNamespace::NodeStatePropertyType const Position;

/// @brief Field Orientation offset 0
static GlobalNamespace::NodeStatePropertyType const Orientation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodeStatePropertyType, "", "NodeStatePropertyType");
