#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraProjection;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___HasCamera;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetCameraProjection;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___HasCamera;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService;
}
namespace OVR::OpenVR {
struct IVRTrackedCamera;
}
// Type: ::_GetCameraErrorNameFromEnum
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9052))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetCameraErrorNameFromEnum
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum(OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum(OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646a1c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646ae0 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(OVR::OpenVR::EVRTrackedCameraError eCameraError) ;

/// @brief Method BeginInvoke addr 0x2646af4 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::EVRTrackedCameraError eCameraError, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646b78 size 0x28 virtual true final false
 ::cordl_internals::intptr_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_HasCamera
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9053))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_HasCamera
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___HasCamera : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___HasCamera() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___HasCamera", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___HasCamera(OVR__OpenVR__IVRTrackedCamera___HasCamera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___HasCamera", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___HasCamera(OVR__OpenVR__IVRTrackedCamera___HasCamera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___HasCamera(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___HasCamera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___HasCamera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___HasCamera& operator=(OVR__OpenVR__IVRTrackedCamera___HasCamera&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___HasCamera& operator=(OVR__OpenVR__IVRTrackedCamera___HasCamera const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646ba0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646c64 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ByRef<bool> pHasCamera) ;

/// @brief Method BeginInvoke addr 0x2646c78 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t nDeviceIndex, ByRef<bool> pHasCamera, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646d30 size 0x2c virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<bool> pHasCamera, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCameraFrameSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9054))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetCameraFrameSize
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize(OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize(OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646d5c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2646e20 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ByRef<uint32_t> pnFrameBufferSize) ;

/// @brief Method BeginInvoke addr 0x2646e34 size 0x104 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ByRef<uint32_t> pnFrameBufferSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2646f38 size 0x34 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ByRef<uint32_t> pnFrameBufferSize, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCameraIntrinsics
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9055))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetCameraIntrinsics
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics(OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics(OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2646f6c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2647030 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<OVR::OpenVR::HmdVector2_t> pCenter) ;

/// @brief Method BeginInvoke addr 0x2647044 size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<OVR::OpenVR::HmdVector2_t> pCenter, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647144 size 0x34 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<OVR::OpenVR::HmdVector2_t> pCenter, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCameraProjection
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9056))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetCameraProjection
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetCameraProjection : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetCameraProjection() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraProjection", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraProjection(OVR__OpenVR__IVRTrackedCamera___GetCameraProjection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetCameraProjection", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraProjection(OVR__OpenVR__IVRTrackedCamera___GetCameraProjection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetCameraProjection(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraProjection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraProjection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraProjection& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraProjection&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetCameraProjection& operator=(OVR__OpenVR__IVRTrackedCamera___GetCameraProjection const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2647178 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264723c size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar, ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection) ;

/// @brief Method BeginInvoke addr 0x2647250 size 0x128 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar, ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647378 size 0x2c virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_AcquireVideoStreamingService
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9057))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_AcquireVideoStreamingService
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService(OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService(OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService& operator=(OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService& operator=(OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26473a4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2647468 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle) ;

/// @brief Method BeginInvoke addr 0x264747c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647534 size 0x2c virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint64_t> pHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReleaseVideoStreamingService
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9058))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_ReleaseVideoStreamingService
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService& operator=(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService& operator=(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2647560 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2647624 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera) ;

/// @brief Method BeginInvoke addr 0x2647638 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t hTrackedCamera, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26476bc size 0x28 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamFrameBuffer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9059))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetVideoStreamFrameBuffer
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26476e4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26477a8 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pFrameBuffer, uint32_t nFrameBufferSize, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) ;

/// @brief Method BeginInvoke addr 0x26477bc size 0x15c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pFrameBuffer, uint32_t nFrameBufferSize, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647918 size 0x2c virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamTextureSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9060))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetVideoStreamTextureSize
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2647944 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2647a08 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method BeginInvoke addr 0x2647a1c size 0x120 virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647b3c size 0x34 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamTextureD3D11
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9061))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetVideoStreamTextureD3D11
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2647b70 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2647c34 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) ;

/// @brief Method BeginInvoke addr 0x2647c48 size 0x164 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647dac size 0x34 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetVideoStreamTextureGL
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9062))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_GetVideoStreamTextureGL
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL& operator=(OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2647de0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2647ea4 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) ;

/// @brief Method BeginInvoke addr 0x2647eb8 size 0x130 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2647fe8 size 0x34 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint32_t> pglTextureId, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReleaseVideoStreamTextureGL
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9063))
// CS Name: OVR.OpenVR.IVRTrackedCamera::_ReleaseVideoStreamTextureGL
class CORDL_TYPE OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL& operator=(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL& operator=(OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264801c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26480e0 size 0x14 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, uint32_t glTextureId) ;

/// @brief Method BeginInvoke addr 0x26480f4 size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t hTrackedCamera, uint32_t glTextureId, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26481a8 size 0x28 virtual true final false
 OVR::OpenVR::EVRTrackedCameraError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRTrackedCamera
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9064))
// CS Name: OVR.OpenVR.IVRTrackedCamera
struct CORDL_TYPE IVRTrackedCamera : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ReleaseVideoStreamTextureGL = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL;

using _GetVideoStreamTextureGL = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL;

using _GetVideoStreamTextureD3D11 = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11;

using _GetVideoStreamTextureSize = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize;

using _GetVideoStreamFrameBuffer = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer;

using _ReleaseVideoStreamingService = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService;

using _AcquireVideoStreamingService = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService;

using _GetCameraProjection = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection;

using _GetCameraIntrinsics = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics;

using _GetCameraFrameSize = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize;

using _HasCamera = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera;

using _GetCameraErrorNameFromEnum = OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum;

// Ctor Parameters [CppParam { name: "GetCameraErrorNameFromEnum", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum", modifiers: "", def_value: None }, CppParam { name: "HasCamera", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera", modifiers: "", def_value: None }, CppParam { name: "GetCameraFrameSize", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize", modifiers: "", def_value: None }, CppParam { name: "GetCameraIntrinsics", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics", modifiers: "", def_value: None }, CppParam { name: "GetCameraProjection", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection", modifiers: "", def_value: None }, CppParam { name: "AcquireVideoStreamingService", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamingService", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamFrameBuffer", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureSize", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureD3D11", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11", modifiers: "", def_value: None }, CppParam { name: "GetVideoStreamTextureGL", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL", modifiers: "", def_value: None }, CppParam { name: "ReleaseVideoStreamTextureGL", ty: "OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL", modifiers: "", def_value: None }]
constexpr IVRTrackedCamera(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum GetCameraErrorNameFromEnum, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera HasCamera, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize GetCameraFrameSize, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics GetCameraIntrinsics, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection GetCameraProjection, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService AcquireVideoStreamingService, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService ReleaseVideoStreamingService, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer GetVideoStreamFrameBuffer, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize GetVideoStreamTextureSize, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 GetVideoStreamTextureD3D11, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL GetVideoStreamTextureGL, OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL ReleaseVideoStreamTextureGL) noexcept;


                    constexpr IVRTrackedCamera(IVRTrackedCamera const&) = default;
                    constexpr IVRTrackedCamera(IVRTrackedCamera&&) = default;
                    constexpr IVRTrackedCamera& operator=(IVRTrackedCamera const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRTrackedCamera& operator=(IVRTrackedCamera&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRTrackedCamera(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum __declspec(property(get=__get_GetCameraErrorNameFromEnum, put=__set_GetCameraErrorNameFromEnum))  GetCameraErrorNameFromEnum;

constexpr void __set_GetCameraErrorNameFromEnum(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum __get_GetCameraErrorNameFromEnum() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera __declspec(property(get=__get_HasCamera, put=__set_HasCamera))  HasCamera;

constexpr void __set_HasCamera(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera __get_HasCamera() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize __declspec(property(get=__get_GetCameraFrameSize, put=__set_GetCameraFrameSize))  GetCameraFrameSize;

constexpr void __set_GetCameraFrameSize(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize __get_GetCameraFrameSize() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics __declspec(property(get=__get_GetCameraIntrinsics, put=__set_GetCameraIntrinsics))  GetCameraIntrinsics;

constexpr void __set_GetCameraIntrinsics(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics __get_GetCameraIntrinsics() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection __declspec(property(get=__get_GetCameraProjection, put=__set_GetCameraProjection))  GetCameraProjection;

constexpr void __set_GetCameraProjection(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection __get_GetCameraProjection() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService __declspec(property(get=__get_AcquireVideoStreamingService, put=__set_AcquireVideoStreamingService))  AcquireVideoStreamingService;

constexpr void __set_AcquireVideoStreamingService(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService __get_AcquireVideoStreamingService() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService __declspec(property(get=__get_ReleaseVideoStreamingService, put=__set_ReleaseVideoStreamingService))  ReleaseVideoStreamingService;

constexpr void __set_ReleaseVideoStreamingService(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService __get_ReleaseVideoStreamingService() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer __declspec(property(get=__get_GetVideoStreamFrameBuffer, put=__set_GetVideoStreamFrameBuffer))  GetVideoStreamFrameBuffer;

constexpr void __set_GetVideoStreamFrameBuffer(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer __get_GetVideoStreamFrameBuffer() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize __declspec(property(get=__get_GetVideoStreamTextureSize, put=__set_GetVideoStreamTextureSize))  GetVideoStreamTextureSize;

constexpr void __set_GetVideoStreamTextureSize(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize __get_GetVideoStreamTextureSize() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 __declspec(property(get=__get_GetVideoStreamTextureD3D11, put=__set_GetVideoStreamTextureD3D11))  GetVideoStreamTextureD3D11;

constexpr void __set_GetVideoStreamTextureD3D11(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11 __get_GetVideoStreamTextureD3D11() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL __declspec(property(get=__get_GetVideoStreamTextureGL, put=__set_GetVideoStreamTextureGL))  GetVideoStreamTextureGL;

constexpr void __set_GetVideoStreamTextureGL(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL __get_GetVideoStreamTextureGL() const;

 OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL __declspec(property(get=__get_ReleaseVideoStreamTextureGL, put=__set_ReleaseVideoStreamTextureGL))  ReleaseVideoStreamTextureGL;

constexpr void __set_ReleaseVideoStreamTextureGL(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL __get_ReleaseVideoStreamTextureGL() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___AcquireVideoStreamingService, "OVR.OpenVR", "IVRTrackedCamera/_AcquireVideoStreamingService");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraErrorNameFromEnum, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraErrorNameFromEnum");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraFrameSize, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraFrameSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraIntrinsics, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraIntrinsics");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetCameraProjection, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraProjection");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamFrameBuffer, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamFrameBuffer");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureD3D11, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureD3D11");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureGL, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___GetVideoStreamTextureSize, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___HasCamera, "OVR.OpenVR", "IVRTrackedCamera/_HasCamera");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamTextureGL, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamTextureGL");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRTrackedCamera___ReleaseVideoStreamingService, "OVR.OpenVR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera, "OVR.OpenVR", "IVRTrackedCamera");
