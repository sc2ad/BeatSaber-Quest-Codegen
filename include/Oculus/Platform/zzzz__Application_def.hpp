#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
class ApplicationOptions;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
// Forward declare root types
namespace Oculus::Platform {
class Application;
}
// Type: Oculus.Platform::Application
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13323))
// CS Name: Oculus.Platform.Application
class CORDL_TYPE Application : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Application() = default;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: " const&", def_value: None }]
constexpr Application(Application const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
constexpr Application(Application&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Application(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Application& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Application& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Application& operator=(Application&& o) noexcept = default;
  constexpr Application& operator=(Application const& o) noexcept = default;
                


// Methods

/// @brief Method GetVersion addr 0x2590538 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationVersion> GetVersion() ;

/// @brief Method LaunchOtherApp addr 0x2590690 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<::StringW> LaunchOtherApp(uint64_t appID, Oculus::Platform::ApplicationOptions deeplink_options) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Application);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Application, "Oculus.Platform", "Application");
