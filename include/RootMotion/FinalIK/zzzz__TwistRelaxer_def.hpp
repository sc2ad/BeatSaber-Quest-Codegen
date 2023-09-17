#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class TwistRelaxer;
}
// Type: RootMotion.FinalIK::TwistRelaxer
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12536))
// CS Name: RootMotion.FinalIK.TwistRelaxer
class CORDL_TYPE TwistRelaxer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~TwistRelaxer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TwistRelaxer", modifiers: " const&", def_value: None }]
constexpr TwistRelaxer(TwistRelaxer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TwistRelaxer", modifiers: "&&", def_value: None }]
constexpr TwistRelaxer(TwistRelaxer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TwistRelaxer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TwistRelaxer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TwistRelaxer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TwistRelaxer& operator=(TwistRelaxer&& o) noexcept = default;
  constexpr TwistRelaxer& operator=(TwistRelaxer const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::IK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::IK value) ;

constexpr ::RootMotion::FinalIK::IK __get_ik() const;

 ::UnityEngine::Transform __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_parent() const;

 ::UnityEngine::Transform __declspec(property(get=__get_child, put=__set_child))  child;

constexpr void __set_child(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_child() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 float_t __declspec(property(get=__get_parentChildCrossfade, put=__set_parentChildCrossfade))  parentChildCrossfade;

constexpr void __set_parentChildCrossfade(float_t value) ;

constexpr float_t __get_parentChildCrossfade() const;

 float_t __declspec(property(get=__get_twistAngleOffset, put=__set_twistAngleOffset))  twistAngleOffset;

constexpr void __set_twistAngleOffset(float_t value) ;

constexpr float_t __get_twistAngleOffset() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_twistAxis, put=__set_twistAxis))  twistAxis;

constexpr void __set_twistAxis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_twistAxis() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_axis() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_axisRelativeToParentDefault, put=__set_axisRelativeToParentDefault))  axisRelativeToParentDefault;

constexpr void __set_axisRelativeToParentDefault(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_axisRelativeToParentDefault() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_axisRelativeToChildDefault, put=__set_axisRelativeToChildDefault))  axisRelativeToChildDefault;

constexpr void __set_axisRelativeToChildDefault(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_axisRelativeToChildDefault() const;


// Methods

/// @brief Method Relax addr 0x11f6bc0 size 0x444 virtual false final false
 void Relax() ;

/// @brief Method Start addr 0x11f7004 size 0x3a0 virtual false final false
 void Start() ;

/// @brief Method OnPostUpdate addr 0x11f73a4 size 0x78 virtual false final false
 void OnPostUpdate() ;

/// @brief Method LateUpdate addr 0x11f741c size 0x78 virtual false final false
 void LateUpdate() ;

/// @brief Method OnDestroy addr 0x11f7494 size 0x118 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit TwistRelaxer() ;

/// @brief Method .ctor addr 0x11f75ac size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::TwistRelaxer);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TwistRelaxer, "RootMotion.FinalIK", "TwistRelaxer");
