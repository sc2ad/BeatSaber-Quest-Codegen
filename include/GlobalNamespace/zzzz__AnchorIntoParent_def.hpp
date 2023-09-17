#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AnchorIntoParent;
}
// Type: ::AnchorIntoParent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5441))
// CS Name: AnchorIntoParent
class CORDL_TYPE AnchorIntoParent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AnchorIntoParent() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: " const&", def_value: None }]
constexpr AnchorIntoParent(AnchorIntoParent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "&&", def_value: None }]
constexpr AnchorIntoParent(AnchorIntoParent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnchorIntoParent(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnchorIntoParent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnchorIntoParent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnchorIntoParent& operator=(AnchorIntoParent&& o) noexcept = default;
  constexpr AnchorIntoParent& operator=(AnchorIntoParent const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__parentTransform, put=__set__parentTransform))  _parentTransform;

constexpr void __set__parentTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__parentTransform() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__positionOffset, put=__set__positionOffset))  _positionOffset;

constexpr void __set__positionOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__positionOffset() const;


// Methods

/// @brief Method Start addr 0x21140f8 size 0x100 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit AnchorIntoParent() ;

/// @brief Method .ctor addr 0x21141f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AnchorIntoParent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnchorIntoParent, "", "AnchorIntoParent");
