#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FollowLocalRotation;
}
// Type: ::FollowLocalRotation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13801))
// CS Name: FollowLocalRotation
class CORDL_TYPE FollowLocalRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FollowLocalRotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "FollowLocalRotation", modifiers: " const&", def_value: None }]
constexpr FollowLocalRotation(FollowLocalRotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FollowLocalRotation", modifiers: "&&", def_value: None }]
constexpr FollowLocalRotation(FollowLocalRotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FollowLocalRotation(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FollowLocalRotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FollowLocalRotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FollowLocalRotation& operator=(FollowLocalRotation&& o) noexcept = default;
  constexpr FollowLocalRotation& operator=(FollowLocalRotation const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__target, put=__set__target))  _target;

constexpr void __set__target(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__target() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Awake addr 0x1f78168 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x1f78184 size 0x34 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit FollowLocalRotation() ;

/// @brief Method .ctor addr 0x1f781b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FollowLocalRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FollowLocalRotation, "", "FollowLocalRotation");
