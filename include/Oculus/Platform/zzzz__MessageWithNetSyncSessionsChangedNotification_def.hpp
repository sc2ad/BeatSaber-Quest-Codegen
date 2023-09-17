#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSessionsChangedNotification;
}
// Type: Oculus.Platform::MessageWithNetSyncSessionsChangedNotification
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13450)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 947 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13259))
// CS Name: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification
class CORDL_TYPE MessageWithNetSyncSessionsChangedNotification : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionsChangedNotification> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithNetSyncSessionsChangedNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionsChangedNotification", modifiers: " const&", def_value: None }]
constexpr MessageWithNetSyncSessionsChangedNotification(MessageWithNetSyncSessionsChangedNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionsChangedNotification", modifiers: "&&", def_value: None }]
constexpr MessageWithNetSyncSessionsChangedNotification(MessageWithNetSyncSessionsChangedNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithNetSyncSessionsChangedNotification(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionsChangedNotification>(ptr) {
}


  constexpr MessageWithNetSyncSessionsChangedNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithNetSyncSessionsChangedNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithNetSyncSessionsChangedNotification& operator=(MessageWithNetSyncSessionsChangedNotification&& o) noexcept = default;
  constexpr MessageWithNetSyncSessionsChangedNotification& operator=(MessageWithNetSyncSessionsChangedNotification const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithNetSyncSessionsChangedNotification(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ecc0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetNetSyncSessionsChangedNotification addr 0x25828a0 size 0x3c virtual true final false
 ::Oculus::Platform::Models::NetSyncSessionsChangedNotification GetNetSyncSessionsChangedNotification() ;

/// @brief Method GetDataFromMessage addr 0x25828dc size 0x9c virtual true final false
 ::Oculus::Platform::Models::NetSyncSessionsChangedNotification GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification, "Oculus.Platform", "MessageWithNetSyncSessionsChangedNotification");
