#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRApplicationError;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___IdentifyApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationCount;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___IsApplicationInstalled;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___AddApplicationManifest;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetStartingApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationProcessId;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetTransitionState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchInternalProcess;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___AddApplicationManifest;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___CancelApplicationLaunch;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationCount;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationProcessId;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationPropertyBool;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationPropertyString;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetStartingApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___GetTransitionState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___IdentifyApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___IsApplicationInstalled;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchDashboardOverlay;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchInternalProcess;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___LaunchTemplateApplication;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___RemoveApplicationManifest;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType;
}
namespace OVR::OpenVR {
struct IVRApplications;
}
// Type: ::_AddApplicationManifest
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9065))
// CS Name: OVR.OpenVR.IVRApplications::_AddApplicationManifest
class CORDL_TYPE OVR__OpenVR__IVRApplications___AddApplicationManifest : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___AddApplicationManifest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___AddApplicationManifest", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___AddApplicationManifest(OVR__OpenVR__IVRApplications___AddApplicationManifest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___AddApplicationManifest", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___AddApplicationManifest(OVR__OpenVR__IVRApplications___AddApplicationManifest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___AddApplicationManifest(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___AddApplicationManifest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___AddApplicationManifest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___AddApplicationManifest& operator=(OVR__OpenVR__IVRApplications___AddApplicationManifest&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___AddApplicationManifest& operator=(OVR__OpenVR__IVRApplications___AddApplicationManifest const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26481d0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26482a8 size 0x18 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchApplicationManifestFullPath, bool bTemporary) ;

/// @brief Method BeginInvoke addr 0x26482c0 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchApplicationManifestFullPath, bool bTemporary, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648358 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_RemoveApplicationManifest
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9066))
// CS Name: OVR.OpenVR.IVRApplications::_RemoveApplicationManifest
class CORDL_TYPE OVR__OpenVR__IVRApplications___RemoveApplicationManifest : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___RemoveApplicationManifest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___RemoveApplicationManifest", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___RemoveApplicationManifest(OVR__OpenVR__IVRApplications___RemoveApplicationManifest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___RemoveApplicationManifest", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___RemoveApplicationManifest(OVR__OpenVR__IVRApplications___RemoveApplicationManifest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___RemoveApplicationManifest(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___RemoveApplicationManifest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___RemoveApplicationManifest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___RemoveApplicationManifest& operator=(OVR__OpenVR__IVRApplications___RemoveApplicationManifest&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___RemoveApplicationManifest& operator=(OVR__OpenVR__IVRApplications___RemoveApplicationManifest const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2648380 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648454 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchApplicationManifestFullPath) ;

/// @brief Method BeginInvoke addr 0x2648468 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchApplicationManifestFullPath, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648488 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsApplicationInstalled
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9067))
// CS Name: OVR.OpenVR.IVRApplications::_IsApplicationInstalled
class CORDL_TYPE OVR__OpenVR__IVRApplications___IsApplicationInstalled : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___IsApplicationInstalled() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___IsApplicationInstalled", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___IsApplicationInstalled(OVR__OpenVR__IVRApplications___IsApplicationInstalled const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___IsApplicationInstalled", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___IsApplicationInstalled(OVR__OpenVR__IVRApplications___IsApplicationInstalled&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___IsApplicationInstalled(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___IsApplicationInstalled& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___IsApplicationInstalled& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___IsApplicationInstalled& operator=(OVR__OpenVR__IVRApplications___IsApplicationInstalled&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___IsApplicationInstalled& operator=(OVR__OpenVR__IVRApplications___IsApplicationInstalled const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26484b0 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648584 size 0x14 virtual true final false
 bool Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x2648598 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26485b8 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationCount
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9068))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationCount
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationCount : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationCount() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationCount", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationCount(OVR__OpenVR__IVRApplications___GetApplicationCount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationCount", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationCount(OVR__OpenVR__IVRApplications___GetApplicationCount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationCount(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationCount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationCount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationCount& operator=(OVR__OpenVR__IVRApplications___GetApplicationCount&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationCount& operator=(OVR__OpenVR__IVRApplications___GetApplicationCount const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26485e0 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264869c size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x26486b0 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26486d0 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationKeyByIndex
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9069))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationKeyByIndex
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex(OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex(OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex& operator=(OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex& operator=(OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26486f8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26487bc size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(uint32_t unApplicationIndex, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x26487d0 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unApplicationIndex, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648874 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationKeyByProcessId
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9070))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationKeyByProcessId
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId(OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId(OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId& operator=(OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId& operator=(OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264889c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648960 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(uint32_t unProcessId, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x2648974 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unProcessId, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648a18 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LaunchApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9071))
// CS Name: OVR.OpenVR.IVRApplications::_LaunchApplication
class CORDL_TYPE OVR__OpenVR__IVRApplications___LaunchApplication : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___LaunchApplication() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchApplication", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchApplication(OVR__OpenVR__IVRApplications___LaunchApplication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchApplication", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchApplication(OVR__OpenVR__IVRApplications___LaunchApplication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___LaunchApplication(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___LaunchApplication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchApplication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchApplication& operator=(OVR__OpenVR__IVRApplications___LaunchApplication&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___LaunchApplication& operator=(OVR__OpenVR__IVRApplications___LaunchApplication const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2648a40 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648b14 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x2648b28 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648b48 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LaunchTemplateApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9072))
// CS Name: OVR.OpenVR.IVRApplications::_LaunchTemplateApplication
class CORDL_TYPE OVR__OpenVR__IVRApplications___LaunchTemplateApplication : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___LaunchTemplateApplication() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchTemplateApplication", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchTemplateApplication(OVR__OpenVR__IVRApplications___LaunchTemplateApplication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchTemplateApplication", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchTemplateApplication(OVR__OpenVR__IVRApplications___LaunchTemplateApplication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___LaunchTemplateApplication(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___LaunchTemplateApplication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchTemplateApplication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchTemplateApplication& operator=(OVR__OpenVR__IVRApplications___LaunchTemplateApplication&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___LaunchTemplateApplication& operator=(OVR__OpenVR__IVRApplications___LaunchTemplateApplication const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2648b70 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648c48 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint32_t unKeys) ;

/// @brief Method BeginInvoke addr 0x2648c5c size 0xa8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint32_t unKeys, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648d04 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LaunchApplicationFromMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9073))
// CS Name: OVR.OpenVR.IVRApplications::_LaunchApplicationFromMimeType
class CORDL_TYPE OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType(OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType(OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType& operator=(OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType& operator=(OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2648d2c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648e04 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchMimeType, ::StringW pchArgs) ;

/// @brief Method BeginInvoke addr 0x2648e18 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchMimeType, ::StringW pchArgs, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648e40 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LaunchDashboardOverlay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9074))
// CS Name: OVR.OpenVR.IVRApplications::_LaunchDashboardOverlay
class CORDL_TYPE OVR__OpenVR__IVRApplications___LaunchDashboardOverlay : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___LaunchDashboardOverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchDashboardOverlay", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchDashboardOverlay(OVR__OpenVR__IVRApplications___LaunchDashboardOverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchDashboardOverlay", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchDashboardOverlay(OVR__OpenVR__IVRApplications___LaunchDashboardOverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___LaunchDashboardOverlay(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___LaunchDashboardOverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchDashboardOverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchDashboardOverlay& operator=(OVR__OpenVR__IVRApplications___LaunchDashboardOverlay&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___LaunchDashboardOverlay& operator=(OVR__OpenVR__IVRApplications___LaunchDashboardOverlay const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2648e68 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2648f3c size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x2648f50 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2648f70 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CancelApplicationLaunch
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9075))
// CS Name: OVR.OpenVR.IVRApplications::_CancelApplicationLaunch
class CORDL_TYPE OVR__OpenVR__IVRApplications___CancelApplicationLaunch : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___CancelApplicationLaunch() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___CancelApplicationLaunch", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___CancelApplicationLaunch(OVR__OpenVR__IVRApplications___CancelApplicationLaunch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___CancelApplicationLaunch", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___CancelApplicationLaunch(OVR__OpenVR__IVRApplications___CancelApplicationLaunch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___CancelApplicationLaunch(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___CancelApplicationLaunch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___CancelApplicationLaunch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___CancelApplicationLaunch& operator=(OVR__OpenVR__IVRApplications___CancelApplicationLaunch&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___CancelApplicationLaunch& operator=(OVR__OpenVR__IVRApplications___CancelApplicationLaunch const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2648f98 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264906c size 0x14 virtual true final false
 bool Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x2649080 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26490a0 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IdentifyApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9076))
// CS Name: OVR.OpenVR.IVRApplications::_IdentifyApplication
class CORDL_TYPE OVR__OpenVR__IVRApplications___IdentifyApplication : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___IdentifyApplication() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___IdentifyApplication", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___IdentifyApplication(OVR__OpenVR__IVRApplications___IdentifyApplication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___IdentifyApplication", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___IdentifyApplication(OVR__OpenVR__IVRApplications___IdentifyApplication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___IdentifyApplication(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___IdentifyApplication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___IdentifyApplication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___IdentifyApplication& operator=(OVR__OpenVR__IVRApplications___IdentifyApplication&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___IdentifyApplication& operator=(OVR__OpenVR__IVRApplications___IdentifyApplication const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26490c8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264918c size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(uint32_t unProcessId, ::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x26491a0 size 0x90 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unProcessId, ::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2649230 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationProcessId
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9077))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationProcessId
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationProcessId : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationProcessId() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationProcessId", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationProcessId(OVR__OpenVR__IVRApplications___GetApplicationProcessId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationProcessId", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationProcessId(OVR__OpenVR__IVRApplications___GetApplicationProcessId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationProcessId(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationProcessId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationProcessId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationProcessId& operator=(OVR__OpenVR__IVRApplications___GetApplicationProcessId&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationProcessId& operator=(OVR__OpenVR__IVRApplications___GetApplicationProcessId const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649258 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264932c size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x2649340 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2649360 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationsErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9078))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationsErrorNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum(OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum(OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum& operator=(OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum& operator=(OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649388 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264944c size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRApplicationError error) ;

/// @brief Method BeginInvoke addr 0x2649460 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRApplicationError error, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26494e4 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationPropertyString
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9079))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationPropertyString
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationPropertyString : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationPropertyString() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationPropertyString", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyString(OVR__OpenVR__IVRApplications___GetApplicationPropertyString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationPropertyString", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyString(OVR__OpenVR__IVRApplications___GetApplicationPropertyString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationPropertyString(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyString& operator=(OVR__OpenVR__IVRApplications___GetApplicationPropertyString&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyString& operator=(OVR__OpenVR__IVRApplications___GetApplicationPropertyString const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264950c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26495e4 size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, ByRef<OVR::OpenVR::EVRApplicationError> peError) ;

/// @brief Method BeginInvoke addr 0x26495f8 size 0xfc virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, System::Text::StringBuilder pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, ByRef<OVR::OpenVR::EVRApplicationError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26496f4 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::EVRApplicationError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationPropertyBool
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9080))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationPropertyBool
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationPropertyBool : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationPropertyBool() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationPropertyBool", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyBool(OVR__OpenVR__IVRApplications___GetApplicationPropertyBool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationPropertyBool", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyBool(OVR__OpenVR__IVRApplications___GetApplicationPropertyBool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationPropertyBool(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyBool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyBool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyBool& operator=(OVR__OpenVR__IVRApplications___GetApplicationPropertyBool&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyBool& operator=(OVR__OpenVR__IVRApplications___GetApplicationPropertyBool const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649720 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26497f8 size 0x14 virtual true final false
 bool Invoke(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError) ;

/// @brief Method BeginInvoke addr 0x264980c size 0xc8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26498d4 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::EVRApplicationError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationPropertyUint64
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9081))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationPropertyUint64
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64(OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64(OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64& operator=(OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64& operator=(OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649900 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26499d8 size 0x14 virtual true final false
 uint64_t Invoke(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError) ;

/// @brief Method BeginInvoke addr 0x26499ec size 0xc8 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<OVR::OpenVR::EVRApplicationError> peError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2649ab4 size 0x2c virtual true final false
 uint64_t EndInvoke(ByRef<OVR::OpenVR::EVRApplicationError> peError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetApplicationAutoLaunch
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9082))
// CS Name: OVR.OpenVR.IVRApplications::_SetApplicationAutoLaunch
class CORDL_TYPE OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch(OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch(OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch& operator=(OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch& operator=(OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649ae0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2649bb8 size 0x18 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey, bool bAutoLaunch) ;

/// @brief Method BeginInvoke addr 0x2649bd0 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2649c68 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationAutoLaunch
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9083))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationAutoLaunch
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch(OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch(OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch& operator=(OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch& operator=(OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649c90 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2649d64 size 0x14 virtual true final false
 bool Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x2649d78 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2649d98 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetDefaultApplicationForMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9084))
// CS Name: OVR.OpenVR.IVRApplications::_SetDefaultApplicationForMimeType
class CORDL_TYPE OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType(OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType(OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType& operator=(OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType& operator=(OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649dc0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2649e98 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey, ::StringW pchMimeType) ;

/// @brief Method BeginInvoke addr 0x2649eac size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, ::StringW pchMimeType, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2649ed4 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDefaultApplicationForMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9085))
// CS Name: OVR.OpenVR.IVRApplications::_GetDefaultApplicationForMimeType
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType(OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType(OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType& operator=(OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType& operator=(OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2649efc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2649fd4 size 0x14 virtual true final false
 bool Invoke(::StringW pchMimeType, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x2649fe8 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchMimeType, System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a080 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationSupportedMimeTypes
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9086))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationSupportedMimeTypes
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes(OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes(OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes& operator=(OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes& operator=(OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a0a8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264a180 size 0x14 virtual true final false
 bool Invoke(::StringW pchAppKey, System::Text::StringBuilder pchMimeTypesBuffer, uint32_t unMimeTypesBuffer) ;

/// @brief Method BeginInvoke addr 0x264a194 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::Text::StringBuilder pchMimeTypesBuffer, uint32_t unMimeTypesBuffer, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a22c size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationsThatSupportMimeType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9087))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationsThatSupportMimeType
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType(OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType(OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType& operator=(OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType& operator=(OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a254 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264a32c size 0x14 virtual true final false
 uint32_t Invoke(::StringW pchMimeType, System::Text::StringBuilder pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer) ;

/// @brief Method BeginInvoke addr 0x264a340 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchMimeType, System::Text::StringBuilder pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a3d8 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationLaunchArguments
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9088))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationLaunchArguments
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments(OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments(OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments& operator=(OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments& operator=(OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a400 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264a4c4 size 0x14 virtual true final false
 uint32_t Invoke(uint32_t unHandle, System::Text::StringBuilder pchArgs, uint32_t unArgs) ;

/// @brief Method BeginInvoke addr 0x264a4d8 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unHandle, System::Text::StringBuilder pchArgs, uint32_t unArgs, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a57c size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetStartingApplication
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9089))
// CS Name: OVR.OpenVR.IVRApplications::_GetStartingApplication
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetStartingApplication : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetStartingApplication() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetStartingApplication", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetStartingApplication(OVR__OpenVR__IVRApplications___GetStartingApplication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetStartingApplication", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetStartingApplication(OVR__OpenVR__IVRApplications___GetStartingApplication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetStartingApplication(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetStartingApplication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetStartingApplication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetStartingApplication& operator=(OVR__OpenVR__IVRApplications___GetStartingApplication&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetStartingApplication& operator=(OVR__OpenVR__IVRApplications___GetStartingApplication const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a5a4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264a67c size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen) ;

/// @brief Method BeginInvoke addr 0x264a690 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a724 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTransitionState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9090))
// CS Name: OVR.OpenVR.IVRApplications::_GetTransitionState
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetTransitionState : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetTransitionState() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetTransitionState", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetTransitionState(OVR__OpenVR__IVRApplications___GetTransitionState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetTransitionState", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetTransitionState(OVR__OpenVR__IVRApplications___GetTransitionState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetTransitionState(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetTransitionState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetTransitionState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetTransitionState& operator=(OVR__OpenVR__IVRApplications___GetTransitionState&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetTransitionState& operator=(OVR__OpenVR__IVRApplications___GetTransitionState const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a74c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264a808 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationTransitionState Invoke() ;

/// @brief Method BeginInvoke addr 0x264a81c size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a83c size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationTransitionState EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PerformApplicationPrelaunchCheck
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9091))
// CS Name: OVR.OpenVR.IVRApplications::_PerformApplicationPrelaunchCheck
class CORDL_TYPE OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck(OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck(OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck& operator=(OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck& operator=(OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a864 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264a938 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchAppKey) ;

/// @brief Method BeginInvoke addr 0x264a94c size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchAppKey, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264a96c size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetApplicationsTransitionStateNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9092))
// CS Name: OVR.OpenVR.IVRApplications::_GetApplicationsTransitionStateNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum(OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum(OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum& operator=(OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum& operator=(OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264a994 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264aa58 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRApplicationTransitionState state) ;

/// @brief Method BeginInvoke addr 0x264aa6c size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRApplicationTransitionState state, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264aaf0 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsQuitUserPromptRequested
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9093))
// CS Name: OVR.OpenVR.IVRApplications::_IsQuitUserPromptRequested
class CORDL_TYPE OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested(OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested(OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested& operator=(OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested& operator=(OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ab18 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264abd4 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x264abe8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ac08 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LaunchInternalProcess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9094))
// CS Name: OVR.OpenVR.IVRApplications::_LaunchInternalProcess
class CORDL_TYPE OVR__OpenVR__IVRApplications___LaunchInternalProcess : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___LaunchInternalProcess() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchInternalProcess", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchInternalProcess(OVR__OpenVR__IVRApplications___LaunchInternalProcess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___LaunchInternalProcess", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___LaunchInternalProcess(OVR__OpenVR__IVRApplications___LaunchInternalProcess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___LaunchInternalProcess(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___LaunchInternalProcess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchInternalProcess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___LaunchInternalProcess& operator=(OVR__OpenVR__IVRApplications___LaunchInternalProcess&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___LaunchInternalProcess& operator=(OVR__OpenVR__IVRApplications___LaunchInternalProcess const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ac30 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264ad08 size 0x14 virtual true final false
 OVR::OpenVR::EVRApplicationError Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory) ;

/// @brief Method BeginInvoke addr 0x264ad1c size 0x2c virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ad48 size 0x28 virtual true final false
 OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCurrentSceneProcessId
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9095))
// CS Name: OVR.OpenVR.IVRApplications::_GetCurrentSceneProcessId
class CORDL_TYPE OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId(OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId(OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId& operator=(OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId& operator=(OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ad70 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264ae2c size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x264ae40 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ae60 size 0x28 virtual true final false
 uint32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRApplications
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9096))
// CS Name: OVR.OpenVR.IVRApplications
struct CORDL_TYPE IVRApplications : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetCurrentSceneProcessId = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId;

using _LaunchInternalProcess = OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess;

using _IsQuitUserPromptRequested = OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested;

using _GetApplicationsTransitionStateNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum;

using _PerformApplicationPrelaunchCheck = OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck;

using _GetTransitionState = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState;

using _GetStartingApplication = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication;

using _GetApplicationLaunchArguments = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments;

using _GetApplicationsThatSupportMimeType = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType;

using _GetApplicationSupportedMimeTypes = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes;

using _GetDefaultApplicationForMimeType = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType;

using _SetDefaultApplicationForMimeType = OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType;

using _GetApplicationAutoLaunch = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch;

using _SetApplicationAutoLaunch = OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch;

using _GetApplicationPropertyUint64 = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64;

using _GetApplicationPropertyBool = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool;

using _GetApplicationPropertyString = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString;

using _GetApplicationsErrorNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum;

using _GetApplicationProcessId = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId;

using _IdentifyApplication = OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication;

using _CancelApplicationLaunch = OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch;

using _LaunchDashboardOverlay = OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay;

using _LaunchApplicationFromMimeType = OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType;

using _LaunchTemplateApplication = OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication;

using _LaunchApplication = OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication;

using _GetApplicationKeyByProcessId = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId;

using _GetApplicationKeyByIndex = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex;

using _GetApplicationCount = OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount;

using _IsApplicationInstalled = OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled;

using _RemoveApplicationManifest = OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest;

using _AddApplicationManifest = OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest;

// Ctor Parameters [CppParam { name: "AddApplicationManifest", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest", modifiers: "", def_value: None }, CppParam { name: "RemoveApplicationManifest", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest", modifiers: "", def_value: None }, CppParam { name: "IsApplicationInstalled", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled", modifiers: "", def_value: None }, CppParam { name: "GetApplicationCount", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount", modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByIndex", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex", modifiers: "", def_value: None }, CppParam { name: "GetApplicationKeyByProcessId", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId", modifiers: "", def_value: None }, CppParam { name: "LaunchApplication", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication", modifiers: "", def_value: None }, CppParam { name: "LaunchTemplateApplication", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication", modifiers: "", def_value: None }, CppParam { name: "LaunchApplicationFromMimeType", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType", modifiers: "", def_value: None }, CppParam { name: "LaunchDashboardOverlay", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay", modifiers: "", def_value: None }, CppParam { name: "CancelApplicationLaunch", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch", modifiers: "", def_value: None }, CppParam { name: "IdentifyApplication", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication", modifiers: "", def_value: None }, CppParam { name: "GetApplicationProcessId", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsErrorNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyString", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyBool", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool", modifiers: "", def_value: None }, CppParam { name: "GetApplicationPropertyUint64", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64", modifiers: "", def_value: None }, CppParam { name: "SetApplicationAutoLaunch", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch", modifiers: "", def_value: None }, CppParam { name: "GetApplicationAutoLaunch", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch", modifiers: "", def_value: None }, CppParam { name: "SetDefaultApplicationForMimeType", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "", def_value: None }, CppParam { name: "GetDefaultApplicationForMimeType", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "", def_value: None }, CppParam { name: "GetApplicationSupportedMimeTypes", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsThatSupportMimeType", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "", def_value: None }, CppParam { name: "GetApplicationLaunchArguments", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments", modifiers: "", def_value: None }, CppParam { name: "GetStartingApplication", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication", modifiers: "", def_value: None }, CppParam { name: "GetTransitionState", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState", modifiers: "", def_value: None }, CppParam { name: "PerformApplicationPrelaunchCheck", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "", def_value: None }, CppParam { name: "GetApplicationsTransitionStateNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "IsQuitUserPromptRequested", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested", modifiers: "", def_value: None }, CppParam { name: "LaunchInternalProcess", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess", modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneProcessId", ty: "OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId", modifiers: "", def_value: None }]
constexpr IVRApplications(OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest AddApplicationManifest, OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest RemoveApplicationManifest, OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled IsApplicationInstalled, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount GetApplicationCount, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex GetApplicationKeyByIndex, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId GetApplicationKeyByProcessId, OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication LaunchApplication, OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication LaunchTemplateApplication, OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType LaunchApplicationFromMimeType, OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay LaunchDashboardOverlay, OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch CancelApplicationLaunch, OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication IdentifyApplication, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId GetApplicationProcessId, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum GetApplicationsErrorNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString GetApplicationPropertyString, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool GetApplicationPropertyBool, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 GetApplicationPropertyUint64, OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch SetApplicationAutoLaunch, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch GetApplicationAutoLaunch, OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType SetDefaultApplicationForMimeType, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType GetDefaultApplicationForMimeType, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes GetApplicationSupportedMimeTypes, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType GetApplicationsThatSupportMimeType, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments GetApplicationLaunchArguments, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication GetStartingApplication, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState GetTransitionState, OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck PerformApplicationPrelaunchCheck, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum GetApplicationsTransitionStateNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested IsQuitUserPromptRequested, OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess LaunchInternalProcess, OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId GetCurrentSceneProcessId) noexcept;


                    constexpr IVRApplications(IVRApplications const&) = default;
                    constexpr IVRApplications(IVRApplications&&) = default;
                    constexpr IVRApplications& operator=(IVRApplications const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRApplications& operator=(IVRApplications&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xf8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRApplications(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest __declspec(property(get=__get_AddApplicationManifest, put=__set_AddApplicationManifest))  AddApplicationManifest;

constexpr void __set_AddApplicationManifest(OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest __get_AddApplicationManifest() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest __declspec(property(get=__get_RemoveApplicationManifest, put=__set_RemoveApplicationManifest))  RemoveApplicationManifest;

constexpr void __set_RemoveApplicationManifest(OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest __get_RemoveApplicationManifest() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled __declspec(property(get=__get_IsApplicationInstalled, put=__set_IsApplicationInstalled))  IsApplicationInstalled;

constexpr void __set_IsApplicationInstalled(OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled __get_IsApplicationInstalled() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount __declspec(property(get=__get_GetApplicationCount, put=__set_GetApplicationCount))  GetApplicationCount;

constexpr void __set_GetApplicationCount(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount __get_GetApplicationCount() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex __declspec(property(get=__get_GetApplicationKeyByIndex, put=__set_GetApplicationKeyByIndex))  GetApplicationKeyByIndex;

constexpr void __set_GetApplicationKeyByIndex(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex __get_GetApplicationKeyByIndex() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId __declspec(property(get=__get_GetApplicationKeyByProcessId, put=__set_GetApplicationKeyByProcessId))  GetApplicationKeyByProcessId;

constexpr void __set_GetApplicationKeyByProcessId(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId __get_GetApplicationKeyByProcessId() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication __declspec(property(get=__get_LaunchApplication, put=__set_LaunchApplication))  LaunchApplication;

constexpr void __set_LaunchApplication(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication __get_LaunchApplication() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication __declspec(property(get=__get_LaunchTemplateApplication, put=__set_LaunchTemplateApplication))  LaunchTemplateApplication;

constexpr void __set_LaunchTemplateApplication(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication __get_LaunchTemplateApplication() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType __declspec(property(get=__get_LaunchApplicationFromMimeType, put=__set_LaunchApplicationFromMimeType))  LaunchApplicationFromMimeType;

constexpr void __set_LaunchApplicationFromMimeType(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType __get_LaunchApplicationFromMimeType() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay __declspec(property(get=__get_LaunchDashboardOverlay, put=__set_LaunchDashboardOverlay))  LaunchDashboardOverlay;

constexpr void __set_LaunchDashboardOverlay(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay __get_LaunchDashboardOverlay() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch __declspec(property(get=__get_CancelApplicationLaunch, put=__set_CancelApplicationLaunch))  CancelApplicationLaunch;

constexpr void __set_CancelApplicationLaunch(OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch __get_CancelApplicationLaunch() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication __declspec(property(get=__get_IdentifyApplication, put=__set_IdentifyApplication))  IdentifyApplication;

constexpr void __set_IdentifyApplication(OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication __get_IdentifyApplication() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId __declspec(property(get=__get_GetApplicationProcessId, put=__set_GetApplicationProcessId))  GetApplicationProcessId;

constexpr void __set_GetApplicationProcessId(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId __get_GetApplicationProcessId() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum __declspec(property(get=__get_GetApplicationsErrorNameFromEnum, put=__set_GetApplicationsErrorNameFromEnum))  GetApplicationsErrorNameFromEnum;

constexpr void __set_GetApplicationsErrorNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum __get_GetApplicationsErrorNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString __declspec(property(get=__get_GetApplicationPropertyString, put=__set_GetApplicationPropertyString))  GetApplicationPropertyString;

constexpr void __set_GetApplicationPropertyString(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString __get_GetApplicationPropertyString() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool __declspec(property(get=__get_GetApplicationPropertyBool, put=__set_GetApplicationPropertyBool))  GetApplicationPropertyBool;

constexpr void __set_GetApplicationPropertyBool(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool __get_GetApplicationPropertyBool() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 __declspec(property(get=__get_GetApplicationPropertyUint64, put=__set_GetApplicationPropertyUint64))  GetApplicationPropertyUint64;

constexpr void __set_GetApplicationPropertyUint64(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 __get_GetApplicationPropertyUint64() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch __declspec(property(get=__get_SetApplicationAutoLaunch, put=__set_SetApplicationAutoLaunch))  SetApplicationAutoLaunch;

constexpr void __set_SetApplicationAutoLaunch(OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch __get_SetApplicationAutoLaunch() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch __declspec(property(get=__get_GetApplicationAutoLaunch, put=__set_GetApplicationAutoLaunch))  GetApplicationAutoLaunch;

constexpr void __set_GetApplicationAutoLaunch(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch __get_GetApplicationAutoLaunch() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType __declspec(property(get=__get_SetDefaultApplicationForMimeType, put=__set_SetDefaultApplicationForMimeType))  SetDefaultApplicationForMimeType;

constexpr void __set_SetDefaultApplicationForMimeType(OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType __get_SetDefaultApplicationForMimeType() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType __declspec(property(get=__get_GetDefaultApplicationForMimeType, put=__set_GetDefaultApplicationForMimeType))  GetDefaultApplicationForMimeType;

constexpr void __set_GetDefaultApplicationForMimeType(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType __get_GetDefaultApplicationForMimeType() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes __declspec(property(get=__get_GetApplicationSupportedMimeTypes, put=__set_GetApplicationSupportedMimeTypes))  GetApplicationSupportedMimeTypes;

constexpr void __set_GetApplicationSupportedMimeTypes(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes __get_GetApplicationSupportedMimeTypes() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType __declspec(property(get=__get_GetApplicationsThatSupportMimeType, put=__set_GetApplicationsThatSupportMimeType))  GetApplicationsThatSupportMimeType;

constexpr void __set_GetApplicationsThatSupportMimeType(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType __get_GetApplicationsThatSupportMimeType() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments __declspec(property(get=__get_GetApplicationLaunchArguments, put=__set_GetApplicationLaunchArguments))  GetApplicationLaunchArguments;

constexpr void __set_GetApplicationLaunchArguments(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments __get_GetApplicationLaunchArguments() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication __declspec(property(get=__get_GetStartingApplication, put=__set_GetStartingApplication))  GetStartingApplication;

constexpr void __set_GetStartingApplication(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication __get_GetStartingApplication() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState __declspec(property(get=__get_GetTransitionState, put=__set_GetTransitionState))  GetTransitionState;

constexpr void __set_GetTransitionState(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState __get_GetTransitionState() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck __declspec(property(get=__get_PerformApplicationPrelaunchCheck, put=__set_PerformApplicationPrelaunchCheck))  PerformApplicationPrelaunchCheck;

constexpr void __set_PerformApplicationPrelaunchCheck(OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck __get_PerformApplicationPrelaunchCheck() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum __declspec(property(get=__get_GetApplicationsTransitionStateNameFromEnum, put=__set_GetApplicationsTransitionStateNameFromEnum))  GetApplicationsTransitionStateNameFromEnum;

constexpr void __set_GetApplicationsTransitionStateNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum __get_GetApplicationsTransitionStateNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested __declspec(property(get=__get_IsQuitUserPromptRequested, put=__set_IsQuitUserPromptRequested))  IsQuitUserPromptRequested;

constexpr void __set_IsQuitUserPromptRequested(OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested __get_IsQuitUserPromptRequested() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess __declspec(property(get=__get_LaunchInternalProcess, put=__set_LaunchInternalProcess))  LaunchInternalProcess;

constexpr void __set_LaunchInternalProcess(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess __get_LaunchInternalProcess() const;

 OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId __declspec(property(get=__get_GetCurrentSceneProcessId, put=__set_GetCurrentSceneProcessId))  GetCurrentSceneProcessId;

constexpr void __set_GetCurrentSceneProcessId(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId __get_GetCurrentSceneProcessId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___AddApplicationManifest, "OVR.OpenVR", "IVRApplications/_AddApplicationManifest");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___CancelApplicationLaunch, "OVR.OpenVR", "IVRApplications/_CancelApplicationLaunch");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch, "OVR.OpenVR", "IVRApplications/_GetApplicationAutoLaunch");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationCount, "OVR.OpenVR", "IVRApplications/_GetApplicationCount");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByIndex");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId, "OVR.OpenVR", "IVRApplications/_GetApplicationKeyByProcessId");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments, "OVR.OpenVR", "IVRApplications/_GetApplicationLaunchArguments");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationProcessId, "OVR.OpenVR", "IVRApplications/_GetApplicationProcessId");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyBool, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyBool");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyString, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyString");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64, "OVR.OpenVR", "IVRApplications/_GetApplicationPropertyUint64");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes, "OVR.OpenVR", "IVRApplications/_GetApplicationSupportedMimeTypes");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum, "OVR.OpenVR", "IVRApplications/_GetApplicationsErrorNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType, "OVR.OpenVR", "IVRApplications/_GetApplicationsThatSupportMimeType");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum, "OVR.OpenVR", "IVRApplications/_GetApplicationsTransitionStateNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId, "OVR.OpenVR", "IVRApplications/_GetCurrentSceneProcessId");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType, "OVR.OpenVR", "IVRApplications/_GetDefaultApplicationForMimeType");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetStartingApplication, "OVR.OpenVR", "IVRApplications/_GetStartingApplication");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___GetTransitionState, "OVR.OpenVR", "IVRApplications/_GetTransitionState");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___IdentifyApplication, "OVR.OpenVR", "IVRApplications/_IdentifyApplication");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___IsApplicationInstalled, "OVR.OpenVR", "IVRApplications/_IsApplicationInstalled");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested, "OVR.OpenVR", "IVRApplications/_IsQuitUserPromptRequested");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplication, "OVR.OpenVR", "IVRApplications/_LaunchApplication");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType, "OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchDashboardOverlay, "OVR.OpenVR", "IVRApplications/_LaunchDashboardOverlay");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchInternalProcess, "OVR.OpenVR", "IVRApplications/_LaunchInternalProcess");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___LaunchTemplateApplication, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck, "OVR.OpenVR", "IVRApplications/_PerformApplicationPrelaunchCheck");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___RemoveApplicationManifest, "OVR.OpenVR", "IVRApplications/_RemoveApplicationManifest");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch, "OVR.OpenVR", "IVRApplications/_SetApplicationAutoLaunch");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType, "OVR.OpenVR", "IVRApplications/_SetDefaultApplicationForMimeType");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications, "OVR.OpenVR", "IVRApplications");
