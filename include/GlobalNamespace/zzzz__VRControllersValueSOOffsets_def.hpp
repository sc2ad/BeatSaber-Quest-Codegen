#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
namespace GlobalNamespace {
class Vector3SO;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllersValueSOOffsets;
}
// Type: ::VRControllersValueSOOffsets
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13939))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4802))
// CS Name: VRControllersValueSOOffsets
class CORDL_TYPE VRControllersValueSOOffsets : public GlobalNamespace::VRControllerTransformOffset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VRControllersValueSOOffsets() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSOOffsets", modifiers: " const&", def_value: None }]
constexpr VRControllersValueSOOffsets(VRControllersValueSOOffsets const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSOOffsets", modifiers: "&&", def_value: None }]
constexpr VRControllersValueSOOffsets(VRControllersValueSOOffsets&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRControllersValueSOOffsets(void* ptr) noexcept : GlobalNamespace::VRControllerTransformOffset(ptr) {
}


  constexpr VRControllersValueSOOffsets& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRControllersValueSOOffsets& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRControllersValueSOOffsets& operator=(VRControllersValueSOOffsets&& o) noexcept = default;
  constexpr VRControllersValueSOOffsets& operator=(VRControllersValueSOOffsets const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Vector3SO __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get__positionOffset() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset))  _rotationOffset;

constexpr void __set__rotationOffset(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get__rotationOffset() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_positionOffset))  positionOffset;

 UnityEngine::Vector3 __declspec(property(get=get_rotationOffset))  rotationOffset;


// Methods

/// @brief Method get_positionOffset addr 0x222c8c4 size 0x4c virtual true final false
 UnityEngine::Vector3 get_positionOffset() ;

/// @brief Method get_rotationOffset addr 0x222c910 size 0x4c virtual true final false
 UnityEngine::Vector3 get_rotationOffset() ;

// Ctor Parameters []
explicit VRControllersValueSOOffsets() ;

/// @brief Method .ctor addr 0x222c95c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VRControllersValueSOOffsets);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersValueSOOffsets, "", "VRControllersValueSOOffsets");
