#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___AreBoundsVisible;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___ForceBoundsVisible;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___GetBoundsColor;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___GetCalibrationState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___GetPlayAreaRect;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___GetPlayAreaSize;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___ReloadInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRChaperone___SetSceneColor;
}
namespace OVR::OpenVR {
struct IVRChaperone;
}
// Type: ::_GetCalibrationState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9097))
// CS Name: OVR.OpenVR.IVRChaperone::_GetCalibrationState
class CORDL_TYPE OVR__OpenVR__IVRChaperone___GetCalibrationState : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___GetCalibrationState() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetCalibrationState", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetCalibrationState(OVR__OpenVR__IVRChaperone___GetCalibrationState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetCalibrationState", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetCalibrationState(OVR__OpenVR__IVRChaperone___GetCalibrationState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___GetCalibrationState(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___GetCalibrationState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetCalibrationState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetCalibrationState& operator=(OVR__OpenVR__IVRChaperone___GetCalibrationState&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___GetCalibrationState& operator=(OVR__OpenVR__IVRChaperone___GetCalibrationState const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___GetCalibrationState(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ae88 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264af44 size 0x14 virtual true final false
 OVR::OpenVR::ChaperoneCalibrationState Invoke() ;

/// @brief Method BeginInvoke addr 0x264af58 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264af78 size 0x28 virtual true final false
 OVR::OpenVR::ChaperoneCalibrationState EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetPlayAreaSize
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9098))
// CS Name: OVR.OpenVR.IVRChaperone::_GetPlayAreaSize
class CORDL_TYPE OVR__OpenVR__IVRChaperone___GetPlayAreaSize : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___GetPlayAreaSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetPlayAreaSize", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaSize(OVR__OpenVR__IVRChaperone___GetPlayAreaSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetPlayAreaSize", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaSize(OVR__OpenVR__IVRChaperone___GetPlayAreaSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___GetPlayAreaSize(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaSize& operator=(OVR__OpenVR__IVRChaperone___GetPlayAreaSize&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaSize& operator=(OVR__OpenVR__IVRChaperone___GetPlayAreaSize const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___GetPlayAreaSize(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264afa0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b078 size 0x14 virtual true final false
 bool Invoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ) ;

/// @brief Method BeginInvoke addr 0x264b08c size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b130 size 0x34 virtual true final false
 bool EndInvoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetPlayAreaRect
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9099))
// CS Name: OVR.OpenVR.IVRChaperone::_GetPlayAreaRect
class CORDL_TYPE OVR__OpenVR__IVRChaperone___GetPlayAreaRect : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___GetPlayAreaRect() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetPlayAreaRect", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaRect(OVR__OpenVR__IVRChaperone___GetPlayAreaRect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetPlayAreaRect", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaRect(OVR__OpenVR__IVRChaperone___GetPlayAreaRect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___GetPlayAreaRect(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaRect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaRect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaRect& operator=(OVR__OpenVR__IVRChaperone___GetPlayAreaRect&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___GetPlayAreaRect& operator=(OVR__OpenVR__IVRChaperone___GetPlayAreaRect const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___GetPlayAreaRect(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264b164 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b238 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::HmdQuad_t> rect) ;

/// @brief Method BeginInvoke addr 0x264b24c size 0x8c virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdQuad_t> rect, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b2d8 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::HmdQuad_t> rect, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReloadInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9100))
// CS Name: OVR.OpenVR.IVRChaperone::_ReloadInfo
class CORDL_TYPE OVR__OpenVR__IVRChaperone___ReloadInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___ReloadInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___ReloadInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___ReloadInfo(OVR__OpenVR__IVRChaperone___ReloadInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___ReloadInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___ReloadInfo(OVR__OpenVR__IVRChaperone___ReloadInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___ReloadInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___ReloadInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___ReloadInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___ReloadInfo& operator=(OVR__OpenVR__IVRChaperone___ReloadInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___ReloadInfo& operator=(OVR__OpenVR__IVRChaperone___ReloadInfo const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___ReloadInfo(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264b304 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b3c0 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264b3d4 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b3f4 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetSceneColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9101))
// CS Name: OVR.OpenVR.IVRChaperone::_SetSceneColor
class CORDL_TYPE OVR__OpenVR__IVRChaperone___SetSceneColor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___SetSceneColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___SetSceneColor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___SetSceneColor(OVR__OpenVR__IVRChaperone___SetSceneColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___SetSceneColor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___SetSceneColor(OVR__OpenVR__IVRChaperone___SetSceneColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___SetSceneColor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___SetSceneColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___SetSceneColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___SetSceneColor& operator=(OVR__OpenVR__IVRChaperone___SetSceneColor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___SetSceneColor& operator=(OVR__OpenVR__IVRChaperone___SetSceneColor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___SetSceneColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264b400 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b4c4 size 0x14 virtual true final false
 void Invoke(OVR::OpenVR::HmdColor_t color) ;

/// @brief Method BeginInvoke addr 0x264b4d8 size 0x88 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::HmdColor_t color, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b560 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetBoundsColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9102))
// CS Name: OVR.OpenVR.IVRChaperone::_GetBoundsColor
class CORDL_TYPE OVR__OpenVR__IVRChaperone___GetBoundsColor : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___GetBoundsColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetBoundsColor", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetBoundsColor(OVR__OpenVR__IVRChaperone___GetBoundsColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___GetBoundsColor", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___GetBoundsColor(OVR__OpenVR__IVRChaperone___GetBoundsColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___GetBoundsColor(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___GetBoundsColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetBoundsColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___GetBoundsColor& operator=(OVR__OpenVR__IVRChaperone___GetBoundsColor&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___GetBoundsColor& operator=(OVR__OpenVR__IVRChaperone___GetBoundsColor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___GetBoundsColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264b56c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b644 size 0x14 virtual true final false
 void Invoke(ByRef<OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance, ByRef<OVR::OpenVR::HmdColor_t> pOutputCameraColor) ;

/// @brief Method BeginInvoke addr 0x264b658 size 0x104 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance, ByRef<OVR::OpenVR::HmdColor_t> pOutputCameraColor, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b75c size 0x24 virtual true final false
 void EndInvoke(ByRef<OVR::OpenVR::HmdColor_t> pOutputColorArray, ByRef<OVR::OpenVR::HmdColor_t> pOutputCameraColor, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_AreBoundsVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9103))
// CS Name: OVR.OpenVR.IVRChaperone::_AreBoundsVisible
class CORDL_TYPE OVR__OpenVR__IVRChaperone___AreBoundsVisible : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___AreBoundsVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___AreBoundsVisible", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___AreBoundsVisible(OVR__OpenVR__IVRChaperone___AreBoundsVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___AreBoundsVisible", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___AreBoundsVisible(OVR__OpenVR__IVRChaperone___AreBoundsVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___AreBoundsVisible(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___AreBoundsVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___AreBoundsVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___AreBoundsVisible& operator=(OVR__OpenVR__IVRChaperone___AreBoundsVisible&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___AreBoundsVisible& operator=(OVR__OpenVR__IVRChaperone___AreBoundsVisible const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___AreBoundsVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264b780 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b83c size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x264b850 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b870 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ForceBoundsVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9104))
// CS Name: OVR.OpenVR.IVRChaperone::_ForceBoundsVisible
class CORDL_TYPE OVR__OpenVR__IVRChaperone___ForceBoundsVisible : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRChaperone___ForceBoundsVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___ForceBoundsVisible", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___ForceBoundsVisible(OVR__OpenVR__IVRChaperone___ForceBoundsVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRChaperone___ForceBoundsVisible", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRChaperone___ForceBoundsVisible(OVR__OpenVR__IVRChaperone___ForceBoundsVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRChaperone___ForceBoundsVisible(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRChaperone___ForceBoundsVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___ForceBoundsVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRChaperone___ForceBoundsVisible& operator=(OVR__OpenVR__IVRChaperone___ForceBoundsVisible&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRChaperone___ForceBoundsVisible& operator=(OVR__OpenVR__IVRChaperone___ForceBoundsVisible const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__IVRChaperone___ForceBoundsVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264b898 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264b95c size 0x18 virtual true final false
 void Invoke(bool bForce) ;

/// @brief Method BeginInvoke addr 0x264b974 size 0x88 virtual true final false
 System::IAsyncResult BeginInvoke(bool bForce, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264b9fc size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRChaperone
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9105))
// CS Name: OVR.OpenVR.IVRChaperone
struct CORDL_TYPE IVRChaperone : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ForceBoundsVisible = OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible;

using _AreBoundsVisible = OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible;

using _GetBoundsColor = OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor;

using _SetSceneColor = OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor;

using _ReloadInfo = OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo;

using _GetPlayAreaRect = OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect;

using _GetPlayAreaSize = OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize;

using _GetCalibrationState = OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState;

// Ctor Parameters [CppParam { name: "GetCalibrationState", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState", modifiers: "", def_value: None }, CppParam { name: "GetPlayAreaSize", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize", modifiers: "", def_value: None }, CppParam { name: "GetPlayAreaRect", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect", modifiers: "", def_value: None }, CppParam { name: "ReloadInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo", modifiers: "", def_value: None }, CppParam { name: "SetSceneColor", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor", modifiers: "", def_value: None }, CppParam { name: "GetBoundsColor", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor", modifiers: "", def_value: None }, CppParam { name: "AreBoundsVisible", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible", modifiers: "", def_value: None }, CppParam { name: "ForceBoundsVisible", ty: "OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible", modifiers: "", def_value: None }]
constexpr IVRChaperone(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState GetCalibrationState, OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize GetPlayAreaSize, OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect GetPlayAreaRect, OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo ReloadInfo, OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor SetSceneColor, OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor GetBoundsColor, OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible AreBoundsVisible, OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible ForceBoundsVisible) noexcept;


                    constexpr IVRChaperone(IVRChaperone const&) = default;
                    constexpr IVRChaperone(IVRChaperone&&) = default;
                    constexpr IVRChaperone& operator=(IVRChaperone const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRChaperone& operator=(IVRChaperone&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRChaperone(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState __declspec(property(get=__get_GetCalibrationState, put=__set_GetCalibrationState))  GetCalibrationState;

constexpr void __set_GetCalibrationState(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState __get_GetCalibrationState() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize __declspec(property(get=__get_GetPlayAreaSize, put=__set_GetPlayAreaSize))  GetPlayAreaSize;

constexpr void __set_GetPlayAreaSize(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize __get_GetPlayAreaSize() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect __declspec(property(get=__get_GetPlayAreaRect, put=__set_GetPlayAreaRect))  GetPlayAreaRect;

constexpr void __set_GetPlayAreaRect(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect __get_GetPlayAreaRect() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo __declspec(property(get=__get_ReloadInfo, put=__set_ReloadInfo))  ReloadInfo;

constexpr void __set_ReloadInfo(OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo __get_ReloadInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor __declspec(property(get=__get_SetSceneColor, put=__set_SetSceneColor))  SetSceneColor;

constexpr void __set_SetSceneColor(OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor __get_SetSceneColor() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor __declspec(property(get=__get_GetBoundsColor, put=__set_GetBoundsColor))  GetBoundsColor;

constexpr void __set_GetBoundsColor(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor __get_GetBoundsColor() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible __declspec(property(get=__get_AreBoundsVisible, put=__set_AreBoundsVisible))  AreBoundsVisible;

constexpr void __set_AreBoundsVisible(OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible __get_AreBoundsVisible() const;

 OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible __declspec(property(get=__get_ForceBoundsVisible, put=__set_ForceBoundsVisible))  ForceBoundsVisible;

constexpr void __set_ForceBoundsVisible(OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible __get_ForceBoundsVisible() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___AreBoundsVisible, "OVR.OpenVR", "IVRChaperone/_AreBoundsVisible");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___ForceBoundsVisible, "OVR.OpenVR", "IVRChaperone/_ForceBoundsVisible");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetBoundsColor, "OVR.OpenVR", "IVRChaperone/_GetBoundsColor");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetCalibrationState, "OVR.OpenVR", "IVRChaperone/_GetCalibrationState");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaRect, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaRect");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___GetPlayAreaSize, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaSize");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___ReloadInfo, "OVR.OpenVR", "IVRChaperone/_ReloadInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRChaperone___SetSceneColor, "OVR.OpenVR", "IVRChaperone/_SetSceneColor");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone, "OVR.OpenVR", "IVRChaperone");
