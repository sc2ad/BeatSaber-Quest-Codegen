#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRRenderModels;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRRenderModels___GetComponentState;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRRenderModels;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVRRenderModels___GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRRenderModels__GetComponentStateUnion;
}
// Type: ::_GetComponentStatePacked
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9351))
// CS Name: OVR.OpenVR.CVRRenderModels::_GetComponentStatePacked
class CORDL_TYPE OVR__OpenVR__CVRRenderModels___GetComponentStatePacked : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__CVRRenderModels___GetComponentStatePacked() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRRenderModels___GetComponentStatePacked", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__CVRRenderModels___GetComponentStatePacked(OVR__OpenVR__CVRRenderModels___GetComponentStatePacked const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRRenderModels___GetComponentStatePacked", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__CVRRenderModels___GetComponentStatePacked(OVR__OpenVR__CVRRenderModels___GetComponentStatePacked&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRRenderModels___GetComponentStatePacked(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__CVRRenderModels___GetComponentStatePacked& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__CVRRenderModels___GetComponentStatePacked& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__CVRRenderModels___GetComponentStatePacked& operator=(OVR__OpenVR__CVRRenderModels___GetComponentStatePacked&& o) noexcept = default;
  constexpr OVR__OpenVR__CVRRenderModels___GetComponentStatePacked& operator=(OVR__OpenVR__CVRRenderModels___GetComponentStatePacked const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit OVR__OpenVR__CVRRenderModels___GetComponentStatePacked(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2667654 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x266772c size 0x14 virtual true final false
 bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) ;

/// @brief Method BeginInvoke addr 0x2667740 size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2667840 size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::GetComponentStateUnion
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9352))
// CS Name: OVR.OpenVR.CVRRenderModels::GetComponentStateUnion
struct CORDL_TYPE OVR__OpenVR__CVRRenderModels__GetComponentStateUnion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pGetComponentState", ty: "OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState", modifiers: "", def_value: None }, CppParam { name: "pGetComponentStatePacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked", modifiers: "", def_value: None }]
constexpr OVR__OpenVR__CVRRenderModels__GetComponentStateUnion(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState pGetComponentState, OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked pGetComponentStatePacked) noexcept;


                    constexpr OVR__OpenVR__CVRRenderModels__GetComponentStateUnion(OVR__OpenVR__CVRRenderModels__GetComponentStateUnion const&) = default;
                    constexpr OVR__OpenVR__CVRRenderModels__GetComponentStateUnion(OVR__OpenVR__CVRRenderModels__GetComponentStateUnion&&) = default;
                    constexpr OVR__OpenVR__CVRRenderModels__GetComponentStateUnion& operator=(OVR__OpenVR__CVRRenderModels__GetComponentStateUnion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVR__OpenVR__CVRRenderModels__GetComponentStateUnion& operator=(OVR__OpenVR__CVRRenderModels__GetComponentStateUnion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRRenderModels__GetComponentStateUnion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState __declspec(property(get=__get_pGetComponentState, put=__set_pGetComponentState))  pGetComponentState;

constexpr void __set_pGetComponentState(OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRRenderModels___GetComponentState __get_pGetComponentState() const;

 OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked __declspec(property(get=__get_pGetComponentStatePacked, put=__set_pGetComponentStatePacked))  pGetComponentStatePacked;

constexpr void __set_pGetComponentStatePacked(OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked value) ;

constexpr OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked __get_pGetComponentStatePacked() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::CVRRenderModels
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9353))
// CS Name: OVR.OpenVR.CVRRenderModels
class CORDL_TYPE CVRRenderModels : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GetComponentStateUnion = OVR::OpenVR::OVR__OpenVR__CVRRenderModels__GetComponentStateUnion;

using _GetComponentStatePacked = OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~CVRRenderModels() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: " const&", def_value: None }]
constexpr CVRRenderModels(CVRRenderModels const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "&&", def_value: None }]
constexpr CVRRenderModels(CVRRenderModels&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRRenderModels(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRRenderModels& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRRenderModels& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRRenderModels& operator=(CVRRenderModels&& o) noexcept = default;
  constexpr CVRRenderModels& operator=(CVRRenderModels const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRRenderModels __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRRenderModels value) ;

constexpr OVR::OpenVR::IVRRenderModels __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRRenderModels(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2667120 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method LoadRenderModel_Async addr 0x2667234 size 0x24 virtual false final false
 OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::StringW pchRenderModelName, ByRef<::cordl_internals::intptr_t> ppRenderModel) ;

/// @brief Method FreeRenderModel addr 0x2667258 size 0x24 virtual false final false
 void FreeRenderModel(::cordl_internals::intptr_t pRenderModel) ;

/// @brief Method LoadTexture_Async addr 0x266727c size 0x24 virtual false final false
 OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int32_t textureId, ByRef<::cordl_internals::intptr_t> ppTexture) ;

/// @brief Method FreeTexture addr 0x26672a0 size 0x24 virtual false final false
 void FreeTexture(::cordl_internals::intptr_t pTexture) ;

/// @brief Method LoadTextureD3D11_Async addr 0x26672c4 size 0x24 virtual false final false
 OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int32_t textureId, ::cordl_internals::intptr_t pD3D11Device, ByRef<::cordl_internals::intptr_t> ppD3D11Texture2D) ;

/// @brief Method LoadIntoTextureD3D11_Async addr 0x26672e8 size 0x24 virtual false final false
 OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int32_t textureId, ::cordl_internals::intptr_t pDstTexture) ;

/// @brief Method FreeTextureD3D11 addr 0x266730c size 0x24 virtual false final false
 void FreeTextureD3D11(::cordl_internals::intptr_t pD3D11Texture2D) ;

/// @brief Method GetRenderModelName addr 0x2667330 size 0x24 virtual false final false
 uint32_t GetRenderModelName(uint32_t unRenderModelIndex, System::Text::StringBuilder pchRenderModelName, uint32_t unRenderModelNameLen) ;

/// @brief Method GetRenderModelCount addr 0x2667354 size 0x24 virtual false final false
 uint32_t GetRenderModelCount() ;

/// @brief Method GetComponentCount addr 0x2667378 size 0x24 virtual false final false
 uint32_t GetComponentCount(::StringW pchRenderModelName) ;

/// @brief Method GetComponentName addr 0x266739c size 0x24 virtual false final false
 uint32_t GetComponentName(::StringW pchRenderModelName, uint32_t unComponentIndex, System::Text::StringBuilder pchComponentName, uint32_t unComponentNameLen) ;

/// @brief Method GetComponentButtonMask addr 0x26673c0 size 0x24 virtual false final false
 uint64_t GetComponentButtonMask(::StringW pchRenderModelName, ::StringW pchComponentName) ;

/// @brief Method GetComponentRenderModelName addr 0x26673e4 size 0x24 virtual false final false
 uint32_t GetComponentRenderModelName(::StringW pchRenderModelName, ::StringW pchComponentName, System::Text::StringBuilder pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen) ;

/// @brief Method GetComponentStateForDevicePath addr 0x2667408 size 0x24 virtual false final false
 bool GetComponentStateForDevicePath(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) ;

/// @brief Method GetComponentState addr 0x266742c size 0x138 virtual false final false
 bool GetComponentState(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) ;

/// @brief Method RenderModelHasComponent addr 0x2667564 size 0x24 virtual false final false
 bool RenderModelHasComponent(::StringW pchRenderModelName, ::StringW pchComponentName) ;

/// @brief Method GetRenderModelThumbnailURL addr 0x2667588 size 0x24 virtual false final false
 uint32_t GetRenderModelThumbnailURL(::StringW pchRenderModelName, System::Text::StringBuilder pchThumbnailURL, uint32_t unThumbnailURLLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError) ;

/// @brief Method GetRenderModelOriginalPath addr 0x26675ac size 0x24 virtual false final false
 uint32_t GetRenderModelOriginalPath(::StringW pchRenderModelName, System::Text::StringBuilder pchOriginalPath, uint32_t unOriginalPathLen, ByRef<OVR::OpenVR::EVRRenderModelError> peError) ;

/// @brief Method GetRenderModelErrorNameFromEnum addr 0x26675d0 size 0x84 virtual false final false
 ::StringW GetRenderModelErrorNameFromEnum(OVR::OpenVR::EVRRenderModelError error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRRenderModels);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRRenderModels, "OVR.OpenVR", "CVRRenderModels");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRRenderModels___GetComponentStatePacked, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRRenderModels__GetComponentStateUnion, "OVR.OpenVR", "CVRRenderModels/GetComponentStateUnion");
