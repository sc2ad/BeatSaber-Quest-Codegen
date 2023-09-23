#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SystemVoipState;
}
// Type: Oculus.Platform.Models::SystemVoipState
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13477))
// CS Name: Oculus.Platform.Models.SystemVoipState
class CORDL_TYPE SystemVoipState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SystemVoipState() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: " const&", def_value: None }]
constexpr SystemVoipState(SystemVoipState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemVoipState", modifiers: "&&", def_value: None }]
constexpr SystemVoipState(SystemVoipState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemVoipState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemVoipState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemVoipState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemVoipState& operator=(SystemVoipState&& o) noexcept = default;
  constexpr SystemVoipState& operator=(SystemVoipState const& o) noexcept = default;
                


// Fields

 Oculus::Platform::VoipMuteState __declspec(property(get=__get_MicrophoneMuted, put=__set_MicrophoneMuted))  MicrophoneMuted;

constexpr void __set_MicrophoneMuted(Oculus::Platform::VoipMuteState value) ;

constexpr Oculus::Platform::VoipMuteState __get_MicrophoneMuted() const;

 Oculus::Platform::SystemVoipStatus __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(Oculus::Platform::SystemVoipStatus value) ;

constexpr Oculus::Platform::SystemVoipStatus __get_Status() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SystemVoipState(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a33d8 size 0x88 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::SystemVoipState);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SystemVoipState, "Oculus.Platform.Models", "SystemVoipState");
