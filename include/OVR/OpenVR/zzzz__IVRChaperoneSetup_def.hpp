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
namespace OVR::OpenVR {
struct EChaperoneConfigFile;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
struct IVRChaperoneSetup;
}
// Type: ::_CommitWorkingCopy
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9106))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_CommitWorkingCopy
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy(OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy(OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy& operator=(OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy& operator=(OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ba08 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264bacc size 0x14 virtual true final false
 bool Invoke(OVR::OpenVR::EChaperoneConfigFile configFile) ;

/// @brief Method BeginInvoke addr 0x264bae0 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EChaperoneConfigFile configFile, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264bb64 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_RevertWorkingCopy
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9107))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_RevertWorkingCopy
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy(OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy(OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy& operator=(OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy& operator=(OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264bb8c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264bc48 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264bc5c size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264bc7c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetWorkingPlayAreaSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9108))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetWorkingPlayAreaSize
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264bc88 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264bd60 size 0x14 virtual true final false
 bool Invoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ) ;

/// @brief Method BeginInvoke addr 0x264bd74 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264be18 size 0x34 virtual true final false
 bool EndInvoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetWorkingPlayAreaRect
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9109))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetWorkingPlayAreaRect
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264be4c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264bf20 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::HmdQuad_t> rect) ;

/// @brief Method BeginInvoke addr 0x264bf34 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdQuad_t> rect, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264bfc0 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::HmdQuad_t> rect, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetWorkingCollisionBoundsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9110))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetWorkingCollisionBoundsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264bfec size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264c0c4 size 0x14 virtual true final false
 bool Invoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount) ;

/// @brief Method BeginInvoke addr 0x264c0d8 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264c16c size 0x2c virtual true final false
 bool EndInvoke(ByRef<uint32_t> punQuadsCount, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLiveCollisionBoundsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9111))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetLiveCollisionBoundsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264c198 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264c270 size 0x14 virtual true final false
 bool Invoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount) ;

/// @brief Method BeginInvoke addr 0x264c284 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264c318 size 0x2c virtual true final false
 bool EndInvoke(ByRef<uint32_t> punQuadsCount, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetWorkingSeatedZeroPoseToRawTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9112))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264c344 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264c418 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) ;

/// @brief Method BeginInvoke addr 0x264c42c size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264c4b8 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetWorkingStandingZeroPoseToRawTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9113))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264c4e4 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264c5b8 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose) ;

/// @brief Method BeginInvoke addr 0x264c5cc size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264c658 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetWorkingPlayAreaSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9114))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_SetWorkingPlayAreaSize
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264c684 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264c748 size 0x14 virtual true final false
 void Invoke(float_t sizeX, float_t sizeZ) ;

/// @brief Method BeginInvoke addr 0x264c75c size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(float_t sizeX, float_t sizeZ, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264c7f4 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetWorkingCollisionBoundsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9115))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264c800 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264c8d8 size 0x14 virtual true final false
 void Invoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount) ;

/// @brief Method BeginInvoke addr 0x264c8ec size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264c980 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetWorkingSeatedZeroPoseToRawTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9116))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264c98c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264ca60 size 0x14 virtual true final false
 void Invoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose) ;

/// @brief Method BeginInvoke addr 0x264ca74 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264cb00 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetWorkingStandingZeroPoseToRawTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9117))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_SetWorkingStandingZeroPoseToRawTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264cb1c size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264cbf0 size 0x14 virtual true final false
 void Invoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose) ;

/// @brief Method BeginInvoke addr 0x264cc04 size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264cc90 size 0x1c virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReloadFromDisk
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9118))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_ReloadFromDisk
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk(OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk(OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk& operator=(OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk& operator=(OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ccac size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264cd70 size 0x14 virtual true final false
 void Invoke(OVR::OpenVR::EChaperoneConfigFile configFile) ;

/// @brief Method BeginInvoke addr 0x264cd84 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EChaperoneConfigFile configFile, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ce08 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLiveSeatedZeroPoseToRawTrackingPose
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9119))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose(OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ce14 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264cee8 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) ;

/// @brief Method BeginInvoke addr 0x264cefc size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264cf88 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetWorkingCollisionBoundsTagsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9120))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264cfb4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264d08c size 0x14 virtual true final false
 void Invoke(ByRef<::ArrayW<uint8_t>> pTagsBuffer, uint32_t unTagCount) ;

/// @brief Method BeginInvoke addr 0x264d0a0 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<uint8_t>> pTagsBuffer, uint32_t unTagCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264d134 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLiveCollisionBoundsTagsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9121))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264d140 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264d218 size 0x14 virtual true final false
 bool Invoke(ByRef<::ArrayW<uint8_t>> pTagsBuffer, ByRef<uint32_t> punTagCount) ;

/// @brief Method BeginInvoke addr 0x264d22c size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<uint8_t>> pTagsBuffer, ByRef<uint32_t> punTagCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264d2c0 size 0x2c virtual true final false
 bool EndInvoke(ByRef<uint32_t> punTagCount, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetWorkingPhysicalBoundsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9122))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264d2ec size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264d3c4 size 0x14 virtual true final false
 bool Invoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount) ;

/// @brief Method BeginInvoke addr 0x264d3d8 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264d46c size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLivePhysicalBoundsInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9123))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_GetLivePhysicalBoundsInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo(OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo& operator=(OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264d494 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264d56c size 0x14 virtual true final false
 bool Invoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount) ;

/// @brief Method BeginInvoke addr 0x264d580 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264d614 size 0x2c virtual true final false
 bool EndInvoke(ByRef<uint32_t> punQuadsCount, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ExportLiveToBuffer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9124))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_ExportLiveToBuffer
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer(OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer(OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer& operator=(OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer& operator=(OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264d640 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264d718 size 0x14 virtual true final false
 bool Invoke(System::Text::StringBuilder pBuffer, ByRef<uint32_t> pnBufferLength) ;

/// @brief Method BeginInvoke addr 0x264d72c size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(System::Text::StringBuilder pBuffer, ByRef<uint32_t> pnBufferLength, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264d7c0 size 0x2c virtual true final false
 bool EndInvoke(ByRef<uint32_t> pnBufferLength, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ImportFromBufferToWorking
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9125))
// CS Name: OVR.OpenVR.IVRChaperoneSetup::_ImportFromBufferToWorking
class CORDL_TYPE OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking(OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking(OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking& operator=(OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking& operator=(OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264d7ec size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264d8c4 size 0x14 virtual true final false
 bool Invoke(::StringW pBuffer, uint32_t nImportFlags) ;

/// @brief Method BeginInvoke addr 0x264d8d8 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pBuffer, uint32_t nImportFlags, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264d96c size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRChaperoneSetup
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9126))
// CS Name: OVR.OpenVR.IVRChaperoneSetup
struct CORDL_TYPE IVRChaperoneSetup : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ImportFromBufferToWorking = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking;

using _ExportLiveToBuffer = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer;

using _GetLivePhysicalBoundsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo;

using _SetWorkingPhysicalBoundsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo;

using _GetLiveCollisionBoundsTagsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo;

using _SetWorkingCollisionBoundsTagsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo;

using _GetLiveSeatedZeroPoseToRawTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose;

using _ReloadFromDisk = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk;

using _SetWorkingStandingZeroPoseToRawTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose;

using _SetWorkingSeatedZeroPoseToRawTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose;

using _SetWorkingCollisionBoundsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo;

using _SetWorkingPlayAreaSize = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize;

using _GetWorkingStandingZeroPoseToRawTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose;

using _GetWorkingSeatedZeroPoseToRawTrackingPose = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose;

using _GetLiveCollisionBoundsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo;

using _GetWorkingCollisionBoundsInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo;

using _GetWorkingPlayAreaRect = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect;

using _GetWorkingPlayAreaSize = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize;

using _RevertWorkingCopy = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy;

using _CommitWorkingCopy = OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy;

// Ctor Parameters [CppParam { name: "CommitWorkingCopy", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy", modifiers: "", def_value: None }, CppParam { name: "RevertWorkingCopy", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy", modifiers: "", def_value: None }, CppParam { name: "GetWorkingPlayAreaSize", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize", modifiers: "", def_value: None }, CppParam { name: "GetWorkingPlayAreaRect", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect", modifiers: "", def_value: None }, CppParam { name: "GetWorkingCollisionBoundsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo", modifiers: "", def_value: None }, CppParam { name: "GetLiveCollisionBoundsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo", modifiers: "", def_value: None }, CppParam { name: "GetWorkingSeatedZeroPoseToRawTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "", def_value: None }, CppParam { name: "GetWorkingStandingZeroPoseToRawTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "", def_value: None }, CppParam { name: "SetWorkingPlayAreaSize", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize", modifiers: "", def_value: None }, CppParam { name: "SetWorkingCollisionBoundsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo", modifiers: "", def_value: None }, CppParam { name: "SetWorkingSeatedZeroPoseToRawTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "", def_value: None }, CppParam { name: "SetWorkingStandingZeroPoseToRawTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "", def_value: None }, CppParam { name: "ReloadFromDisk", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk", modifiers: "", def_value: None }, CppParam { name: "GetLiveSeatedZeroPoseToRawTrackingPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: "", def_value: None }, CppParam { name: "SetWorkingCollisionBoundsTagsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo", modifiers: "", def_value: None }, CppParam { name: "GetLiveCollisionBoundsTagsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo", modifiers: "", def_value: None }, CppParam { name: "SetWorkingPhysicalBoundsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo", modifiers: "", def_value: None }, CppParam { name: "GetLivePhysicalBoundsInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo", modifiers: "", def_value: None }, CppParam { name: "ExportLiveToBuffer", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer", modifiers: "", def_value: None }, CppParam { name: "ImportFromBufferToWorking", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking", modifiers: "", def_value: None }]
constexpr IVRChaperoneSetup(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy CommitWorkingCopy, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy RevertWorkingCopy, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize GetWorkingPlayAreaSize, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect GetWorkingPlayAreaRect, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo GetWorkingCollisionBoundsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo GetLiveCollisionBoundsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose GetWorkingSeatedZeroPoseToRawTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose GetWorkingStandingZeroPoseToRawTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize SetWorkingPlayAreaSize, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo SetWorkingCollisionBoundsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose SetWorkingSeatedZeroPoseToRawTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose SetWorkingStandingZeroPoseToRawTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk ReloadFromDisk, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose GetLiveSeatedZeroPoseToRawTrackingPose, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo SetWorkingCollisionBoundsTagsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo GetLiveCollisionBoundsTagsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo SetWorkingPhysicalBoundsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo GetLivePhysicalBoundsInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer ExportLiveToBuffer, OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking ImportFromBufferToWorking) noexcept;


                    constexpr IVRChaperoneSetup(IVRChaperoneSetup const&) = default;
                    constexpr IVRChaperoneSetup(IVRChaperoneSetup&&) = default;
                    constexpr IVRChaperoneSetup& operator=(IVRChaperoneSetup const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRChaperoneSetup& operator=(IVRChaperoneSetup&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRChaperoneSetup(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy __declspec(property(get=__get_CommitWorkingCopy, put=__set_CommitWorkingCopy))  CommitWorkingCopy;

constexpr void __set_CommitWorkingCopy(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy __get_CommitWorkingCopy() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy __declspec(property(get=__get_RevertWorkingCopy, put=__set_RevertWorkingCopy))  RevertWorkingCopy;

constexpr void __set_RevertWorkingCopy(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy __get_RevertWorkingCopy() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize __declspec(property(get=__get_GetWorkingPlayAreaSize, put=__set_GetWorkingPlayAreaSize))  GetWorkingPlayAreaSize;

constexpr void __set_GetWorkingPlayAreaSize(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize __get_GetWorkingPlayAreaSize() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect __declspec(property(get=__get_GetWorkingPlayAreaRect, put=__set_GetWorkingPlayAreaRect))  GetWorkingPlayAreaRect;

constexpr void __set_GetWorkingPlayAreaRect(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect __get_GetWorkingPlayAreaRect() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo __declspec(property(get=__get_GetWorkingCollisionBoundsInfo, put=__set_GetWorkingCollisionBoundsInfo))  GetWorkingCollisionBoundsInfo;

constexpr void __set_GetWorkingCollisionBoundsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo __get_GetWorkingCollisionBoundsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo __declspec(property(get=__get_GetLiveCollisionBoundsInfo, put=__set_GetLiveCollisionBoundsInfo))  GetLiveCollisionBoundsInfo;

constexpr void __set_GetLiveCollisionBoundsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo __get_GetLiveCollisionBoundsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose __declspec(property(get=__get_GetWorkingSeatedZeroPoseToRawTrackingPose, put=__set_GetWorkingSeatedZeroPoseToRawTrackingPose))  GetWorkingSeatedZeroPoseToRawTrackingPose;

constexpr void __set_GetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose __get_GetWorkingSeatedZeroPoseToRawTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose __declspec(property(get=__get_GetWorkingStandingZeroPoseToRawTrackingPose, put=__set_GetWorkingStandingZeroPoseToRawTrackingPose))  GetWorkingStandingZeroPoseToRawTrackingPose;

constexpr void __set_GetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose __get_GetWorkingStandingZeroPoseToRawTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize __declspec(property(get=__get_SetWorkingPlayAreaSize, put=__set_SetWorkingPlayAreaSize))  SetWorkingPlayAreaSize;

constexpr void __set_SetWorkingPlayAreaSize(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize __get_SetWorkingPlayAreaSize() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo __declspec(property(get=__get_SetWorkingCollisionBoundsInfo, put=__set_SetWorkingCollisionBoundsInfo))  SetWorkingCollisionBoundsInfo;

constexpr void __set_SetWorkingCollisionBoundsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo __get_SetWorkingCollisionBoundsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose __declspec(property(get=__get_SetWorkingSeatedZeroPoseToRawTrackingPose, put=__set_SetWorkingSeatedZeroPoseToRawTrackingPose))  SetWorkingSeatedZeroPoseToRawTrackingPose;

constexpr void __set_SetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose __get_SetWorkingSeatedZeroPoseToRawTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose __declspec(property(get=__get_SetWorkingStandingZeroPoseToRawTrackingPose, put=__set_SetWorkingStandingZeroPoseToRawTrackingPose))  SetWorkingStandingZeroPoseToRawTrackingPose;

constexpr void __set_SetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose __get_SetWorkingStandingZeroPoseToRawTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk __declspec(property(get=__get_ReloadFromDisk, put=__set_ReloadFromDisk))  ReloadFromDisk;

constexpr void __set_ReloadFromDisk(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk __get_ReloadFromDisk() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose __declspec(property(get=__get_GetLiveSeatedZeroPoseToRawTrackingPose, put=__set_GetLiveSeatedZeroPoseToRawTrackingPose))  GetLiveSeatedZeroPoseToRawTrackingPose;

constexpr void __set_GetLiveSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose __get_GetLiveSeatedZeroPoseToRawTrackingPose() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo __declspec(property(get=__get_SetWorkingCollisionBoundsTagsInfo, put=__set_SetWorkingCollisionBoundsTagsInfo))  SetWorkingCollisionBoundsTagsInfo;

constexpr void __set_SetWorkingCollisionBoundsTagsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo __get_SetWorkingCollisionBoundsTagsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo __declspec(property(get=__get_GetLiveCollisionBoundsTagsInfo, put=__set_GetLiveCollisionBoundsTagsInfo))  GetLiveCollisionBoundsTagsInfo;

constexpr void __set_GetLiveCollisionBoundsTagsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo __get_GetLiveCollisionBoundsTagsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo __declspec(property(get=__get_SetWorkingPhysicalBoundsInfo, put=__set_SetWorkingPhysicalBoundsInfo))  SetWorkingPhysicalBoundsInfo;

constexpr void __set_SetWorkingPhysicalBoundsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo __get_SetWorkingPhysicalBoundsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo __declspec(property(get=__get_GetLivePhysicalBoundsInfo, put=__set_GetLivePhysicalBoundsInfo))  GetLivePhysicalBoundsInfo;

constexpr void __set_GetLivePhysicalBoundsInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo __get_GetLivePhysicalBoundsInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer __declspec(property(get=__get_ExportLiveToBuffer, put=__set_ExportLiveToBuffer))  ExportLiveToBuffer;

constexpr void __set_ExportLiveToBuffer(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer __get_ExportLiveToBuffer() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking __declspec(property(get=__get_ImportFromBufferToWorking, put=__set_ImportFromBufferToWorking))  ImportFromBufferToWorking;

constexpr void __set_ImportFromBufferToWorking(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking __get_ImportFromBufferToWorking() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___CommitWorkingCopy, "OVR.OpenVR", "IVRChaperoneSetup/_CommitWorkingCopy");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ExportLiveToBuffer, "OVR.OpenVR", "IVRChaperoneSetup/_ExportLiveToBuffer");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLivePhysicalBoundsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaRect, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingPlayAreaSize, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ImportFromBufferToWorking, "OVR.OpenVR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___ReloadFromDisk, "OVR.OpenVR", "IVRChaperoneSetup/_ReloadFromDisk");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___RevertWorkingCopy, "OVR.OpenVR", "IVRChaperoneSetup/_RevertWorkingCopy");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingPlayAreaSize, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup, "OVR.OpenVR", "IVRChaperoneSetup");
