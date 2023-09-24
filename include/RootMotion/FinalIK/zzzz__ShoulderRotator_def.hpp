#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
struct FullBodyBipedChain;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKMapping__BoneMap;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ShoulderRotator;
}
// Type: RootMotion.FinalIK::ShoulderRotator
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12610))
// CS Name: RootMotion.FinalIK.ShoulderRotator
class CORDL_TYPE ShoulderRotator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ShoulderRotator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShoulderRotator", modifiers: " const&", def_value: None }]
constexpr ShoulderRotator(ShoulderRotator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShoulderRotator", modifiers: "&&", def_value: None }]
constexpr ShoulderRotator(ShoulderRotator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShoulderRotator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ShoulderRotator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShoulderRotator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShoulderRotator& operator=(ShoulderRotator&& o) noexcept = default;
  constexpr ShoulderRotator& operator=(ShoulderRotator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 float_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(float_t value) ;

constexpr float_t __get_offset() const;

 RootMotion::FinalIK::FullBodyBipedIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::FullBodyBipedIK value) ;

constexpr RootMotion::FinalIK::FullBodyBipedIK __get_ik() const;

 bool __declspec(property(get=__get_skip, put=__set_skip))  skip;

constexpr void __set_skip(bool value) ;

constexpr bool __get_skip() const;


// Methods

/// @brief Method Start addr 0x120d0ec size 0xf0 virtual false final false
 void Start() ;

/// @brief Method RotateShoulders addr 0x120d1dc size 0xdc virtual false final false
 void RotateShoulders() ;

/// @brief Method RotateShoulder addr 0x120d2b8 size 0x404 virtual false final false
 void RotateShoulder(RootMotion::FinalIK::FullBodyBipedChain chain, float_t weight, float_t offset) ;

/// @brief Method GetParentBoneMap addr 0x120d6bc size 0x34 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap GetParentBoneMap(RootMotion::FinalIK::FullBodyBipedChain chain) ;

/// @brief Method OnDestroy addr 0x120d6f0 size 0x10c virtual false final false
 void OnDestroy() ;

static RootMotion::FinalIK::ShoulderRotator New_ctor() ;

/// @brief Method .ctor addr 0x120d7fc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::ShoulderRotator);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ShoulderRotator, "RootMotion.FinalIK", "ShoulderRotator");
