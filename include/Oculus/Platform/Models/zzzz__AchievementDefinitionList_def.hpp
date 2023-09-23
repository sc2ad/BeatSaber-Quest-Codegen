#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinition_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
// Type: Oculus.Platform.Models::AchievementDefinitionList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1127 }), TypeDefinitionIndex(TypeDefinitionIndex(13380)), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13381))
// CS Name: Oculus.Platform.Models.AchievementDefinitionList
class CORDL_TYPE AchievementDefinitionList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AchievementDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AchievementDefinitionList() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementDefinitionList", modifiers: " const&", def_value: None }]
constexpr AchievementDefinitionList(AchievementDefinitionList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementDefinitionList", modifiers: "&&", def_value: None }]
constexpr AchievementDefinitionList(AchievementDefinitionList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementDefinitionList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AchievementDefinition>(ptr) {
}


  constexpr AchievementDefinitionList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementDefinitionList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementDefinitionList& operator=(AchievementDefinitionList&& o) noexcept = default;
  constexpr AchievementDefinitionList& operator=(AchievementDefinitionList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AchievementDefinitionList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259bd20 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AchievementDefinitionList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementDefinitionList, "Oculus.Platform.Models", "AchievementDefinitionList");
