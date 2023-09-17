#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Poser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class HandPoser;
}
// Type: RootMotion.FinalIK::HandPoser
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12558))
// CS Name: RootMotion.FinalIK.HandPoser
class CORDL_TYPE HandPoser : public ::RootMotion::FinalIK::Poser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~HandPoser() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandPoser", modifiers: " const&", def_value: None }]
constexpr HandPoser(HandPoser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandPoser", modifiers: "&&", def_value: None }]
constexpr HandPoser(HandPoser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandPoser(void* ptr) noexcept : ::RootMotion::FinalIK::Poser(ptr) {
}


  constexpr HandPoser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandPoser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandPoser& operator=(HandPoser&& o) noexcept = default;
  constexpr HandPoser& operator=(HandPoser const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get_children() const;

 ::UnityEngine::Transform __declspec(property(get=__get__poseRoot, put=__set__poseRoot))  _poseRoot;

constexpr void __set__poseRoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__poseRoot() const;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get_poseChildren, put=__set_poseChildren))  poseChildren;

constexpr void __set_poseChildren(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get_poseChildren() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_defaultLocalPositions, put=__set_defaultLocalPositions))  defaultLocalPositions;

constexpr void __set_defaultLocalPositions(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_defaultLocalPositions() const;

 ::ArrayW<::UnityEngine::Quaternion> __declspec(property(get=__get_defaultLocalRotations, put=__set_defaultLocalRotations))  defaultLocalRotations;

constexpr void __set_defaultLocalRotations(::ArrayW<::UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<::UnityEngine::Quaternion> __get_defaultLocalRotations() const;


// Methods

/// @brief Method AutoMapping addr 0x1200b64 size 0xbc virtual true final false
 void AutoMapping() ;

/// @brief Method InitiatePoser addr 0x1200c20 size 0x54 virtual true final false
 void InitiatePoser() ;

/// @brief Method FixPoserTransforms addr 0x1200dc4 size 0xe8 virtual true final false
 void FixPoserTransforms() ;

/// @brief Method UpdatePoser addr 0x1200eac size 0x330 virtual true final false
 void UpdatePoser() ;

/// @brief Method StoreDefaultState addr 0x1200c74 size 0x150 virtual false final false
 void StoreDefaultState() ;

// Ctor Parameters []
explicit HandPoser() ;

/// @brief Method .ctor addr 0x12011dc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::HandPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HandPoser, "RootMotion.FinalIK", "HandPoser");
