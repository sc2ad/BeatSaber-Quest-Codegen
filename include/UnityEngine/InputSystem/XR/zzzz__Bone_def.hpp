#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
// Type: UnityEngine.InputSystem.XR::Bone
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6420))
// CS Name: UnityEngine.InputSystem.XR.Bone
struct CORDL_TYPE Bone : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_parentBoneIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rotation_k__BackingField", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr Bone(uint32_t _parentBoneIndex_k__BackingField, UnityEngine::Vector3 _position_k__BackingField, UnityEngine::Quaternion _rotation_k__BackingField) noexcept;


                    constexpr Bone(Bone const&) = default;
                    constexpr Bone(Bone&&) = default;
                    constexpr Bone& operator=(Bone const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Bone& operator=(Bone&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Bone(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get__parentBoneIndex_k__BackingField, put=__set__parentBoneIndex_k__BackingField))  _parentBoneIndex_k__BackingField;

constexpr void __set__parentBoneIndex_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__parentBoneIndex_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rotation_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_parentBoneIndex, put=set_parentBoneIndex))  parentBoneIndex;

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;


// Methods

/// @brief Method get_parentBoneIndex addr 0x29359c8 size 0x8 virtual false final false
 uint32_t get_parentBoneIndex() ;

/// @brief Method set_parentBoneIndex addr 0x29359d0 size 0x8 virtual false final false
 void set_parentBoneIndex(uint32_t value) ;

/// @brief Method get_position addr 0x29359d8 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x29359e4 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x29359f0 size 0xc virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x29359fc size 0xc virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Bone, "UnityEngine.InputSystem.XR", "Bone");
