#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace Polyglot {
struct LanguageDirection;
}
// Forward declare root types
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
// Type: Polyglot::LocalizedTextMeshProUGUI
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15541)), TypeDefinitionIndex(TypeDefinitionIndex(12252)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15541), inst: 4156 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15544))
// CS Name: Polyglot.LocalizedTextMeshProUGUI
class CORDL_TYPE LocalizedTextMeshProUGUI : public Polyglot::LocalizedTextComponent_1<TMPro::TextMeshProUGUI> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalizedTextMeshProUGUI() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshProUGUI", modifiers: " const&", def_value: None }]
constexpr LocalizedTextMeshProUGUI(LocalizedTextMeshProUGUI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshProUGUI", modifiers: "&&", def_value: None }]
constexpr LocalizedTextMeshProUGUI(LocalizedTextMeshProUGUI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedTextMeshProUGUI(void* ptr) noexcept : Polyglot::LocalizedTextComponent_1<TMPro::TextMeshProUGUI>(ptr) {
}


  constexpr LocalizedTextMeshProUGUI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedTextMeshProUGUI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedTextMeshProUGUI& operator=(LocalizedTextMeshProUGUI&& o) noexcept = default;
  constexpr LocalizedTextMeshProUGUI& operator=(LocalizedTextMeshProUGUI const& o) noexcept = default;
                


// Methods

/// @brief Method SetText addr 0x26749b8 size 0x2c virtual true final false
 void SetText(TMPro::TextMeshProUGUI text, ::StringW value) ;

/// @brief Method UpdateAlignment addr 0x26749e4 size 0xf4 virtual true final false
 void UpdateAlignment(TMPro::TextMeshProUGUI text, Polyglot::LanguageDirection direction) ;

/// @brief Method IsOppositeDirection addr 0x2674ad8 size 0x58 virtual false final false
 bool IsOppositeDirection(TMPro::TextAlignmentOptions alignment, Polyglot::LanguageDirection direction) ;

/// @brief Method IsAlignmentRight addr 0x2674b30 size 0x28 virtual false final false
 bool IsAlignmentRight(TMPro::TextAlignmentOptions alignment) ;

/// @brief Method IsAlignmentLeft addr 0x2674b58 size 0x28 virtual false final false
 bool IsAlignmentLeft(TMPro::TextAlignmentOptions alignment) ;

static Polyglot::LocalizedTextMeshProUGUI New_ctor() ;

/// @brief Method .ctor addr 0x2674b80 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizedTextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMeshProUGUI, "Polyglot", "LocalizedTextMeshProUGUI");
