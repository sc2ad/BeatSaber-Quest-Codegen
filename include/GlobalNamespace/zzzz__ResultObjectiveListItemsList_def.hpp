#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ResultObjectiveListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
// Type: ::ResultObjectiveListItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5896)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13725), inst: 5047 }), TypeDefinitionIndex(TypeDefinitionIndex(13725))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5897))
// CS Name: ResultObjectiveListItemsList
class CORDL_TYPE ResultObjectiveListItemsList : public HMUI::UIItemsList_1<GlobalNamespace::ResultObjectiveListItem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ResultObjectiveListItemsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItemsList", modifiers: " const&", def_value: None }]
constexpr ResultObjectiveListItemsList(ResultObjectiveListItemsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItemsList", modifiers: "&&", def_value: None }]
constexpr ResultObjectiveListItemsList(ResultObjectiveListItemsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultObjectiveListItemsList(void* ptr) noexcept : HMUI::UIItemsList_1<GlobalNamespace::ResultObjectiveListItem>(ptr) {
}


  constexpr ResultObjectiveListItemsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultObjectiveListItemsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultObjectiveListItemsList& operator=(ResultObjectiveListItemsList&& o) noexcept = default;
  constexpr ResultObjectiveListItemsList& operator=(ResultObjectiveListItemsList const& o) noexcept = default;
                


// Methods

static GlobalNamespace::ResultObjectiveListItemsList New_ctor() ;

/// @brief Method .ctor addr 0x218eda8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ResultObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultObjectiveListItemsList, "", "ResultObjectiveListItemsList");
