#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
struct TextAlignmentOptions;
}
namespace Polyglot {
struct LanguageDirection;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace Polyglot {
class LocalizedTextMeshPro;
}
// Type: Polyglot::LocalizedTextMeshPro
namespace Polyglot {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15541), inst: 4317 }), TypeDefinitionIndex(TypeDefinitionIndex(15541)), TypeDefinitionIndex(TypeDefinitionIndex(12249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15543))
// CS Name: Polyglot.LocalizedTextMeshPro
class CORDL_TYPE LocalizedTextMeshPro : public Polyglot::LocalizedTextComponent_1<TMPro::TextMeshPro> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalizedTextMeshPro() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshPro", modifiers: " const&", def_value: None }]
constexpr LocalizedTextMeshPro(LocalizedTextMeshPro const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMeshPro", modifiers: "&&", def_value: None }]
constexpr LocalizedTextMeshPro(LocalizedTextMeshPro&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedTextMeshPro(void* ptr) noexcept : Polyglot::LocalizedTextComponent_1<TMPro::TextMeshPro>(ptr) {
}


  constexpr LocalizedTextMeshPro& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedTextMeshPro& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedTextMeshPro& operator=(LocalizedTextMeshPro&& o) noexcept = default;
  constexpr LocalizedTextMeshPro& operator=(LocalizedTextMeshPro const& o) noexcept = default;
                


// Methods

/// @brief Method SetText addr 0x26747a8 size 0x2c virtual true final false
 void SetText(TMPro::TextMeshPro text, ::StringW value) ;

/// @brief Method UpdateAlignment addr 0x26747d4 size 0xf4 virtual true final false
 void UpdateAlignment(TMPro::TextMeshPro text, Polyglot::LanguageDirection direction) ;

/// @brief Method IsOppositeDirection addr 0x26748c8 size 0x58 virtual false final false
 bool IsOppositeDirection(TMPro::TextAlignmentOptions alignment, Polyglot::LanguageDirection direction) ;

/// @brief Method IsAlignmentRight addr 0x2674920 size 0x28 virtual false final false
 bool IsAlignmentRight(TMPro::TextAlignmentOptions alignment) ;

/// @brief Method IsAlignmentLeft addr 0x2674948 size 0x28 virtual false final false
 bool IsAlignmentLeft(TMPro::TextAlignmentOptions alignment) ;

// Ctor Parameters []
explicit LocalizedTextMeshPro() ;

/// @brief Method .ctor addr 0x2674970 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMeshPro, "Polyglot", "LocalizedTextMeshPro");
