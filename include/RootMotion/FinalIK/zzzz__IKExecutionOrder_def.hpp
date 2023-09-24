#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKExecutionOrder;
}
// Type: RootMotion.FinalIK::IKExecutionOrder
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12479))
// CS Name: RootMotion.FinalIK.IKExecutionOrder
class CORDL_TYPE IKExecutionOrder : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IKExecutionOrder() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: " const&", def_value: None }]
constexpr IKExecutionOrder(IKExecutionOrder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "&&", def_value: None }]
constexpr IKExecutionOrder(IKExecutionOrder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKExecutionOrder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IKExecutionOrder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKExecutionOrder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKExecutionOrder& operator=(IKExecutionOrder&& o) noexcept = default;
  constexpr IKExecutionOrder& operator=(IKExecutionOrder const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::IK> __declspec(property(get=__get_IKComponents, put=__set_IKComponents))  IKComponents;

constexpr void __set_IKComponents(::ArrayW<RootMotion::FinalIK::IK> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::IK> __get_IKComponents() const;

 UnityEngine::Animator __declspec(property(get=__get_animator, put=__set_animator))  animator;

constexpr void __set_animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get_animator() const;

 bool __declspec(property(get=__get_fixedFrame, put=__set_fixedFrame))  fixedFrame;

constexpr void __set_fixedFrame(bool value) ;

constexpr bool __get_fixedFrame() const;


// Properties

 bool __declspec(property(get=get_animatePhysics))  animatePhysics;


// Methods

/// @brief Method get_animatePhysics addr 0x11c4fbc size 0x8c virtual false final false
 bool get_animatePhysics() ;

/// @brief Method Start addr 0x11c5048 size 0x64 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x11c50ac size 0x24 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x11c514c size 0x2c virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x11c5178 size 0x84 virtual false final false
 void LateUpdate() ;

/// @brief Method FixTransforms addr 0x11c50d0 size 0x7c virtual false final false
 void FixTransforms() ;

static RootMotion::FinalIK::IKExecutionOrder New_ctor() ;

/// @brief Method .ctor addr 0x11c51fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKExecutionOrder, "RootMotion.FinalIK", "IKExecutionOrder");
