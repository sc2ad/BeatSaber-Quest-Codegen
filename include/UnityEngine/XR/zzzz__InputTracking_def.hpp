#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::XR {
struct UnityEngine__XR__InputTracking__TrackingStateEventType;
}
namespace UnityEngine::XR {
class InputTracking;
}
// Type: ::TrackingStateEventType
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15575))
// CS Name: UnityEngine.XR.InputTracking::TrackingStateEventType
struct CORDL_TYPE UnityEngine__XR__InputTracking__TrackingStateEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__InputTracking__TrackingStateEventType(int32_t value__) noexcept;


                    constexpr UnityEngine__XR__InputTracking__TrackingStateEventType(UnityEngine__XR__InputTracking__TrackingStateEventType const&) = default;
                    constexpr UnityEngine__XR__InputTracking__TrackingStateEventType(UnityEngine__XR__InputTracking__TrackingStateEventType&&) = default;
                    constexpr UnityEngine__XR__InputTracking__TrackingStateEventType& operator=(UnityEngine__XR__InputTracking__TrackingStateEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__InputTracking__TrackingStateEventType& operator=(UnityEngine__XR__InputTracking__TrackingStateEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__InputTracking__TrackingStateEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__XR__InputTracking__TrackingStateEventType_Unwrapped : int32_t {
__NodeAdded = 0,
__NodeRemoved = 1,
__TrackingAcquired = 2,
__TrackingLost = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__XR__InputTracking__TrackingStateEventType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__XR__InputTracking__TrackingStateEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NodeAdded offset 0
static UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType const NodeAdded;

/// @brief Field NodeRemoved offset 0
static UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType const NodeRemoved;

/// @brief Field TrackingAcquired offset 0
static UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType const TrackingAcquired;

/// @brief Field TrackingLost offset 0
static UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType const TrackingLost;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::InputTracking
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15576))
// CS Name: UnityEngine.XR.InputTracking
class CORDL_TYPE InputTracking : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TrackingStateEventType = UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputTracking() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputTracking", modifiers: " const&", def_value: None }]
constexpr InputTracking(InputTracking const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputTracking", modifiers: "&&", def_value: None }]
constexpr InputTracking(InputTracking&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputTracking(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputTracking& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputTracking& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputTracking& operator=(InputTracking&& o) noexcept = default;
  constexpr InputTracking& operator=(InputTracking const& o) noexcept = default;
                


// Fields

static System::Action_1<UnityEngine::XR::XRNodeState> __declspec(property(get=__get_trackingAcquired, put=__set_trackingAcquired))  trackingAcquired;

static void __set_trackingAcquired(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

static System::Action_1<UnityEngine::XR::XRNodeState> __get_trackingAcquired() ;

static System::Action_1<UnityEngine::XR::XRNodeState> __declspec(property(get=__get_trackingLost, put=__set_trackingLost))  trackingLost;

static void __set_trackingLost(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

static System::Action_1<UnityEngine::XR::XRNodeState> __get_trackingLost() ;

static System::Action_1<UnityEngine::XR::XRNodeState> __declspec(property(get=__get_nodeAdded, put=__set_nodeAdded))  nodeAdded;

static void __set_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

static System::Action_1<UnityEngine::XR::XRNodeState> __get_nodeAdded() ;

static System::Action_1<UnityEngine::XR::XRNodeState> __declspec(property(get=__get_nodeRemoved, put=__set_nodeRemoved))  nodeRemoved;

static void __set_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

static System::Action_1<UnityEngine::XR::XRNodeState> __get_nodeRemoved() ;


// Methods

/// @brief Method GetNodeStates addr 0x2d394bc size 0xb8 virtual false final false
static void GetNodeStates(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> nodeStates) ;

/// @brief Method GetNodeStates_Internal addr 0x2d39574 size 0x3c virtual false final false
static void GetNodeStates_Internal(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState> nodeStates) ;

/// @brief Method GetDeviceIdAtXRNode addr 0x2d393d4 size 0x3c virtual false final false
static uint64_t GetDeviceIdAtXRNode(UnityEngine::XR::XRNode node) ;

/// @brief Method add_nodeAdded addr 0x2d395b0 size 0xd0 virtual false final false
static void add_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

/// @brief Method remove_nodeAdded addr 0x2d39680 size 0xd0 virtual false final false
static void remove_nodeAdded(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

/// @brief Method add_nodeRemoved addr 0x2d39750 size 0xd0 virtual false final false
static void add_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

/// @brief Method remove_nodeRemoved addr 0x2d39820 size 0xd0 virtual false final false
static void remove_nodeRemoved(System::Action_1<UnityEngine::XR::XRNodeState> value) ;

/// @brief Method InvokeTrackingEvent addr 0x2d398f0 size 0x198 virtual false final false
static void InvokeTrackingEvent(UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType eventType, UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::UnityEngine__XR__InputTracking__TrackingStateEventType, "UnityEngine.XR", "InputTracking/TrackingStateEventType");
NEED_NO_BOX(UnityEngine::XR::InputTracking);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputTracking, "UnityEngine.XR", "InputTracking");
