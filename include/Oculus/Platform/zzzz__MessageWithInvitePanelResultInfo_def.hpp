#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInvitePanelResultInfo;
}
// Type: Oculus.Platform::MessageWithInvitePanelResultInfo
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13419)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4446 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13239))
// CS Name: Oculus.Platform.MessageWithInvitePanelResultInfo
class CORDL_TYPE MessageWithInvitePanelResultInfo : public Oculus::Platform::Message_1<Oculus::Platform::Models::InvitePanelResultInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithInvitePanelResultInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithInvitePanelResultInfo", modifiers: " const&", def_value: None }]
constexpr MessageWithInvitePanelResultInfo(MessageWithInvitePanelResultInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithInvitePanelResultInfo", modifiers: "&&", def_value: None }]
constexpr MessageWithInvitePanelResultInfo(MessageWithInvitePanelResultInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithInvitePanelResultInfo(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::InvitePanelResultInfo>(ptr) {
}


  constexpr MessageWithInvitePanelResultInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithInvitePanelResultInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithInvitePanelResultInfo& operator=(MessageWithInvitePanelResultInfo&& o) noexcept = default;
  constexpr MessageWithInvitePanelResultInfo& operator=(MessageWithInvitePanelResultInfo const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithInvitePanelResultInfo(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e740 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetInvitePanelResultInfo addr 0x25815b0 size 0x3c virtual true final false
 Oculus::Platform::Models::InvitePanelResultInfo GetInvitePanelResultInfo() ;

/// @brief Method GetDataFromMessage addr 0x25815ec size 0x9c virtual true final false
 Oculus::Platform::Models::InvitePanelResultInfo GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithInvitePanelResultInfo);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithInvitePanelResultInfo, "Oculus.Platform", "MessageWithInvitePanelResultInfo");
