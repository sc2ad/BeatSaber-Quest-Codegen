#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__BaseMeshEffect_def.hpp"
namespace {
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class PositionAsUV1;
}
// Type: UnityEngine.UI::PositionAsUV1
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13082))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13086))
// CS Name: UnityEngine.UI.PositionAsUV1
class CORDL_TYPE PositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PositionAsUV1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PositionAsUV1", modifiers: " const&", def_value: None }]
constexpr PositionAsUV1(PositionAsUV1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PositionAsUV1", modifiers: "&&", def_value: None }]
constexpr PositionAsUV1(PositionAsUV1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PositionAsUV1(void* ptr) noexcept : ::UnityEngine::UI::BaseMeshEffect(ptr) {
}


  constexpr PositionAsUV1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PositionAsUV1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PositionAsUV1& operator=(PositionAsUV1&& o) noexcept = default;
  constexpr PositionAsUV1& operator=(PositionAsUV1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PositionAsUV1() ;

/// @brief Method .ctor addr 0x2c183cc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ModifyMesh addr 0x2c183d4 size 0xbc virtual true final false
 void ModifyMesh(::UnityEngine::UI::VertexHelper vh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::PositionAsUV1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::PositionAsUV1, "UnityEngine.UI", "PositionAsUV1");
