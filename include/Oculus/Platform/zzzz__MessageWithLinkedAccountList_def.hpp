#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLinkedAccountList;
}
// Type: Oculus.Platform::MessageWithLinkedAccountList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13432)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4452 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13247))
// CS Name: Oculus.Platform.MessageWithLinkedAccountList
class CORDL_TYPE MessageWithLinkedAccountList : public Oculus::Platform::Message_1<Oculus::Platform::Models::LinkedAccountList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLinkedAccountList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLinkedAccountList", modifiers: " const&", def_value: None }]
constexpr MessageWithLinkedAccountList(MessageWithLinkedAccountList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLinkedAccountList", modifiers: "&&", def_value: None }]
constexpr MessageWithLinkedAccountList(MessageWithLinkedAccountList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLinkedAccountList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LinkedAccountList>(ptr) {
}


  constexpr MessageWithLinkedAccountList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLinkedAccountList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLinkedAccountList& operator=(MessageWithLinkedAccountList&& o) noexcept = default;
  constexpr MessageWithLinkedAccountList& operator=(MessageWithLinkedAccountList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLinkedAccountList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2581cc8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLinkedAccountList addr 0x2581d20 size 0x3c virtual true final false
 Oculus::Platform::Models::LinkedAccountList GetLinkedAccountList() ;

/// @brief Method GetDataFromMessage addr 0x2581d5c size 0x9c virtual true final false
 Oculus::Platform::Models::LinkedAccountList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLinkedAccountList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLinkedAccountList, "Oculus.Platform", "MessageWithLinkedAccountList");
