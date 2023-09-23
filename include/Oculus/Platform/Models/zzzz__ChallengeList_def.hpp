#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeList;
}
// Type: Oculus.Platform.Models::ChallengeList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1133 }), TypeDefinitionIndex(TypeDefinitionIndex(13401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13402))
// CS Name: Oculus.Platform.Models.ChallengeList
class CORDL_TYPE ChallengeList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Challenge> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ChallengeList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: " const&", def_value: None }]
constexpr ChallengeList(ChallengeList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChallengeList", modifiers: "&&", def_value: None }]
constexpr ChallengeList(ChallengeList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChallengeList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Challenge>(ptr) {
}


  constexpr ChallengeList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChallengeList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChallengeList& operator=(ChallengeList&& o) noexcept = default;
  constexpr ChallengeList& operator=(ChallengeList const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_TotalCount, put=__set_TotalCount))  TotalCount;

constexpr void __set_TotalCount(uint64_t value) ;

constexpr uint64_t __get_TotalCount() const;


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ChallengeList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259dd48 size 0x27c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::ChallengeList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ChallengeList, "Oculus.Platform.Models", "ChallengeList");
