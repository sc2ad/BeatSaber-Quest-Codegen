#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SortingLayer;
}
// Type: ::SortingLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13889))
// CS Name: SortingLayer
class CORDL_TYPE SortingLayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SortingLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortingLayer", modifiers: " const&", def_value: None }]
constexpr SortingLayer(SortingLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortingLayer", modifiers: "&&", def_value: None }]
constexpr SortingLayer(SortingLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortingLayer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SortingLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortingLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortingLayer& operator=(SortingLayer&& o) noexcept = default;
  constexpr SortingLayer& operator=(SortingLayer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(::UnityEngine::Renderer value) ;

constexpr ::UnityEngine::Renderer __get__renderer() const;


// Properties

 ::UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;


// Methods

/// @brief Method get_renderer addr 0x1f83860 size 0x8 virtual false final false
 ::UnityEngine::Renderer get_renderer() ;

/// @brief Method Reset addr 0x1f83868 size 0x50 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit SortingLayer() ;

/// @brief Method .ctor addr 0x1f838b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SortingLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortingLayer, "", "SortingLayer");
