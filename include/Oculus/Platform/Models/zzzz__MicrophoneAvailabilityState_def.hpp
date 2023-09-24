#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
// Type: Oculus.Platform.Models::MicrophoneAvailabilityState
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13446))
// CS Name: Oculus.Platform.Models.MicrophoneAvailabilityState
class CORDL_TYPE MicrophoneAvailabilityState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MicrophoneAvailabilityState() = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneAvailabilityState", modifiers: " const&", def_value: None }]
constexpr MicrophoneAvailabilityState(MicrophoneAvailabilityState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneAvailabilityState", modifiers: "&&", def_value: None }]
constexpr MicrophoneAvailabilityState(MicrophoneAvailabilityState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MicrophoneAvailabilityState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MicrophoneAvailabilityState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MicrophoneAvailabilityState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MicrophoneAvailabilityState& operator=(MicrophoneAvailabilityState&& o) noexcept = default;
  constexpr MicrophoneAvailabilityState& operator=(MicrophoneAvailabilityState const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_MicrophoneAvailable, put=__set_MicrophoneAvailable))  MicrophoneAvailable;

constexpr void __set_MicrophoneAvailable(bool value) ;

constexpr bool __get_MicrophoneAvailable() const;


// Methods

static Oculus::Platform::Models::MicrophoneAvailabilityState New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a12f4 size 0x7c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::MicrophoneAvailabilityState);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MicrophoneAvailabilityState, "Oculus.Platform.Models", "MicrophoneAvailabilityState");
