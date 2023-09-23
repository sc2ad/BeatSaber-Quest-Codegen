#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Posef;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPose;
}
// Type: ::OVRPose
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8454))
// CS Name: OVRPose
struct CORDL_TYPE OVRPose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr OVRPose(UnityEngine::Vector3 position, UnityEngine::Quaternion orientation) noexcept;


                    constexpr OVRPose(OVRPose const&) = default;
                    constexpr OVRPose(OVRPose&&) = default;
                    constexpr OVRPose& operator=(OVRPose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRPose& operator=(OVRPose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRPose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Quaternion __declspec(property(get=__get_orientation, put=__set_orientation))  orientation;

constexpr void __set_orientation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_orientation() const;


// Properties

static GlobalNamespace::OVRPose __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method get_identity addr 0x25ab02c size 0x98 virtual false final false
static GlobalNamespace::OVRPose get_identity() ;

/// @brief Method Equals addr 0x25ad93c size 0xf8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x25adab8 size 0xa8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x25ada34 size 0x84 virtual false final false
static bool op_Equality(GlobalNamespace::OVRPose x, GlobalNamespace::OVRPose y) ;

/// @brief Method op_Inequality addr 0x25adb60 size 0x84 virtual false final false
static bool op_Inequality(GlobalNamespace::OVRPose x, GlobalNamespace::OVRPose y) ;

/// @brief Method op_Multiply addr 0x25a5448 size 0xe4 virtual false final false
static GlobalNamespace::OVRPose op_Multiply(GlobalNamespace::OVRPose lhs, GlobalNamespace::OVRPose rhs) ;

/// @brief Method Inverse addr 0x25a8bf4 size 0x84 virtual false final false
 GlobalNamespace::OVRPose Inverse() ;

/// @brief Method flipZ addr 0x25adbe4 size 0x2c virtual false final false
 GlobalNamespace::OVRPose flipZ() ;

/// @brief Method ToPosef_Legacy addr 0x25adc10 size 0x1c virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__Posef ToPosef_Legacy() ;

/// @brief Method ToPosef addr 0x25a8c78 size 0x28 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__Posef ToPosef() ;

/// @brief Method Rotate180AlongX addr 0x25adc2c size 0xe0 virtual false final false
 GlobalNamespace::OVRPose Rotate180AlongX() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPose, "", "OVRPose");
