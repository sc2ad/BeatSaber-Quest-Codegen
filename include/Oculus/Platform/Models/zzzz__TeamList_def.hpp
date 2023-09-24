#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Team_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class TeamList;
}
// Type: Oculus.Platform.Models::TeamList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13478)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1149 }), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13479))
// CS Name: Oculus.Platform.Models.TeamList
class CORDL_TYPE TeamList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Team> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TeamList() = default;

// Ctor Parameters [CppParam { name: "", ty: "TeamList", modifiers: " const&", def_value: None }]
constexpr TeamList(TeamList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TeamList", modifiers: "&&", def_value: None }]
constexpr TeamList(TeamList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TeamList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Team>(ptr) {
}


  constexpr TeamList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TeamList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TeamList& operator=(TeamList&& o) noexcept = default;
  constexpr TeamList& operator=(TeamList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::Models::TeamList New_ctor(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a2aac size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::TeamList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::TeamList, "Oculus.Platform.Models", "TeamList");
