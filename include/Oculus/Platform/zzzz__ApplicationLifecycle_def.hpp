#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Forward declare root types
namespace Oculus::Platform {
class ApplicationLifecycle;
}
// Type: Oculus.Platform::ApplicationLifecycle
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13311))
// CS Name: Oculus.Platform.ApplicationLifecycle
class CORDL_TYPE ApplicationLifecycle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ApplicationLifecycle() = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationLifecycle", modifiers: " const&", def_value: None }]
constexpr ApplicationLifecycle(ApplicationLifecycle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationLifecycle", modifiers: "&&", def_value: None }]
constexpr ApplicationLifecycle(ApplicationLifecycle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ApplicationLifecycle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ApplicationLifecycle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ApplicationLifecycle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ApplicationLifecycle& operator=(ApplicationLifecycle&& o) noexcept = default;
  constexpr ApplicationLifecycle& operator=(ApplicationLifecycle const& o) noexcept = default;
                


// Methods

/// @brief Method GetLaunchDetails addr 0x2585e70 size 0x90 virtual false final false
static Oculus::Platform::Models::LaunchDetails GetLaunchDetails() ;

/// @brief Method LogDeeplinkResult addr 0x2585f00 size 0x64 virtual false final false
static void LogDeeplinkResult(::StringW trackingID, Oculus::Platform::LaunchResult result) ;

/// @brief Method SetLaunchIntentChangedNotificationCallback addr 0x2585f64 size 0x74 virtual false final false
static void SetLaunchIntentChangedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::ApplicationLifecycle);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationLifecycle, "Oculus.Platform", "ApplicationLifecycle");
