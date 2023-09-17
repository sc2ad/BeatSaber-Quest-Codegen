#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallengeEntryList;
}
// Type: Oculus.Platform::MessageWithChallengeEntryList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13404)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4438 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13227))
// CS Name: Oculus.Platform.MessageWithChallengeEntryList
class CORDL_TYPE MessageWithChallengeEntryList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeEntryList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithChallengeEntryList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeEntryList", modifiers: " const&", def_value: None }]
constexpr MessageWithChallengeEntryList(MessageWithChallengeEntryList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeEntryList", modifiers: "&&", def_value: None }]
constexpr MessageWithChallengeEntryList(MessageWithChallengeEntryList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithChallengeEntryList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeEntryList>(ptr) {
}


  constexpr MessageWithChallengeEntryList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithChallengeEntryList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithChallengeEntryList& operator=(MessageWithChallengeEntryList&& o) noexcept = default;
  constexpr MessageWithChallengeEntryList& operator=(MessageWithChallengeEntryList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithChallengeEntryList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e378 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetChallengeEntryList addr 0x2580bb8 size 0x3c virtual true final false
 ::Oculus::Platform::Models::ChallengeEntryList GetChallengeEntryList() ;

/// @brief Method GetDataFromMessage addr 0x2580bf4 size 0x9c virtual true final false
 ::Oculus::Platform::Models::ChallengeEntryList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithChallengeEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallengeEntryList, "Oculus.Platform", "MessageWithChallengeEntryList");
