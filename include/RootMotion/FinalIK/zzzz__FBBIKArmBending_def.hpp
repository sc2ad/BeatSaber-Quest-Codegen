#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FBBIKArmBending;
}
// Type: RootMotion.FinalIK::FBBIKArmBending
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12487))
// CS Name: RootMotion.FinalIK.FBBIKArmBending
class CORDL_TYPE FBBIKArmBending : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~FBBIKArmBending() = default;

// Ctor Parameters [CppParam { name: "", ty: "FBBIKArmBending", modifiers: " const&", def_value: None }]
constexpr FBBIKArmBending(FBBIKArmBending const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FBBIKArmBending", modifiers: "&&", def_value: None }]
constexpr FBBIKArmBending(FBBIKArmBending&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FBBIKArmBending(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FBBIKArmBending& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FBBIKArmBending& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FBBIKArmBending& operator=(FBBIKArmBending&& o) noexcept = default;
  constexpr FBBIKArmBending& operator=(FBBIKArmBending const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedIK __get_ik() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_bendDirectionOffsetLeft, put=__set_bendDirectionOffsetLeft))  bendDirectionOffsetLeft;

constexpr void __set_bendDirectionOffsetLeft(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_bendDirectionOffsetLeft() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_bendDirectionOffsetRight, put=__set_bendDirectionOffsetRight))  bendDirectionOffsetRight;

constexpr void __set_bendDirectionOffsetRight(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_bendDirectionOffsetRight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_characterSpaceBendOffsetLeft, put=__set_characterSpaceBendOffsetLeft))  characterSpaceBendOffsetLeft;

constexpr void __set_characterSpaceBendOffsetLeft(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_characterSpaceBendOffsetLeft() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_characterSpaceBendOffsetRight, put=__set_characterSpaceBendOffsetRight))  characterSpaceBendOffsetRight;

constexpr void __set_characterSpaceBendOffsetRight(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_characterSpaceBendOffsetRight() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_leftHandTargetRotation, put=__set_leftHandTargetRotation))  leftHandTargetRotation;

constexpr void __set_leftHandTargetRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_leftHandTargetRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rightHandTargetRotation, put=__set_rightHandTargetRotation))  rightHandTargetRotation;

constexpr void __set_rightHandTargetRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rightHandTargetRotation() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;


// Methods

/// @brief Method LateUpdate addr 0x11c6f74 size 0x49c virtual false final false
 void LateUpdate() ;

/// @brief Method OnPostFBBIK addr 0x11c7410 size 0x194 virtual false final false
 void OnPostFBBIK() ;

/// @brief Method OnDestroy addr 0x11c75a4 size 0x10c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit FBBIKArmBending() ;

/// @brief Method .ctor addr 0x11c76b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKArmBending);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKArmBending, "RootMotion.FinalIK", "FBBIKArmBending");
