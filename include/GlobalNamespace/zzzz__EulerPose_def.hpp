#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct EulerPose;
}
// Type: ::EulerPose
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16057))
// CS Name: EulerPose
struct CORDL_TYPE EulerPose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr EulerPose(UnityEngine::Vector3 position, UnityEngine::Vector3 rotation) noexcept;


                    constexpr EulerPose(EulerPose const&) = default;
                    constexpr EulerPose(EulerPose&&) = default;
                    constexpr EulerPose& operator=(EulerPose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EulerPose& operator=(EulerPose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EulerPose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rotation() const;

static GlobalNamespace::EulerPose __declspec(property(get=__get_kIdentity, put=__set_kIdentity))  kIdentity;

static void __set_kIdentity(GlobalNamespace::EulerPose value) ;

static GlobalNamespace::EulerPose __get_kIdentity() ;


// Properties

static GlobalNamespace::EulerPose __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method .ctor addr 0x22777d8 size 0x10 virtual false final false
 void _ctor(UnityEngine::Vector3 position, UnityEngine::Vector3 rotation) ;

/// @brief Method ToString addr 0x22777e8 size 0x1a4 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x227798c size 0x1b0 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method get_identity addr 0x2277b3c size 0x68 virtual false final false
static GlobalNamespace::EulerPose get_identity() ;

/// @brief Method op_Addition addr 0x2277ba4 size 0x28 virtual false final false
static GlobalNamespace::EulerPose op_Addition(GlobalNamespace::EulerPose left, GlobalNamespace::EulerPose right) ;

/// @brief Method op_Subtraction addr 0x2277bcc size 0x28 virtual false final false
static GlobalNamespace::EulerPose op_Subtraction(GlobalNamespace::EulerPose left, GlobalNamespace::EulerPose right) ;

/// @brief Method MirrorOnYZPlane addr 0x2277bf4 size 0x2c virtual false final false
 GlobalNamespace::EulerPose MirrorOnYZPlane() ;

/// @brief Method Equals addr 0x2277c34 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2277cc4 size 0x124 virtual false final false
 bool Equals(GlobalNamespace::EulerPose other) ;

/// @brief Method GetHashCode addr 0x2277de8 size 0x88 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2277e70 size 0x30 virtual false final false
static bool op_Equality(GlobalNamespace::EulerPose a, GlobalNamespace::EulerPose b) ;

/// @brief Method op_Inequality addr 0x2277ea0 size 0xb8 virtual false final false
static bool op_Inequality(GlobalNamespace::EulerPose a, GlobalNamespace::EulerPose b) ;

/// @brief Method ToPose addr 0x2277f58 size 0x88 virtual false final false
 UnityEngine::Pose ToPose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulerPose, "", "EulerPose");
