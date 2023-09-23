#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___HookScreenshot;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___RequestScreenshot;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___SubmitScreenshot;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress;
}
namespace OVR::OpenVR {
struct IVRScreenshots;
}
// Type: ::_RequestScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9290))
// CS Name: OVR.OpenVR.IVRScreenshots::_RequestScreenshot
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___RequestScreenshot : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___RequestScreenshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___RequestScreenshot", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___RequestScreenshot(OVR__OpenVR__IVRScreenshots___RequestScreenshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___RequestScreenshot", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___RequestScreenshot(OVR__OpenVR__IVRScreenshots___RequestScreenshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___RequestScreenshot(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___RequestScreenshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___RequestScreenshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___RequestScreenshot& operator=(OVR__OpenVR__IVRScreenshots___RequestScreenshot&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___RequestScreenshot& operator=(OVR__OpenVR__IVRScreenshots___RequestScreenshot const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___RequestScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265e9f0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265eac8 size 0x14 virtual true final false
 OVR::OpenVR::EVRScreenshotError Invoke(ByRef<uint32_t> pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename) ;

/// @brief Method BeginInvoke addr 0x265eadc size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<uint32_t> pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265eba8 size 0x2c virtual true final false
 OVR::OpenVR::EVRScreenshotError EndInvoke(ByRef<uint32_t> pOutScreenshotHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_HookScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9291))
// CS Name: OVR.OpenVR.IVRScreenshots::_HookScreenshot
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___HookScreenshot : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___HookScreenshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___HookScreenshot", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___HookScreenshot(OVR__OpenVR__IVRScreenshots___HookScreenshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___HookScreenshot", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___HookScreenshot(OVR__OpenVR__IVRScreenshots___HookScreenshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___HookScreenshot(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___HookScreenshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___HookScreenshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___HookScreenshot& operator=(OVR__OpenVR__IVRScreenshots___HookScreenshot&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___HookScreenshot& operator=(OVR__OpenVR__IVRScreenshots___HookScreenshot const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___HookScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265ebd4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265ecac size 0x14 virtual true final false
 OVR::OpenVR::EVRScreenshotError Invoke(ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>> pSupportedTypes, int32_t numTypes) ;

/// @brief Method BeginInvoke addr 0x265ecc0 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::EVRScreenshotType>> pSupportedTypes, int32_t numTypes, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265ed54 size 0x28 virtual true final false
 OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetScreenshotPropertyType
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9292))
// CS Name: OVR.OpenVR.IVRScreenshots::_GetScreenshotPropertyType
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType& operator=(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType& operator=(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265ed7c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265ee40 size 0x14 virtual true final false
 OVR::OpenVR::EVRScreenshotType Invoke(uint32_t screenshotHandle, ByRef<OVR::OpenVR::EVRScreenshotError> pError) ;

/// @brief Method BeginInvoke addr 0x265ee54 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t screenshotHandle, ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265ef0c size 0x2c virtual true final false
 OVR::OpenVR::EVRScreenshotType EndInvoke(ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetScreenshotPropertyFilename
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9293))
// CS Name: OVR.OpenVR.IVRScreenshots::_GetScreenshotPropertyFilename
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename& operator=(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename& operator=(OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265ef38 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265effc size 0x14 virtual true final false
 uint32_t Invoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder pchFilename, uint32_t cchFilename, ByRef<OVR::OpenVR::EVRScreenshotError> pError) ;

/// @brief Method BeginInvoke addr 0x265f010 size 0x104 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder pchFilename, uint32_t cchFilename, ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265f114 size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<OVR::OpenVR::EVRScreenshotError> pError, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_UpdateScreenshotProgress
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9294))
// CS Name: OVR.OpenVR.IVRScreenshots::_UpdateScreenshotProgress
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress(OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress(OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress& operator=(OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress& operator=(OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265f140 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265f204 size 0x14 virtual true final false
 OVR::OpenVR::EVRScreenshotError Invoke(uint32_t screenshotHandle, float_t flProgress) ;

/// @brief Method BeginInvoke addr 0x265f218 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t screenshotHandle, float_t flProgress, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265f2d0 size 0x28 virtual true final false
 OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_TakeStereoScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9295))
// CS Name: OVR.OpenVR.IVRScreenshots::_TakeStereoScreenshot
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot(OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot(OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot& operator=(OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot& operator=(OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265f2f8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265f3d0 size 0x14 virtual true final false
 OVR::OpenVR::EVRScreenshotError Invoke(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) ;

/// @brief Method BeginInvoke addr 0x265f3e4 size 0xa0 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265f484 size 0x2c virtual true final false
 OVR::OpenVR::EVRScreenshotError EndInvoke(ByRef<uint32_t> pOutScreenshotHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SubmitScreenshot
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9296))
// CS Name: OVR.OpenVR.IVRScreenshots::_SubmitScreenshot
class CORDL_TYPE OVR__OpenVR__IVRScreenshots___SubmitScreenshot : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRScreenshots___SubmitScreenshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___SubmitScreenshot", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___SubmitScreenshot(OVR__OpenVR__IVRScreenshots___SubmitScreenshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRScreenshots___SubmitScreenshot", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRScreenshots___SubmitScreenshot(OVR__OpenVR__IVRScreenshots___SubmitScreenshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRScreenshots___SubmitScreenshot(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRScreenshots___SubmitScreenshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___SubmitScreenshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRScreenshots___SubmitScreenshot& operator=(OVR__OpenVR__IVRScreenshots___SubmitScreenshot&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRScreenshots___SubmitScreenshot& operator=(OVR__OpenVR__IVRScreenshots___SubmitScreenshot const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRScreenshots___SubmitScreenshot(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265f4b0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265f574 size 0x14 virtual true final false
 OVR::OpenVR::EVRScreenshotError Invoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename) ;

/// @brief Method BeginInvoke addr 0x265f588 size 0xc8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265f650 size 0x28 virtual true final false
 OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRScreenshots
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9297))
// CS Name: OVR.OpenVR.IVRScreenshots
struct CORDL_TYPE IVRScreenshots : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _SubmitScreenshot = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot;

using _TakeStereoScreenshot = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot;

using _UpdateScreenshotProgress = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress;

using _GetScreenshotPropertyFilename = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename;

using _GetScreenshotPropertyType = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType;

using _HookScreenshot = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot;

using _RequestScreenshot = OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot;

// Ctor Parameters [CppParam { name: "RequestScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot", modifiers: "", def_value: None }, CppParam { name: "HookScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot", modifiers: "", def_value: None }, CppParam { name: "GetScreenshotPropertyType", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType", modifiers: "", def_value: None }, CppParam { name: "GetScreenshotPropertyFilename", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename", modifiers: "", def_value: None }, CppParam { name: "UpdateScreenshotProgress", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress", modifiers: "", def_value: None }, CppParam { name: "TakeStereoScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot", modifiers: "", def_value: None }, CppParam { name: "SubmitScreenshot", ty: "OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot", modifiers: "", def_value: None }]
constexpr IVRScreenshots(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot RequestScreenshot, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot HookScreenshot, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType GetScreenshotPropertyType, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename GetScreenshotPropertyFilename, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress UpdateScreenshotProgress, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot TakeStereoScreenshot, OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot SubmitScreenshot) noexcept;


                    constexpr IVRScreenshots(IVRScreenshots const&) = default;
                    constexpr IVRScreenshots(IVRScreenshots&&) = default;
                    constexpr IVRScreenshots& operator=(IVRScreenshots const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRScreenshots& operator=(IVRScreenshots&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRScreenshots(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot __declspec(property(get=__get_RequestScreenshot, put=__set_RequestScreenshot))  RequestScreenshot;

constexpr void __set_RequestScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot __get_RequestScreenshot() const;

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot __declspec(property(get=__get_HookScreenshot, put=__set_HookScreenshot))  HookScreenshot;

constexpr void __set_HookScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot __get_HookScreenshot() const;

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType __declspec(property(get=__get_GetScreenshotPropertyType, put=__set_GetScreenshotPropertyType))  GetScreenshotPropertyType;

constexpr void __set_GetScreenshotPropertyType(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType __get_GetScreenshotPropertyType() const;

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename __declspec(property(get=__get_GetScreenshotPropertyFilename, put=__set_GetScreenshotPropertyFilename))  GetScreenshotPropertyFilename;

constexpr void __set_GetScreenshotPropertyFilename(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename __get_GetScreenshotPropertyFilename() const;

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress __declspec(property(get=__get_UpdateScreenshotProgress, put=__set_UpdateScreenshotProgress))  UpdateScreenshotProgress;

constexpr void __set_UpdateScreenshotProgress(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress __get_UpdateScreenshotProgress() const;

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot __declspec(property(get=__get_TakeStereoScreenshot, put=__set_TakeStereoScreenshot))  TakeStereoScreenshot;

constexpr void __set_TakeStereoScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot __get_TakeStereoScreenshot() const;

 OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot __declspec(property(get=__get_SubmitScreenshot, put=__set_SubmitScreenshot))  SubmitScreenshot;

constexpr void __set_SubmitScreenshot(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot __get_SubmitScreenshot() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyFilename, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyFilename");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___GetScreenshotPropertyType, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyType");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___HookScreenshot, "OVR.OpenVR", "IVRScreenshots/_HookScreenshot");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___RequestScreenshot, "OVR.OpenVR", "IVRScreenshots/_RequestScreenshot");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___SubmitScreenshot, "OVR.OpenVR", "IVRScreenshots/_SubmitScreenshot");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___TakeStereoScreenshot, "OVR.OpenVR", "IVRScreenshots/_TakeStereoScreenshot");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRScreenshots___UpdateScreenshotProgress, "OVR.OpenVR", "IVRScreenshots/_UpdateScreenshotProgress");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots, "OVR.OpenVR", "IVRScreenshots");
