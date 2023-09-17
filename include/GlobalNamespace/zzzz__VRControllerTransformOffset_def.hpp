#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
// Type: ::VRControllerTransformOffset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13939))
// CS Name: VRControllerTransformOffset
class CORDL_TYPE VRControllerTransformOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VRControllerTransformOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRControllerTransformOffset", modifiers: " const&", def_value: None }]
constexpr VRControllerTransformOffset(VRControllerTransformOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRControllerTransformOffset", modifiers: "&&", def_value: None }]
constexpr VRControllerTransformOffset(VRControllerTransformOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRControllerTransformOffset(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRControllerTransformOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRControllerTransformOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRControllerTransformOffset& operator=(VRControllerTransformOffset&& o) noexcept = default;
  constexpr VRControllerTransformOffset& operator=(VRControllerTransformOffset const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Pose __declspec(property(get=get_poseOffset))  poseOffset;

 ::UnityEngine::Vector3 __declspec(property(get=get_positionOffset))  positionOffset;

 ::UnityEngine::Vector3 __declspec(property(get=get_rotationOffset))  rotationOffset;


// Methods

/// @brief Method get_poseOffset addr 0x1f8e118 size 0xb0 virtual false final false
 ::UnityEngine::Pose get_poseOffset() ;

/// @brief Method get_positionOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 get_positionOffset() ;

/// @brief Method get_rotationOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 get_rotationOffset() ;

// Ctor Parameters []
explicit VRControllerTransformOffset() ;

/// @brief Method .ctor addr 0x1f8e64c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VRControllerTransformOffset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllerTransformOffset, "", "VRControllerTransformOffset");
