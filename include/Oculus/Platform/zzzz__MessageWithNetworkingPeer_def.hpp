#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetworkingPeer;
}
// Type: Oculus.Platform::MessageWithNetworkingPeer
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 948 }), TypeDefinitionIndex(TypeDefinitionIndex(13454)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13290))
// CS Name: Oculus.Platform.MessageWithNetworkingPeer
class CORDL_TYPE MessageWithNetworkingPeer : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithNetworkingPeer() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetworkingPeer", modifiers: " const&", def_value: None }]
constexpr MessageWithNetworkingPeer(MessageWithNetworkingPeer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetworkingPeer", modifiers: "&&", def_value: None }]
constexpr MessageWithNetworkingPeer(MessageWithNetworkingPeer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithNetworkingPeer(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer>(ptr) {
}


  constexpr MessageWithNetworkingPeer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithNetworkingPeer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithNetworkingPeer& operator=(MessageWithNetworkingPeer&& o) noexcept = default;
  constexpr MessageWithNetworkingPeer& operator=(MessageWithNetworkingPeer const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithNetworkingPeer(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f5b0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetNetworkingPeer addr 0x2584438 size 0x3c virtual true final false
 Oculus::Platform::Models::NetworkingPeer GetNetworkingPeer() ;

/// @brief Method GetDataFromMessage addr 0x2584474 size 0xb0 virtual true final false
 Oculus::Platform::Models::NetworkingPeer GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithNetworkingPeer);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetworkingPeer, "Oculus.Platform", "MessageWithNetworkingPeer");
