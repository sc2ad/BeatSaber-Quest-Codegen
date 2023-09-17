#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class GridLayout;
}
// Type: UnityEngine::GridLayout
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16008))
// CS Name: UnityEngine.GridLayout
class CORDL_TYPE GridLayout : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GridLayout() = default;

// Ctor Parameters [CppParam { name: "", ty: "GridLayout", modifiers: " const&", def_value: None }]
constexpr GridLayout(GridLayout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GridLayout", modifiers: "&&", def_value: None }]
constexpr GridLayout(GridLayout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GridLayout(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr GridLayout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GridLayout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GridLayout& operator=(GridLayout&& o) noexcept = default;
  constexpr GridLayout& operator=(GridLayout const& o) noexcept = default;
                


// Methods

/// @brief Method CellToLocal addr 0x2b82cdc size 0x68 virtual false final false
 ::UnityEngine::Vector3 CellToLocal(::UnityEngine::Vector3Int cellPosition) ;

/// @brief Method DoNothing addr 0x2b82d98 size 0x4 virtual false final false
 void DoNothing() ;

// Ctor Parameters []
explicit GridLayout() ;

/// @brief Method .ctor addr 0x2b82d9c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CellToLocal_Injected addr 0x2b82d44 size 0x54 virtual false final false
 void CellToLocal_Injected(ByRef<::UnityEngine::Vector3Int> cellPosition, ByRef<::UnityEngine::Vector3> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::GridLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GridLayout, "UnityEngine", "GridLayout");
