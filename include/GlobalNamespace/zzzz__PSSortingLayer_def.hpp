#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class PSSortingLayer;
}
// Type: ::PSSortingLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13888))
// CS Name: PSSortingLayer
class CORDL_TYPE PSSortingLayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PSSortingLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PSSortingLayer", modifiers: " const&", def_value: None }]
constexpr PSSortingLayer(PSSortingLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PSSortingLayer", modifiers: "&&", def_value: None }]
constexpr PSSortingLayer(PSSortingLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PSSortingLayer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PSSortingLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PSSortingLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PSSortingLayer& operator=(PSSortingLayer&& o) noexcept = default;
  constexpr PSSortingLayer& operator=(PSSortingLayer const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PSSortingLayer() ;

/// @brief Method .ctor addr 0x1f83858 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PSSortingLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSSortingLayer, "", "PSSortingLayer");
