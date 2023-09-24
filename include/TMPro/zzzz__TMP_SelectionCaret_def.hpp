#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace TMPro {
class TMP_SelectionCaret;
}
// Type: TMPro::TMP_SelectionCaret
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12355))
// CS Name: TMPro.TMP_SelectionCaret
class CORDL_TYPE TMP_SelectionCaret : public UnityEngine::UI::MaskableGraphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~TMP_SelectionCaret() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SelectionCaret", modifiers: " const&", def_value: None }]
constexpr TMP_SelectionCaret(TMP_SelectionCaret const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SelectionCaret", modifiers: "&&", def_value: None }]
constexpr TMP_SelectionCaret(TMP_SelectionCaret&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SelectionCaret(void* ptr) noexcept : UnityEngine::UI::MaskableGraphic(ptr) {
}


  constexpr TMP_SelectionCaret& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SelectionCaret& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SelectionCaret& operator=(TMP_SelectionCaret&& o) noexcept = default;
  constexpr TMP_SelectionCaret& operator=(TMP_SelectionCaret const& o) noexcept = default;
                


// Methods

/// @brief Method Cull addr 0x2aa8178 size 0xd0 virtual true final false
 void Cull(UnityEngine::Rect clipRect, bool validRect) ;

/// @brief Method UpdateGeometry addr 0x2aa8248 size 0x4 virtual true final false
 void UpdateGeometry() ;

static TMPro::TMP_SelectionCaret New_ctor() ;

/// @brief Method .ctor addr 0x2aa824c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_SelectionCaret);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SelectionCaret, "TMPro", "TMP_SelectionCaret");
