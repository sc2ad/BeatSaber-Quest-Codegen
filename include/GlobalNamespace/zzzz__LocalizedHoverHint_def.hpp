#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Polyglot {
struct LanguageDirection;
}
namespace HMUI {
class HoverHint;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedHoverHint;
}
// Type: ::LocalizedHoverHint
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15541), inst: 4316 }), TypeDefinitionIndex(TypeDefinitionIndex(13585)), TypeDefinitionIndex(TypeDefinitionIndex(15541))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5623))
// CS Name: LocalizedHoverHint
class CORDL_TYPE LocalizedHoverHint : public Polyglot::LocalizedTextComponent_1<HMUI::HoverHint> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalizedHoverHint() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: " const&", def_value: None }]
constexpr LocalizedHoverHint(LocalizedHoverHint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "&&", def_value: None }]
constexpr LocalizedHoverHint(LocalizedHoverHint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedHoverHint(void* ptr) noexcept : Polyglot::LocalizedTextComponent_1<HMUI::HoverHint>(ptr) {
}


  constexpr LocalizedHoverHint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedHoverHint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedHoverHint& operator=(LocalizedHoverHint&& o) noexcept = default;
  constexpr LocalizedHoverHint& operator=(LocalizedHoverHint const& o) noexcept = default;
                


// Methods

/// @brief Method SetText addr 0x21470c4 size 0x18 virtual true final false
 void SetText(HMUI::HoverHint hoverHint, ::StringW value) ;

/// @brief Method UpdateAlignment addr 0x21470dc size 0x4 virtual true final false
 void UpdateAlignment(HMUI::HoverHint hoverHint, Polyglot::LanguageDirection direction) ;

// Ctor Parameters []
explicit LocalizedHoverHint() ;

/// @brief Method .ctor addr 0x21470e0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LocalizedHoverHint);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedHoverHint, "", "LocalizedHoverHint");
