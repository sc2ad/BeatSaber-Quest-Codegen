#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
// Forward declare root types
namespace Oculus::Platform {
class Livestreaming;
}
// Type: Oculus.Platform::Livestreaming
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13332))
// CS Name: Oculus.Platform.Livestreaming
class CORDL_TYPE Livestreaming : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Livestreaming() = default;

// Ctor Parameters [CppParam { name: "", ty: "Livestreaming", modifiers: " const&", def_value: None }]
constexpr Livestreaming(Livestreaming const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Livestreaming", modifiers: "&&", def_value: None }]
constexpr Livestreaming(Livestreaming&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Livestreaming(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Livestreaming& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Livestreaming& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Livestreaming& operator=(Livestreaming&& o) noexcept = default;
  constexpr Livestreaming& operator=(Livestreaming const& o) noexcept = default;
                


// Methods

/// @brief Method SetStatusUpdateNotificationCallback addr 0x25962a8 size 0x74 virtual false final false
static void SetStatusUpdateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LivestreamingStatus> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Livestreaming);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Livestreaming, "Oculus.Platform", "Livestreaming");
