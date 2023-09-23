#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysVisibleQuad;
}
// Type: ::AlwaysVisibleQuad
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15294))
// CS Name: AlwaysVisibleQuad
class CORDL_TYPE AlwaysVisibleQuad : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AlwaysVisibleQuad() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: " const&", def_value: None }]
constexpr AlwaysVisibleQuad(AlwaysVisibleQuad const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "&&", def_value: None }]
constexpr AlwaysVisibleQuad(AlwaysVisibleQuad&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlwaysVisibleQuad(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AlwaysVisibleQuad& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlwaysVisibleQuad& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlwaysVisibleQuad& operator=(AlwaysVisibleQuad&& o) noexcept = default;
  constexpr AlwaysVisibleQuad& operator=(AlwaysVisibleQuad const& o) noexcept = default;
                


// Fields

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;


// Methods

/// @brief Method OnEnable addr 0x2674c90 size 0x224 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2674eb4 size 0xc virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit AlwaysVisibleQuad() ;

/// @brief Method .ctor addr 0x2674ec0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AlwaysVisibleQuad);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlwaysVisibleQuad, "", "AlwaysVisibleQuad");
