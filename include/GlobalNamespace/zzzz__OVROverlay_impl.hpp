#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::GlobalNamespace__OVROverlay__OverlayShape(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::Quad{0};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::Cylinder{1};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::Cubemap{2};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::OffcenterCubemap{4};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::Equirect{5};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::ReconstructionPassthrough{7};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::SurfaceProjectedPassthrough{8};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::Fisheye{9};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::KeyboardHandsPassthrough{10};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape::KeyboardMaskedHandsPassthrough{11};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType::GlobalNamespace__OVROverlay__OverlayType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType::None{0};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType::Underlay{1};
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType  GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType::Overlay{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25d54e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::*)()>(&GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25d559c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25d55b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25d55d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 void GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "appTexture", ty: "UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "appTexturePtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "swapChain", ty: "::ArrayW<UnityEngine::Texture>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "swapChainPtr", ty: "::ArrayW<::cordl_internals::intptr_t>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::GlobalNamespace__OVROverlay__LayerTexture(UnityEngine::Texture appTexture, ::cordl_internals::intptr_t appTexturePtr, ::ArrayW<UnityEngine::Texture> swapChain, ::ArrayW<::cordl_internals::intptr_t> swapChainPtr) noexcept : ::bs_hook::ValueTypeWrapper() {this->appTexture = appTexture;
this->appTexturePtr = appTexturePtr;
this->swapChain = swapChain;
this->swapChainPtr = swapChainPtr;
}
constexpr void GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__set_appTexture(UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture, 0x0>(this->__instance, std::forward<UnityEngine::Texture>(value));
}
constexpr UnityEngine::Texture GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__get_appTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__set_appTexturePtr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__get_appTexturePtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__set_swapChain(::ArrayW<UnityEngine::Texture> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Texture>, 0x10>(this->__instance, std::forward<::ArrayW<UnityEngine::Texture>>(value));
}
constexpr ::ArrayW<UnityEngine::Texture> GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__get_swapChain() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Texture>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__set_swapChainPtr(::ArrayW<::cordl_internals::intptr_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<::cordl_internals::intptr_t>, 0x18>(this->__instance, std::forward<::ArrayW<::cordl_internals::intptr_t>>(value));
}
constexpr ::ArrayW<::cordl_internals::intptr_t> GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture::__get_swapChainPtr() const {
return ::cordl_internals::getInstanceField<::ArrayW<::cordl_internals::intptr_t>, 0x18>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::OVROverlay.get_previewInEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::get_previewInEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d0250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.set_previewInEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(bool)>(&GlobalNamespace::OVROverlay::set_previewInEditor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25d0258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "set_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.OverrideOverlayTextureInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(UnityEngine::Texture, ::cordl_internals::intptr_t, UnityEngine::XR::XRNode)>(&GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25d0274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OverrideOverlayTextureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.get_layerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::get_layerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d0330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.set_layerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(int32_t)>(&GlobalNamespace::OVROverlay::set_layerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d0338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "set_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.get_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerLayout (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::get_layout)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x25d0340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.get_texturesPerStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::get_texturesPerStage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25d040c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_texturesPerStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.NeedsTexturesForShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape)>(&GlobalNamespace::OVROverlay::NeedsTexturesForShape)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25d0428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "NeedsTexturesForShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.CreateLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)(int32_t, int32_t, GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat, int32_t, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei, GlobalNamespace::GlobalNamespace__OVRPlugin__OverlayShape)>(&GlobalNamespace::OVROverlay::CreateLayer)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x25d0500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "CreateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__OverlayShape>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.CreateLayerTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)(bool, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei, bool)>(&GlobalNamespace::OVROverlay::CreateLayerTextures)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x25d0d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "CreateLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.DestroyLayerTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::DestroyLayerTextures)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25d1504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "DestroyLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.DestroyLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::DestroyLayer)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x25d1628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "DestroyLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.SetSrcDestRects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(UnityEngine::Rect, UnityEngine::Rect, UnityEngine::Rect, UnityEngine::Rect)>(&GlobalNamespace::OVROverlay::SetSrcDestRects)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25d1f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SetSrcDestRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.UpdateTextureRectMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::UpdateTextureRectMatrix)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x25d1f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "UpdateTextureRectMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.SetPerLayerColorScaleAndOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(UnityEngine::Vector4, UnityEngine::Vector4)>(&GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25d2350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SetPerLayerColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.LatchLayerTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::LatchLayerTextures)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x25d2364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "LatchLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.GetCurrentLayerDesc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::GetCurrentLayerDesc)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x25d27d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "GetCurrentLayerDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.GetBlitRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (GlobalNamespace::OVROverlay::*)(int32_t)>(&GlobalNamespace::OVROverlay::GetBlitRect)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x25d2cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "GetBlitRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.BlitSubImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(UnityEngine::Texture, UnityEngine::RenderTexture, UnityEngine::Material, UnityEngine::Rect)>(&GlobalNamespace::OVROverlay::BlitSubImage)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x25d2e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "BlitSubImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.PopulateLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)(int32_t, bool, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei, int32_t, int32_t)>(&GlobalNamespace::OVROverlay::PopulateLayer)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x25d3238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "PopulateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.SubmitLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)(bool, bool, bool, GlobalNamespace::OVRPose, UnityEngine::Vector3, int32_t)>(&GlobalNamespace::OVROverlay::SubmitLayer)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x25d3a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SubmitLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.SetupEditorPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::SetupEditorPreview)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25d0270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SetupEditorPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.IsPassthroughShape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape)>(&GlobalNamespace::OVROverlay::IsPassthroughShape)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25d0488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "IsPassthroughShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::Awake)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x25d3dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.get_OpenVROverlayKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::OVROverlay::get_OpenVROverlayKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25d40c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_OpenVROverlayKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25d4140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.InitOVROverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::InitOVROverlay)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x25d41b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "InitOVROverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::OnDisable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25d4344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25d4468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.ComputePoseAndScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(ByRef<GlobalNamespace::OVRPose>, ByRef<UnityEngine::Vector3>, ByRef<bool>, ByRef<bool>)>(&GlobalNamespace::OVROverlay::ComputePoseAndScale)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x25d4480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "ComputePoseAndScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.ComputeSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVROverlay::*)(ByRef<GlobalNamespace::OVRPose>, ByRef<UnityEngine::Vector3>, ByRef<bool>, ByRef<bool>)>(&GlobalNamespace::OVROverlay::ComputeSubmit)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x25d4808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "ComputeSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.OpenVROverlayUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)(UnityEngine::Vector3, GlobalNamespace::OVRPose)>(&GlobalNamespace::OVROverlay::OpenVROverlayUpdate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x25d4aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OpenVROverlayUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRPose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::LateUpdate)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x25d4da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVROverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVROverlay::*)()>(&GlobalNamespace::OVROverlay::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x25d52c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVROverlay::__set_currentOverlayType(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType GlobalNamespace::OVROverlay::__get_currentOverlayType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_isDynamic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_isDynamic() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_isProtectedContent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_isProtectedContent() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_srcRectLeft(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::OVROverlay::__get_srcRectLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_srcRectRight(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::OVROverlay::__get_srcRectRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_destRectLeft(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::OVROverlay::__get_destRectLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_destRectRight(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect GlobalNamespace::OVROverlay::__get_destRectRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_invertTextureRects(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_invertTextureRects() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_textureRectMatrix(GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf GlobalNamespace::OVROverlay::__get_textureRectMatrix() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_overrideTextureRectMatrix(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_overrideTextureRectMatrix() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_overridePerLayerColorScaleAndOffset(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa5>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_overridePerLayerColorScaleAndOffset() const {
return ::cordl_internals::getInstanceField<bool, 0xa5>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_colorScale(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::OVROverlay::__get_colorScale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_colorOffset(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::OVROverlay::__get_colorOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_useExpensiveSuperSample(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_useExpensiveSuperSample() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_useExpensiveSharpen(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_useExpensiveSharpen() const {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_hidden(bool value)  {
::cordl_internals::setInstanceField<bool, 0xca>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_hidden() const {
return ::cordl_internals::getInstanceField<bool, 0xca>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_isExternalSurface(bool value)  {
::cordl_internals::setInstanceField<bool, 0xcb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_isExternalSurface() const {
return ::cordl_internals::getInstanceField<bool, 0xcb>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_externalSurfaceWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_externalSurfaceHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_compositionDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_compositionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerCompositionDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_layerCompositionDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_noDepthBufferTesting(bool value)  {
::cordl_internals::setInstanceField<bool, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_noDepthBufferTesting() const {
return ::cordl_internals::getInstanceField<bool, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerTextureFormat(GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat GlobalNamespace::OVROverlay::__get_layerTextureFormat() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_currentOverlayShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape GlobalNamespace::OVROverlay::__get_currentOverlayShape() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_prevOverlayShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape GlobalNamespace::OVROverlay::__get_prevOverlayShape() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_textures(::ArrayW<UnityEngine::Texture> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Texture>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Texture>>(value));
}
constexpr ::ArrayW<UnityEngine::Texture> GlobalNamespace::OVROverlay::__get_textures() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Texture>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_isAlphaPremultiplied(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_isAlphaPremultiplied() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_useBicubicFiltering(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_useBicubicFiltering() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_useLegacyCubemapRotation(bool value)  {
::cordl_internals::setInstanceField<bool, 0xfa>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_useLegacyCubemapRotation() const {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_useEfficientSupersample(bool value)  {
::cordl_internals::setInstanceField<bool, 0xfb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_useEfficientSupersample() const {
return ::cordl_internals::getInstanceField<bool, 0xfb>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_useEfficientSharpen(bool value)  {
::cordl_internals::setInstanceField<bool, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_useEfficientSharpen() const {
return ::cordl_internals::getInstanceField<bool, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set__previewInEditor(bool value)  {
::cordl_internals::setInstanceField<bool, 0xfd>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get__previewInEditor() const {
return ::cordl_internals::getInstanceField<bool, 0xfd>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_texturePtrs(::ArrayW<::cordl_internals::intptr_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<::cordl_internals::intptr_t>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::cordl_internals::intptr_t>>(value));
}
constexpr ::ArrayW<::cordl_internals::intptr_t> GlobalNamespace::OVROverlay::__get_texturePtrs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::cordl_internals::intptr_t>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceObject(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t GlobalNamespace::OVROverlay::__get_externalSurfaceObject() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_externalSurfaceObjectCreated(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated GlobalNamespace::OVROverlay::__get_externalSurfaceObjectCreated() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_isOverridePending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_isOverridePending() const {
return ::cordl_internals::getInstanceField<bool, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVROverlay::__set_instances(::ArrayW<GlobalNamespace::OVROverlay> value)  {
::cordl_internals::setStaticField<::ArrayW<GlobalNamespace::OVROverlay>, "instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get>(std::forward<::ArrayW<GlobalNamespace::OVROverlay>>(value));
}
 ::ArrayW<GlobalNamespace::OVROverlay> GlobalNamespace::OVROverlay::__get_instances()  {
return ::cordl_internals::getStaticField<::ArrayW<GlobalNamespace::OVROverlay>, "instances", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get>();
}
constexpr void GlobalNamespace::OVROverlay::__set__layerId_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get__layerId_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVROverlay::__set_tex2DMaterial(UnityEngine::Material value)  {
::cordl_internals::setStaticField<UnityEngine::Material, "tex2DMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get>(std::forward<UnityEngine::Material>(value));
}
 UnityEngine::Material GlobalNamespace::OVROverlay::__get_tex2DMaterial()  {
return ::cordl_internals::getStaticField<UnityEngine::Material, "tex2DMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get>();
}
 void GlobalNamespace::OVROverlay::__set_cubeMaterial(UnityEngine::Material value)  {
::cordl_internals::setStaticField<UnityEngine::Material, "cubeMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get>(std::forward<UnityEngine::Material>(value));
}
 UnityEngine::Material GlobalNamespace::OVROverlay::__get_cubeMaterial()  {
return ::cordl_internals::getStaticField<UnityEngine::Material, "cubeMaterial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get>();
}
constexpr void GlobalNamespace::OVROverlay::__set_layerTextures(::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture> GlobalNamespace::OVROverlay::__get_layerTextures() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerDesc(GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc GlobalNamespace::OVROverlay::__get_layerDesc() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_stageCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_stageCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_layerIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerIdHandle(System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::GCHandle, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::GCHandle>(value));
}
constexpr System::Runtime::InteropServices::GCHandle GlobalNamespace::OVROverlay::__get_layerIdHandle() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::GCHandle, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_layerIdPtr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t GlobalNamespace::OVROverlay::__get_layerIdPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_frameIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_frameIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_prevFrameIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x194>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVROverlay::__get_prevFrameIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x194>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_rend(UnityEngine::Renderer value)  {
::cordl_internals::setInstanceField<UnityEngine::Renderer, 0x198>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Renderer>(value));
}
constexpr UnityEngine::Renderer GlobalNamespace::OVROverlay::__get_rend() const {
return ::cordl_internals::getInstanceField<UnityEngine::Renderer, 0x198>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_OpenVROverlayHandle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::OVROverlay::__get_OpenVROverlayHandle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_OpenVRUVOffsetAndScale(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::OVROverlay::__get_OpenVRUVOffsetAndScale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_OpenVRMouseScale(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::OVROverlay::__get_OpenVRMouseScale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_constructedOverlayXRDevice(GlobalNamespace::GlobalNamespace__OVRManager__XRDevice value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRManager__XRDevice, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRManager__XRDevice>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRManager__XRDevice GlobalNamespace::OVROverlay::__get_constructedOverlayXRDevice() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRManager__XRDevice, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVROverlay::__set_xrDeviceConstructed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVROverlay::__get_xrDeviceConstructed() const {
return ::cordl_internals::getInstanceField<bool, 0x1c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::OVROverlay::get_previewInEditor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::set_previewInEditor(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "set_previewInEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo(UnityEngine::Texture srcTexture, ::cordl_internals::intptr_t nativePtr, UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OverrideOverlayTextureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, srcTexture, nativePtr, node);
}
 int32_t GlobalNamespace::OVROverlay::get_layerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::set_layerId(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "set_layerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__LayerLayout GlobalNamespace::OVROverlay::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerLayout, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::OVROverlay::get_texturesPerStage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_texturesPerStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVROverlay::NeedsTexturesForShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "NeedsTexturesForShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shape);
}
 bool GlobalNamespace::OVROverlay::CreateLayer(int32_t mipLevels, int32_t sampleCount, GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat etFormat, int32_t flags, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei size, GlobalNamespace::GlobalNamespace__OVRPlugin__OverlayShape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "CreateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__OverlayShape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, mipLevels, sampleCount, etFormat, flags, size, shape);
}
 bool GlobalNamespace::OVROverlay::CreateLayerTextures(bool useMipmaps, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei size, bool isHdr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "CreateLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, useMipmaps, size, isHdr);
}
 void GlobalNamespace::OVROverlay::DestroyLayerTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "DestroyLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::DestroyLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "DestroyLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::SetSrcDestRects(UnityEngine::Rect srcLeft, UnityEngine::Rect srcRight, UnityEngine::Rect destLeft, UnityEngine::Rect destRight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SetSrcDestRects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, srcLeft, srcRight, destLeft, destRight);
}
 void GlobalNamespace::OVROverlay::UpdateTextureRectMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "UpdateTextureRectMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset(UnityEngine::Vector4 scale, UnityEngine::Vector4 offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SetPerLayerColorScaleAndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scale, offset);
}
 bool GlobalNamespace::OVROverlay::LatchLayerTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "LatchLayerTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc GlobalNamespace::OVROverlay::GetCurrentLayerDesc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "GetCurrentLayerDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rect GlobalNamespace::OVROverlay::GetBlitRect(int32_t eyeId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "GetBlitRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method, eyeId);
}
 void GlobalNamespace::OVROverlay::BlitSubImage(UnityEngine::Texture src, UnityEngine::RenderTexture dst, UnityEngine::Material mat, UnityEngine::Rect rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "BlitSubImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, src, dst, mat, rect);
}
 bool GlobalNamespace::OVROverlay::PopulateLayer(int32_t mipLevels, bool isHdr, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei size, int32_t sampleCount, int32_t stage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "PopulateLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, mipLevels, isHdr, size, sampleCount, stage);
}
 bool GlobalNamespace::OVROverlay::SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, GlobalNamespace::OVRPose pose, UnityEngine::Vector3 scale, int32_t frameIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SubmitLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, overlay, headLocked, noDepthBufferTesting, pose, scale, frameIndex);
}
 void GlobalNamespace::OVROverlay::SetupEditorPreview()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "SetupEditorPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVROverlay::IsPassthroughShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape shape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "IsPassthroughShape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shape);
}
 void GlobalNamespace::OVROverlay::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::OVROverlay::get_OpenVROverlayKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "get_OpenVROverlayKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVROverlay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::InitOVROverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "InitOVROverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVROverlay::ComputePoseAndScale(ByRef<GlobalNamespace::OVRPose> pose, ByRef<UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "ComputePoseAndScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pose, scale, overlay, headLocked);
}
 bool GlobalNamespace::OVROverlay::ComputeSubmit(ByRef<GlobalNamespace::OVRPose> pose, ByRef<UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "ComputeSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::OVRPose>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pose, scale, overlay, headLocked);
}
 void GlobalNamespace::OVROverlay::OpenVROverlayUpdate(UnityEngine::Vector3 scale, GlobalNamespace::OVRPose pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "OpenVROverlayUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRPose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scale, pose);
}
 void GlobalNamespace::OVROverlay::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OVROverlay::OVROverlay()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVROverlay>())) {}
 void GlobalNamespace::OVROverlay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVROverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
