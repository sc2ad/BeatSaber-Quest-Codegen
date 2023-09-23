#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
// Type: UnityEngine.InputSystem.XR::Eyes
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6421))
// CS Name: UnityEngine.InputSystem.XR.Eyes
struct CORDL_TYPE Eyes : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_leftEyePosition_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_leftEyeRotation_k__BackingField", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_rightEyePosition_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rightEyeRotation_k__BackingField", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_fixationPoint_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_leftEyeOpenAmount_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_rightEyeOpenAmount_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr Eyes(UnityEngine::Vector3 _leftEyePosition_k__BackingField, UnityEngine::Quaternion _leftEyeRotation_k__BackingField, UnityEngine::Vector3 _rightEyePosition_k__BackingField, UnityEngine::Quaternion _rightEyeRotation_k__BackingField, UnityEngine::Vector3 _fixationPoint_k__BackingField, float_t _leftEyeOpenAmount_k__BackingField, float_t _rightEyeOpenAmount_k__BackingField) noexcept;


                    constexpr Eyes(Eyes const&) = default;
                    constexpr Eyes(Eyes&&) = default;
                    constexpr Eyes& operator=(Eyes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Eyes& operator=(Eyes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Eyes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__leftEyePosition_k__BackingField, put=__set__leftEyePosition_k__BackingField))  _leftEyePosition_k__BackingField;

constexpr void __set__leftEyePosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__leftEyePosition_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__leftEyeRotation_k__BackingField, put=__set__leftEyeRotation_k__BackingField))  _leftEyeRotation_k__BackingField;

constexpr void __set__leftEyeRotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__leftEyeRotation_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rightEyePosition_k__BackingField, put=__set__rightEyePosition_k__BackingField))  _rightEyePosition_k__BackingField;

constexpr void __set__rightEyePosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rightEyePosition_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rightEyeRotation_k__BackingField, put=__set__rightEyeRotation_k__BackingField))  _rightEyeRotation_k__BackingField;

constexpr void __set__rightEyeRotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rightEyeRotation_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__fixationPoint_k__BackingField, put=__set__fixationPoint_k__BackingField))  _fixationPoint_k__BackingField;

constexpr void __set__fixationPoint_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__fixationPoint_k__BackingField() const;

 float_t __declspec(property(get=__get__leftEyeOpenAmount_k__BackingField, put=__set__leftEyeOpenAmount_k__BackingField))  _leftEyeOpenAmount_k__BackingField;

constexpr void __set__leftEyeOpenAmount_k__BackingField(float_t value) ;

constexpr float_t __get__leftEyeOpenAmount_k__BackingField() const;

 float_t __declspec(property(get=__get__rightEyeOpenAmount_k__BackingField, put=__set__rightEyeOpenAmount_k__BackingField))  _rightEyeOpenAmount_k__BackingField;

constexpr void __set__rightEyeOpenAmount_k__BackingField(float_t value) ;

constexpr float_t __get__rightEyeOpenAmount_k__BackingField() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_leftEyePosition, put=set_leftEyePosition))  leftEyePosition;

 UnityEngine::Quaternion __declspec(property(get=get_leftEyeRotation, put=set_leftEyeRotation))  leftEyeRotation;

 UnityEngine::Vector3 __declspec(property(get=get_rightEyePosition, put=set_rightEyePosition))  rightEyePosition;

 UnityEngine::Quaternion __declspec(property(get=get_rightEyeRotation, put=set_rightEyeRotation))  rightEyeRotation;

 UnityEngine::Vector3 __declspec(property(get=get_fixationPoint, put=set_fixationPoint))  fixationPoint;

 float_t __declspec(property(get=get_leftEyeOpenAmount, put=set_leftEyeOpenAmount))  leftEyeOpenAmount;

 float_t __declspec(property(get=get_rightEyeOpenAmount, put=set_rightEyeOpenAmount))  rightEyeOpenAmount;


// Methods

/// @brief Method get_leftEyePosition addr 0x2935a08 size 0xc virtual false final false
 UnityEngine::Vector3 get_leftEyePosition() ;

/// @brief Method set_leftEyePosition addr 0x2935a14 size 0xc virtual false final false
 void set_leftEyePosition(UnityEngine::Vector3 value) ;

/// @brief Method get_leftEyeRotation addr 0x2935a20 size 0xc virtual false final false
 UnityEngine::Quaternion get_leftEyeRotation() ;

/// @brief Method set_leftEyeRotation addr 0x2935a2c size 0xc virtual false final false
 void set_leftEyeRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_rightEyePosition addr 0x2935a38 size 0xc virtual false final false
 UnityEngine::Vector3 get_rightEyePosition() ;

/// @brief Method set_rightEyePosition addr 0x2935a44 size 0xc virtual false final false
 void set_rightEyePosition(UnityEngine::Vector3 value) ;

/// @brief Method get_rightEyeRotation addr 0x2935a50 size 0xc virtual false final false
 UnityEngine::Quaternion get_rightEyeRotation() ;

/// @brief Method set_rightEyeRotation addr 0x2935a5c size 0xc virtual false final false
 void set_rightEyeRotation(UnityEngine::Quaternion value) ;

/// @brief Method get_fixationPoint addr 0x2935a68 size 0xc virtual false final false
 UnityEngine::Vector3 get_fixationPoint() ;

/// @brief Method set_fixationPoint addr 0x2935a74 size 0xc virtual false final false
 void set_fixationPoint(UnityEngine::Vector3 value) ;

/// @brief Method get_leftEyeOpenAmount addr 0x2935a80 size 0x8 virtual false final false
 float_t get_leftEyeOpenAmount() ;

/// @brief Method set_leftEyeOpenAmount addr 0x2935a88 size 0x8 virtual false final false
 void set_leftEyeOpenAmount(float_t value) ;

/// @brief Method get_rightEyeOpenAmount addr 0x2935a90 size 0x8 virtual false final false
 float_t get_rightEyeOpenAmount() ;

/// @brief Method set_rightEyeOpenAmount addr 0x2935a98 size 0x8 virtual false final false
 void set_rightEyeOpenAmount(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Eyes, "UnityEngine.InputSystem.XR", "Eyes");
