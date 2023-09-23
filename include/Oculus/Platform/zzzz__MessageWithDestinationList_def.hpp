#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DestinationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class DestinationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDestinationList;
}
// Type: Oculus.Platform::MessageWithDestinationList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13412)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4444 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13235))
// CS Name: Oculus.Platform.MessageWithDestinationList
class CORDL_TYPE MessageWithDestinationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::DestinationList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithDestinationList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithDestinationList", modifiers: " const&", def_value: None }]
constexpr MessageWithDestinationList(MessageWithDestinationList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithDestinationList", modifiers: "&&", def_value: None }]
constexpr MessageWithDestinationList(MessageWithDestinationList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithDestinationList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::DestinationList>(ptr) {
}


  constexpr MessageWithDestinationList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithDestinationList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithDestinationList& operator=(MessageWithDestinationList&& o) noexcept = default;
  constexpr MessageWithDestinationList& operator=(MessageWithDestinationList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithDestinationList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e638 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetDestinationList addr 0x25811f8 size 0x3c virtual true final false
 Oculus::Platform::Models::DestinationList GetDestinationList() ;

/// @brief Method GetDataFromMessage addr 0x2581234 size 0x9c virtual true final false
 Oculus::Platform::Models::DestinationList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithDestinationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithDestinationList, "Oculus.Platform", "MessageWithDestinationList");
