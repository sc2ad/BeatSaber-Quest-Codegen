#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
// Type: ::OVRGLTFInputNode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8471))
// CS Name: OVRGLTFInputNode
struct CORDL_TYPE OVRGLTFInputNode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRGLTFInputNode(int32_t value__) noexcept;


                    constexpr OVRGLTFInputNode(OVRGLTFInputNode const&) = default;
                    constexpr OVRGLTFInputNode(OVRGLTFInputNode&&) = default;
                    constexpr OVRGLTFInputNode& operator=(OVRGLTFInputNode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRGLTFInputNode& operator=(OVRGLTFInputNode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFInputNode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OVRGLTFInputNode_Unwrapped : int32_t {
__None = 0,
__Button_A_X = 1,
__Button_B_Y = 2,
__Button_Oculus_Menu = 3,
__Trigger_Grip = 4,
__Trigger_Front = 5,
__ThumbStick = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFInputNode_Unwrapped () const noexcept {
return std::bit_cast<__OVRGLTFInputNode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::OVRGLTFInputNode const None;

/// @brief Field Button_A_X offset 0
static ::GlobalNamespace::OVRGLTFInputNode const Button_A_X;

/// @brief Field Button_B_Y offset 0
static ::GlobalNamespace::OVRGLTFInputNode const Button_B_Y;

/// @brief Field Button_Oculus_Menu offset 0
static ::GlobalNamespace::OVRGLTFInputNode const Button_Oculus_Menu;

/// @brief Field Trigger_Grip offset 0
static ::GlobalNamespace::OVRGLTFInputNode const Trigger_Grip;

/// @brief Field Trigger_Front offset 0
static ::GlobalNamespace::OVRGLTFInputNode const Trigger_Front;

/// @brief Field ThumbStick offset 0
static ::GlobalNamespace::OVRGLTFInputNode const ThumbStick;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFInputNode, "", "OVRGLTFInputNode");
