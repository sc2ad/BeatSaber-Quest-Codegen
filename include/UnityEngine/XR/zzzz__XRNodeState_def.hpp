#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::XR {
struct AvailableTrackingData;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR {
struct XRNodeState;
}
// Type: UnityEngine.XR::XRNodeState
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15578))
// CS Name: UnityEngine.XR.XRNodeState
struct CORDL_TYPE XRNodeState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::XR::XRNode", modifiers: "", def_value: None }, CppParam { name: "m_AvailableFields", ty: "::UnityEngine::XR::AvailableTrackingData", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularAcceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Tracked", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UniqueID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr XRNodeState(::UnityEngine::XR::XRNode m_Type, ::UnityEngine::XR::AvailableTrackingData m_AvailableFields, ::UnityEngine::Vector3 m_Position, ::UnityEngine::Quaternion m_Rotation, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AngularVelocity, ::UnityEngine::Vector3 m_Acceleration, ::UnityEngine::Vector3 m_AngularAcceleration, int32_t m_Tracked, uint64_t m_UniqueID) noexcept;


                    constexpr XRNodeState(XRNodeState const&) = default;
                    constexpr XRNodeState(XRNodeState&&) = default;
                    constexpr XRNodeState& operator=(XRNodeState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XRNodeState& operator=(XRNodeState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XRNodeState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::XR::XRNode __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(::UnityEngine::XR::XRNode value) ;

constexpr ::UnityEngine::XR::XRNode __get_m_Type() const;

 ::UnityEngine::XR::AvailableTrackingData __declspec(property(get=__get_m_AvailableFields, put=__set_m_AvailableFields))  m_AvailableFields;

constexpr void __set_m_AvailableFields(::UnityEngine::XR::AvailableTrackingData value) ;

constexpr ::UnityEngine::XR::AvailableTrackingData __get_m_AvailableFields() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Position() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_m_Rotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Velocity, put=__set_m_Velocity))  m_Velocity;

constexpr void __set_m_Velocity(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Velocity() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_AngularVelocity, put=__set_m_AngularVelocity))  m_AngularVelocity;

constexpr void __set_m_AngularVelocity(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_AngularVelocity() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Acceleration, put=__set_m_Acceleration))  m_Acceleration;

constexpr void __set_m_Acceleration(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Acceleration() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_AngularAcceleration, put=__set_m_AngularAcceleration))  m_AngularAcceleration;

constexpr void __set_m_AngularAcceleration(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_AngularAcceleration() const;

 int32_t __declspec(property(get=__get_m_Tracked, put=__set_m_Tracked))  m_Tracked;

constexpr void __set_m_Tracked(int32_t value) ;

constexpr int32_t __get_m_Tracked() const;

 uint64_t __declspec(property(get=__get_m_UniqueID, put=__set_m_UniqueID))  m_UniqueID;

constexpr void __set_m_UniqueID(uint64_t value) ;

constexpr uint64_t __get_m_UniqueID() const;


// Properties

 uint64_t __declspec(property(put=set_uniqueID))  uniqueID;

 ::UnityEngine::XR::XRNode __declspec(property(get=get_nodeType, put=set_nodeType))  nodeType;

 bool __declspec(property(put=set_tracked))  tracked;


// Methods

/// @brief Method set_uniqueID addr 0x2d39a88 size 0x8 virtual false final false
 void set_uniqueID(uint64_t value) ;

/// @brief Method get_nodeType addr 0x2d39aa4 size 0x8 virtual false final false
 ::UnityEngine::XR::XRNode get_nodeType() ;

/// @brief Method set_nodeType addr 0x2d39a90 size 0x8 virtual false final false
 void set_nodeType(::UnityEngine::XR::XRNode value) ;

/// @brief Method set_tracked addr 0x2d39a98 size 0xc virtual false final false
 void set_tracked(bool value) ;

/// @brief Method TryGetPosition addr 0x2d39aac size 0x14 virtual false final false
 bool TryGetPosition(ByRef<::UnityEngine::Vector3> position) ;

/// @brief Method TryGetRotation addr 0x2d39b3c size 0x14 virtual false final false
 bool TryGetRotation(ByRef<::UnityEngine::Quaternion> rotation) ;

/// @brief Method TryGetVelocity addr 0x2d39bc4 size 0x14 virtual false final false
 bool TryGetVelocity(ByRef<::UnityEngine::Vector3> velocity) ;

/// @brief Method TryGetAngularVelocity addr 0x2d39bd8 size 0x14 virtual false final false
 bool TryGetAngularVelocity(ByRef<::UnityEngine::Vector3> angularVelocity) ;

/// @brief Method TryGetAcceleration addr 0x2d39bec size 0x14 virtual false final false
 bool TryGetAcceleration(ByRef<::UnityEngine::Vector3> acceleration) ;

/// @brief Method TryGetAngularAcceleration addr 0x2d39c00 size 0x14 virtual false final false
 bool TryGetAngularAcceleration(ByRef<::UnityEngine::Vector3> angularAcceleration) ;

/// @brief Method TryGet addr 0x2d39ac0 size 0x7c virtual false final false
 bool TryGet(::UnityEngine::Vector3 inValue, ::UnityEngine::XR::AvailableTrackingData availabilityFlag, ByRef<::UnityEngine::Vector3> outValue) ;

/// @brief Method TryGet addr 0x2d39b50 size 0x74 virtual false final false
 bool TryGet(::UnityEngine::Quaternion inValue, ::UnityEngine::XR::AvailableTrackingData availabilityFlag, ByRef<::UnityEngine::Quaternion> outValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRNodeState, "UnityEngine.XR", "XRNodeState");
