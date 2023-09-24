#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithApplicationInviteList;
}
// Type: Oculus.Platform::MessageWithApplicationInviteList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4427 }), TypeDefinitionIndex(TypeDefinitionIndex(13386)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13212))
// CS Name: Oculus.Platform.MessageWithApplicationInviteList
class CORDL_TYPE MessageWithApplicationInviteList : public Oculus::Platform::Message_1<Oculus::Platform::Models::ApplicationInviteList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithApplicationInviteList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationInviteList", modifiers: " const&", def_value: None }]
constexpr MessageWithApplicationInviteList(MessageWithApplicationInviteList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationInviteList", modifiers: "&&", def_value: None }]
constexpr MessageWithApplicationInviteList(MessageWithApplicationInviteList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithApplicationInviteList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::ApplicationInviteList>(ptr) {
}


  constexpr MessageWithApplicationInviteList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithApplicationInviteList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithApplicationInviteList& operator=(MessageWithApplicationInviteList&& o) noexcept = default;
  constexpr MessageWithApplicationInviteList& operator=(MessageWithApplicationInviteList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithApplicationInviteList New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257dea8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetApplicationInviteList addr 0x257feb8 size 0x3c virtual true final false
 Oculus::Platform::Models::ApplicationInviteList GetApplicationInviteList() ;

/// @brief Method GetDataFromMessage addr 0x257fef4 size 0x9c virtual true final false
 Oculus::Platform::Models::ApplicationInviteList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithApplicationInviteList, "Oculus.Platform", "MessageWithApplicationInviteList");
