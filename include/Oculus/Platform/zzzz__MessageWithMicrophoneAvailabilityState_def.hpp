#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithMicrophoneAvailabilityState;
}
// Type: Oculus.Platform::MessageWithMicrophoneAvailabilityState
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13446)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4461 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13256))
// CS Name: Oculus.Platform.MessageWithMicrophoneAvailabilityState
class CORDL_TYPE MessageWithMicrophoneAvailabilityState : public Oculus::Platform::Message_1<Oculus::Platform::Models::MicrophoneAvailabilityState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithMicrophoneAvailabilityState() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: " const&", def_value: None }]
constexpr MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithMicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
constexpr MessageWithMicrophoneAvailabilityState(MessageWithMicrophoneAvailabilityState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithMicrophoneAvailabilityState(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::MicrophoneAvailabilityState>(ptr) {
}


  constexpr MessageWithMicrophoneAvailabilityState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithMicrophoneAvailabilityState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithMicrophoneAvailabilityState& operator=(MessageWithMicrophoneAvailabilityState&& o) noexcept = default;
  constexpr MessageWithMicrophoneAvailabilityState& operator=(MessageWithMicrophoneAvailabilityState const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithMicrophoneAvailabilityState New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ec10 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetMicrophoneAvailabilityState addr 0x25825c0 size 0x3c virtual true final false
 Oculus::Platform::Models::MicrophoneAvailabilityState GetMicrophoneAvailabilityState() ;

/// @brief Method GetDataFromMessage addr 0x25825fc size 0x9c virtual true final false
 Oculus::Platform::Models::MicrophoneAvailabilityState GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithMicrophoneAvailabilityState);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithMicrophoneAvailabilityState, "Oculus.Platform", "MessageWithMicrophoneAvailabilityState");
