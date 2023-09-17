#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimatorStartTime;
}
// Type: ::RandomAnimatorStartTime
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13820))
// CS Name: RandomAnimatorStartTime
class CORDL_TYPE RandomAnimatorStartTime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RandomAnimatorStartTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimatorStartTime", modifiers: " const&", def_value: None }]
constexpr RandomAnimatorStartTime(RandomAnimatorStartTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimatorStartTime", modifiers: "&&", def_value: None }]
constexpr RandomAnimatorStartTime(RandomAnimatorStartTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomAnimatorStartTime(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RandomAnimatorStartTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomAnimatorStartTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomAnimatorStartTime& operator=(RandomAnimatorStartTime&& o) noexcept = default;
  constexpr RandomAnimatorStartTime& operator=(RandomAnimatorStartTime const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get__animator() const;

 ::StringW __declspec(property(get=__get__stateName, put=__set__stateName))  _stateName;

constexpr void __set__stateName(::StringW value) ;

constexpr ::StringW __get__stateName() const;


// Methods

/// @brief Method Start addr 0x1f79ce0 size 0x40 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit RandomAnimatorStartTime() ;

/// @brief Method .ctor addr 0x1f79d20 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimatorStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimatorStartTime, "", "RandomAnimatorStartTime");
