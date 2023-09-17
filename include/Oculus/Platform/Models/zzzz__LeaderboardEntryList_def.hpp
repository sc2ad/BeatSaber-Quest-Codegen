#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntry_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
// Type: Oculus.Platform.Models::LeaderboardEntryList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13429)), TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1139 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13430))
// CS Name: Oculus.Platform.Models.LeaderboardEntryList
class CORDL_TYPE LeaderboardEntryList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::LeaderboardEntry> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LeaderboardEntryList() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryList", modifiers: " const&", def_value: None }]
constexpr LeaderboardEntryList(LeaderboardEntryList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntryList", modifiers: "&&", def_value: None }]
constexpr LeaderboardEntryList(LeaderboardEntryList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardEntryList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::LeaderboardEntry>(ptr) {
}


  constexpr LeaderboardEntryList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardEntryList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardEntryList& operator=(LeaderboardEntryList&& o) noexcept = default;
  constexpr LeaderboardEntryList& operator=(LeaderboardEntryList const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_TotalCount, put=__set_TotalCount))  TotalCount;

constexpr void __set_TotalCount(uint64_t value) ;

constexpr uint64_t __get_TotalCount() const;


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LeaderboardEntryList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259fa30 size 0x27c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::LeaderboardEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LeaderboardEntryList, "Oculus.Platform.Models", "LeaderboardEntryList");
