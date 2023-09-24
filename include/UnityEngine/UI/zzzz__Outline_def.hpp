#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Shadow_def.hpp"
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class Outline;
}
// Type: UnityEngine.UI::Outline
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13087))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13085))
// CS Name: UnityEngine.UI.Outline
class CORDL_TYPE Outline : public UnityEngine::UI::Shadow {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Outline() = default;

// Ctor Parameters [CppParam { name: "", ty: "Outline", modifiers: " const&", def_value: None }]
constexpr Outline(Outline const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Outline", modifiers: "&&", def_value: None }]
constexpr Outline(Outline&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Outline(void* ptr) noexcept : UnityEngine::UI::Shadow(ptr) {
}


  constexpr Outline& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Outline& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Outline& operator=(Outline&& o) noexcept = default;
  constexpr Outline& operator=(Outline const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::Outline New_ctor() ;

/// @brief Method .ctor addr 0x2c17784 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ModifyMesh addr 0x2c1778c size 0xc40 virtual true final false
 void ModifyMesh(UnityEngine::UI::VertexHelper vh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Outline);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Outline, "UnityEngine.UI", "Outline");
