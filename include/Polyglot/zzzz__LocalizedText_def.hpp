#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Polyglot {
struct LanguageDirection;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace Polyglot {
class LocalizedText;
}
// Type: Polyglot::LocalizedText
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15541)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15541), inst: 2506 }), TypeDefinitionIndex(TypeDefinitionIndex(13067))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15540))
// CS Name: Polyglot.LocalizedText
class CORDL_TYPE LocalizedText : public Polyglot::LocalizedTextComponent_1<UnityEngine::UI::Text> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalizedText() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: " const&", def_value: None }]
constexpr LocalizedText(LocalizedText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "&&", def_value: None }]
constexpr LocalizedText(LocalizedText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedText(void* ptr) noexcept : Polyglot::LocalizedTextComponent_1<UnityEngine::UI::Text>(ptr) {
}


  constexpr LocalizedText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedText& operator=(LocalizedText&& o) noexcept = default;
  constexpr LocalizedText& operator=(LocalizedText const& o) noexcept = default;
                


// Methods

/// @brief Method SetText addr 0x26742e4 size 0x134 virtual true final false
 void SetText(UnityEngine::UI::Text text, ::StringW value) ;

/// @brief Method UpdateAlignment addr 0x2674418 size 0xe4 virtual true final false
 void UpdateAlignment(UnityEngine::UI::Text text, Polyglot::LanguageDirection direction) ;

/// @brief Method IsOppositeDirection addr 0x26744fc size 0x58 virtual false final false
 bool IsOppositeDirection(UnityEngine::TextAnchor alignment, Polyglot::LanguageDirection direction) ;

/// @brief Method IsAlignmentRight addr 0x2674554 size 0x28 virtual false final false
 bool IsAlignmentRight(UnityEngine::TextAnchor alignment) ;

/// @brief Method IsAlignmentLeft addr 0x267457c size 0x28 virtual false final false
 bool IsAlignmentLeft(UnityEngine::TextAnchor alignment) ;

// Ctor Parameters []
explicit LocalizedText() ;

/// @brief Method .ctor addr 0x26745a4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizedText);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedText, "Polyglot", "LocalizedText");
