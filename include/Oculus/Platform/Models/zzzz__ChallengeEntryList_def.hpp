#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntry_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
// Type: Oculus.Platform.Models::ChallengeEntryList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1134 }), TypeDefinitionIndex(TypeDefinitionIndex(13403))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13404))
// CS Name: Oculus.Platform.Models.ChallengeEntryList
class CORDL_TYPE ChallengeEntryList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::ChallengeEntry> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ChallengeEntryList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeEntryList", modifiers: " const&", def_value: None }]
constexpr ChallengeEntryList(ChallengeEntryList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeEntryList", modifiers: "&&", def_value: None }]
constexpr ChallengeEntryList(ChallengeEntryList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChallengeEntryList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::ChallengeEntry>(ptr) {
}


  constexpr ChallengeEntryList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChallengeEntryList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChallengeEntryList& operator=(ChallengeEntryList&& o) noexcept = default;
  constexpr ChallengeEntryList& operator=(ChallengeEntryList const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_TotalCount, put=__set_TotalCount))  TotalCount;

constexpr void __set_TotalCount(uint64_t value) ;

constexpr uint64_t __get_TotalCount() const;


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ChallengeEntryList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259e0d4 size 0x27c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::ChallengeEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ChallengeEntryList, "Oculus.Platform.Models", "ChallengeEntryList");
