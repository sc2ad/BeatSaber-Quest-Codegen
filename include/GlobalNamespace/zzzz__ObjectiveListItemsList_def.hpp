#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
// Type: ::ObjectiveListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13725), inst: 5046 }), TypeDefinitionIndex(TypeDefinitionIndex(5892)), TypeDefinitionIndex(TypeDefinitionIndex(13725))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5893))
// CS Name: ObjectiveListItemsList
class CORDL_TYPE ObjectiveListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::ObjectiveListItem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ObjectiveListItemsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: " const&", def_value: None }]
constexpr ObjectiveListItemsList(ObjectiveListItemsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "&&", def_value: None }]
constexpr ObjectiveListItemsList(ObjectiveListItemsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectiveListItemsList(void* ptr) noexcept : ::HMUI::UIItemsList_1<::GlobalNamespace::ObjectiveListItem>(ptr) {
}


  constexpr ObjectiveListItemsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectiveListItemsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectiveListItemsList& operator=(ObjectiveListItemsList&& o) noexcept = default;
  constexpr ObjectiveListItemsList& operator=(ObjectiveListItemsList const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ObjectiveListItemsList() ;

/// @brief Method .ctor addr 0x218e604 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveListItemsList, "", "ObjectiveListItemsList");
