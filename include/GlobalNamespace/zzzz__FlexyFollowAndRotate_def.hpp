#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FlexyFollowAndRotate;
}
// Type: ::FlexyFollowAndRotate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13800))
// CS Name: FlexyFollowAndRotate
class CORDL_TYPE FlexyFollowAndRotate : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FlexyFollowAndRotate() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlexyFollowAndRotate", modifiers: " const&", def_value: None }]
constexpr FlexyFollowAndRotate(FlexyFollowAndRotate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlexyFollowAndRotate", modifiers: "&&", def_value: None }]
constexpr FlexyFollowAndRotate(FlexyFollowAndRotate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlexyFollowAndRotate(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlexyFollowAndRotate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlexyFollowAndRotate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlexyFollowAndRotate& operator=(FlexyFollowAndRotate&& o) noexcept = default;
  constexpr FlexyFollowAndRotate& operator=(FlexyFollowAndRotate const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__target, put=__set__target))  _target;

constexpr void __set__target(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__target() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;


// Methods

/// @brief Method Update addr 0x1f77fe8 size 0x170 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit FlexyFollowAndRotate() ;

/// @brief Method .ctor addr 0x1f78158 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlexyFollowAndRotate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlexyFollowAndRotate, "", "FlexyFollowAndRotate");
