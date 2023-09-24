#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Grid;
}
// Type: UnityEngine::Grid
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16008))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16009))
// CS Name: UnityEngine.Grid
class CORDL_TYPE Grid : public UnityEngine::GridLayout {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Grid() = default;

// Ctor Parameters [CppParam { name: "", ty: "Grid", modifiers: " const&", def_value: None }]
constexpr Grid(Grid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Grid", modifiers: "&&", def_value: None }]
constexpr Grid(Grid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Grid(void* ptr) noexcept : UnityEngine::GridLayout(ptr) {
}


  constexpr Grid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Grid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Grid& operator=(Grid&& o) noexcept = default;
  constexpr Grid& operator=(Grid const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_cellSize))  cellSize;


// Methods

/// @brief Method get_cellSize addr 0x2b82da4 size 0x5c virtual false final false
 UnityEngine::Vector3 get_cellSize() ;

static UnityEngine::Grid New_ctor() ;

/// @brief Method .ctor addr 0x2b82e44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_cellSize_Injected addr 0x2b82e00 size 0x44 virtual false final false
 void get_cellSize_Injected(ByRef<UnityEngine::Vector3> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Grid);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Grid, "UnityEngine", "Grid");
