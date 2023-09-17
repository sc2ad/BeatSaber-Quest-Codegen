#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class ChallengeList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallengeList;
}
// Type: Oculus.Platform::MessageWithChallengeList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4439 }), TypeDefinitionIndex(TypeDefinitionIndex(13402))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13226))
// CS Name: Oculus.Platform.MessageWithChallengeList
class CORDL_TYPE MessageWithChallengeList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithChallengeList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeList", modifiers: " const&", def_value: None }]
constexpr MessageWithChallengeList(MessageWithChallengeList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeList", modifiers: "&&", def_value: None }]
constexpr MessageWithChallengeList(MessageWithChallengeList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithChallengeList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeList>(ptr) {
}


  constexpr MessageWithChallengeList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithChallengeList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithChallengeList& operator=(MessageWithChallengeList&& o) noexcept = default;
  constexpr MessageWithChallengeList& operator=(MessageWithChallengeList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithChallengeList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e320 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetChallengeList addr 0x2580ae0 size 0x3c virtual true final false
 ::Oculus::Platform::Models::ChallengeList GetChallengeList() ;

/// @brief Method GetDataFromMessage addr 0x2580b1c size 0x9c virtual true final false
 ::Oculus::Platform::Models::ChallengeList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithChallengeList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallengeList, "Oculus.Platform", "MessageWithChallengeList");
