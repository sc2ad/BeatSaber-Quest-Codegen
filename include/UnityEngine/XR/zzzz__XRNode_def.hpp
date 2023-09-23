#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct XRNode;
}
// Type: UnityEngine.XR::XRNode
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15563))
// CS Name: UnityEngine.XR.XRNode
struct CORDL_TYPE XRNode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XRNode(int32_t value__) noexcept;


                    constexpr XRNode(XRNode const&) = default;
                    constexpr XRNode(XRNode&&) = default;
                    constexpr XRNode& operator=(XRNode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XRNode& operator=(XRNode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XRNode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XRNode_Unwrapped : int32_t {
__LeftEye = 0,
__RightEye = 1,
__CenterEye = 2,
__Head = 3,
__LeftHand = 4,
__RightHand = 5,
__GameController = 6,
__TrackingReference = 7,
__HardwareTracker = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRNode_Unwrapped () const noexcept {
return std::bit_cast<__XRNode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftEye offset 0
static UnityEngine::XR::XRNode const LeftEye;

/// @brief Field RightEye offset 0
static UnityEngine::XR::XRNode const RightEye;

/// @brief Field CenterEye offset 0
static UnityEngine::XR::XRNode const CenterEye;

/// @brief Field Head offset 0
static UnityEngine::XR::XRNode const Head;

/// @brief Field LeftHand offset 0
static UnityEngine::XR::XRNode const LeftHand;

/// @brief Field RightHand offset 0
static UnityEngine::XR::XRNode const RightHand;

/// @brief Field GameController offset 0
static UnityEngine::XR::XRNode const GameController;

/// @brief Field TrackingReference offset 0
static UnityEngine::XR::XRNode const TrackingReference;

/// @brief Field HardwareTracker offset 0
static UnityEngine::XR::XRNode const HardwareTracker;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRNode, "UnityEngine.XR", "XRNode");
