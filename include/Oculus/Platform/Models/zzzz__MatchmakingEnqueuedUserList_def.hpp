#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUser_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueuedUserList;
}
// Type: Oculus.Platform.Models::MatchmakingEnqueuedUserList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), TypeDefinitionIndex(TypeDefinitionIndex(13441)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1142 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13442))
// CS Name: Oculus.Platform.Models.MatchmakingEnqueuedUserList
class CORDL_TYPE MatchmakingEnqueuedUserList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::MatchmakingEnqueuedUser> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MatchmakingEnqueuedUserList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueuedUserList", modifiers: " const&", def_value: None }]
constexpr MatchmakingEnqueuedUserList(MatchmakingEnqueuedUserList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueuedUserList", modifiers: "&&", def_value: None }]
constexpr MatchmakingEnqueuedUserList(MatchmakingEnqueuedUserList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MatchmakingEnqueuedUserList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::MatchmakingEnqueuedUser>(ptr) {
}


  constexpr MatchmakingEnqueuedUserList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MatchmakingEnqueuedUserList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MatchmakingEnqueuedUserList& operator=(MatchmakingEnqueuedUserList&& o) noexcept = default;
  constexpr MatchmakingEnqueuedUserList& operator=(MatchmakingEnqueuedUserList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MatchmakingEnqueuedUserList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a0b4c size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::MatchmakingEnqueuedUserList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingEnqueuedUserList, "Oculus.Platform.Models", "MatchmakingEnqueuedUserList");
