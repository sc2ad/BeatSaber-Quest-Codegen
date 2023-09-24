#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace RootMotion {
struct Axis;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
class AxisTools;
}
// Type: RootMotion::AxisTools
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12423))
// CS Name: RootMotion.AxisTools
class CORDL_TYPE AxisTools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AxisTools() = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisTools", modifiers: " const&", def_value: None }]
constexpr AxisTools(AxisTools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisTools", modifiers: "&&", def_value: None }]
constexpr AxisTools(AxisTools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AxisTools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AxisTools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AxisTools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AxisTools& operator=(AxisTools&& o) noexcept = default;
  constexpr AxisTools& operator=(AxisTools const& o) noexcept = default;
                


// Methods

/// @brief Method ToVector3 addr 0x11ab29c size 0xe0 virtual false final false
static UnityEngine::Vector3 ToVector3(RootMotion::Axis axis) ;

/// @brief Method ToAxis addr 0x11ab37c size 0x38 virtual false final false
static RootMotion::Axis ToAxis(UnityEngine::Vector3 v) ;

/// @brief Method GetAxisToPoint addr 0x11ab3b4 size 0xfc virtual false final false
static RootMotion::Axis GetAxisToPoint(UnityEngine::Transform t, UnityEngine::Vector3 worldPosition) ;

/// @brief Method GetAxisToDirection addr 0x11ab4fc size 0xfc virtual false final false
static RootMotion::Axis GetAxisToDirection(UnityEngine::Transform t, UnityEngine::Vector3 direction) ;

/// @brief Method GetAxisVectorToPoint addr 0x11ab4b0 size 0x4c virtual false final false
static UnityEngine::Vector3 GetAxisVectorToPoint(UnityEngine::Transform t, UnityEngine::Vector3 worldPosition) ;

/// @brief Method GetAxisVectorToDirection addr 0x11ab5f8 size 0x44 virtual false final false
static UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine::Transform t, UnityEngine::Vector3 direction) ;

/// @brief Method GetAxisVectorToDirection addr 0x11ab63c size 0x48c virtual false final false
static UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine::Quaternion r, UnityEngine::Vector3 direction) ;

static RootMotion::AxisTools New_ctor() ;

/// @brief Method .ctor addr 0x11abac8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::AxisTools);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::AxisTools, "RootMotion", "AxisTools");
