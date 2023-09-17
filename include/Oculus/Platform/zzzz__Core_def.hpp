#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
// Forward declare root types
namespace Oculus::Platform {
class Core;
}
// Type: Oculus.Platform::Core
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13310))
// CS Name: Oculus.Platform.Core
class CORDL_TYPE Core : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Core() = default;

// Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: " const&", def_value: None }]
constexpr Core(Core const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "&&", def_value: None }]
constexpr Core(Core&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Core(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Core& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Core& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Core& operator=(Core&& o) noexcept = default;
  constexpr Core& operator=(Core const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_IsPlatformInitialized, put=__set_IsPlatformInitialized))  IsPlatformInitialized;

static void __set_IsPlatformInitialized(bool value) ;

static bool __get_IsPlatformInitialized() ;

static bool __declspec(property(get=__get_LogMessages, put=__set_LogMessages))  LogMessages;

static void __set_LogMessages(bool value) ;

static bool __get_LogMessages() ;

static ::StringW __declspec(property(get=__get_PlatformUninitializedError, put=__set_PlatformUninitializedError))  PlatformUninitializedError;

static void __set_PlatformUninitializedError(::StringW value) ;

static ::StringW __get_PlatformUninitializedError() ;


// Methods

/// @brief Method IsInitialized addr 0x2585348 size 0x58 virtual false final false
static bool IsInitialized() ;

/// @brief Method ForceInitialized addr 0x25853a0 size 0x5c virtual false final false
static void ForceInitialized() ;

/// @brief Method getAppID addr 0x25853fc size 0x1a4 virtual false final false
static ::StringW getAppID(::StringW appId) ;

/// @brief Method AsyncInitialize addr 0x25855cc size 0x2cc virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize> AsyncInitialize(::StringW appId) ;

/// @brief Method AsyncInitialize addr 0x2585898 size 0x260 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize> AsyncInitialize(::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool> initConfigOptions, ::StringW appId) ;

/// @brief Method Initialize addr 0x2585af8 size 0x30c virtual false final false
static void Initialize(::StringW appId) ;

/// @brief Method GetAppIDFromConfig addr 0x25855a0 size 0x2c virtual false final false
static ::StringW GetAppIDFromConfig() ;

// Ctor Parameters []
explicit Core() ;

/// @brief Method .ctor addr 0x2585e04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Core);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Core, "Oculus.Platform", "Core");
