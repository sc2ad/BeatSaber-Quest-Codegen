#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimit;
}
// Type: RootMotion.FinalIK::RotationLimit
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12564))
// CS Name: RootMotion.FinalIK.RotationLimit
class CORDL_TYPE RotationLimit : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RotationLimit() = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimit", modifiers: " const&", def_value: None }]
constexpr RotationLimit(RotationLimit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimit", modifiers: "&&", def_value: None }]
constexpr RotationLimit(RotationLimit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RotationLimit(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RotationLimit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RotationLimit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RotationLimit& operator=(RotationLimit&& o) noexcept = default;
  constexpr RotationLimit& operator=(RotationLimit const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_axis() const;

 UnityEngine::Quaternion __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation))  defaultLocalRotation;

constexpr void __set_defaultLocalRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_defaultLocalRotation() const;

 bool __declspec(property(get=__get__defaultLocalRotationOverride_k__BackingField, put=__set__defaultLocalRotationOverride_k__BackingField))  _defaultLocalRotationOverride_k__BackingField;

constexpr void __set__defaultLocalRotationOverride_k__BackingField(bool value) ;

constexpr bool __get__defaultLocalRotationOverride_k__BackingField() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 bool __declspec(property(get=__get_applicationQuit, put=__set_applicationQuit))  applicationQuit;

constexpr void __set_applicationQuit(bool value) ;

constexpr bool __get_applicationQuit() const;

 bool __declspec(property(get=__get_defaultLocalRotationSet, put=__set_defaultLocalRotationSet))  defaultLocalRotationSet;

constexpr void __set_defaultLocalRotationSet(bool value) ;

constexpr bool __get_defaultLocalRotationSet() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_secondaryAxis))  secondaryAxis;

 UnityEngine::Vector3 __declspec(property(get=get_crossAxis))  crossAxis;

 bool __declspec(property(get=get_defaultLocalRotationOverride, put=set_defaultLocalRotationOverride))  defaultLocalRotationOverride;


// Methods

/// @brief Method SetDefaultLocalRotation addr 0x12029dc size 0x3c virtual false final false
 void SetDefaultLocalRotation() ;

/// @brief Method SetDefaultLocalRotation addr 0x1202a18 size 0x18 virtual false final false
 void SetDefaultLocalRotation(UnityEngine::Quaternion localRotation) ;

/// @brief Method GetLimitedLocalRotation addr 0x1202a30 size 0x284 virtual false final false
 UnityEngine::Quaternion GetLimitedLocalRotation(UnityEngine::Quaternion localRotation, ByRef<bool> changed) ;

/// @brief Method Apply addr 0x1202db0 size 0x64 virtual false final false
 bool Apply() ;

/// @brief Method Disable addr 0x1202e14 size 0x2c virtual false final false
 void Disable() ;

/// @brief Method get_secondaryAxis addr 0x1202e40 size 0xc virtual false final false
 UnityEngine::Vector3 get_secondaryAxis() ;

/// @brief Method get_crossAxis addr 0x1202e4c size 0x30 virtual false final false
 UnityEngine::Vector3 get_crossAxis() ;

/// @brief Method get_defaultLocalRotationOverride addr 0x1202e7c size 0x8 virtual false final false
 bool get_defaultLocalRotationOverride() ;

/// @brief Method set_defaultLocalRotationOverride addr 0x1202e84 size 0xc virtual false final false
 void set_defaultLocalRotationOverride(bool value) ;

/// @brief Method LimitRotation addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation) ;

/// @brief Method Awake addr 0x1202cb4 size 0xfc virtual false final false
 void Awake() ;

/// @brief Method LateUpdate addr 0x1202e90 size 0x4 virtual false final false
 void LateUpdate() ;

/// @brief Method LogWarning addr 0x1202e94 size 0x28 virtual false final false
 void LogWarning(::StringW message) ;

/// @brief Method Limit1DOF addr 0x1202ebc size 0xd4 virtual false final false
static UnityEngine::Quaternion Limit1DOF(UnityEngine::Quaternion rotation, UnityEngine::Vector3 axis) ;

/// @brief Method LimitTwist addr 0x1202f90 size 0x258 virtual false final false
static UnityEngine::Quaternion LimitTwist(UnityEngine::Quaternion rotation, UnityEngine::Vector3 axis, UnityEngine::Vector3 orthoAxis, float_t twistLimit) ;

/// @brief Method GetOrthogonalAngle addr 0x12031e8 size 0x154 virtual false final false
static float_t GetOrthogonalAngle(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, UnityEngine::Vector3 normal) ;

static RootMotion::FinalIK::RotationLimit New_ctor() ;

/// @brief Method .ctor addr 0x120333c size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::RotationLimit);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimit, "RootMotion.FinalIK", "RotationLimit");
