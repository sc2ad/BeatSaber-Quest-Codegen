#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode  ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode::Head{0};
constexpr ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode  ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode::LeftHand{1};
constexpr ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode  ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode::RightHand{2};
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass(::cordl_internals::intptr_t displaySubsystemInstance, int32_t renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass, ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc, bool shouldFillOutDepth, int32_t cullingPassIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->displaySubsystemInstance = displaySubsystemInstance;
this->renderPassIndex = renderPassIndex;
this->renderTarget = renderTarget;
this->renderTargetDesc = renderTargetDesc;
this->hasMotionVectorPass = hasMotionVectorPass;
this->motionVectorRenderTarget = motionVectorRenderTarget;
this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
this->shouldFillOutDepth = shouldFillOutDepth;
this->cullingPassIndex = cullingPassIndex;
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_displaySubsystemInstance(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_displaySubsystemInstance() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_renderPassIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_renderPassIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x10>(this->__instance, std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_renderTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTextureDescriptor, 0x38>(this->__instance, std::forward<::UnityEngine::RenderTextureDescriptor>(value));
}
constexpr ::UnityEngine::RenderTextureDescriptor ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_renderTargetDesc() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTextureDescriptor, 0x38>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_hasMotionVectorPass(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_hasMotionVectorPass() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x70>(this->__instance, std::forward<::UnityEngine::Rendering::RenderTargetIdentifier>(value));
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_motionVectorRenderTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::RenderTargetIdentifier, 0x70>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTextureDescriptor, 0x98>(this->__instance, std::forward<::UnityEngine::RenderTextureDescriptor>(value));
}
constexpr ::UnityEngine::RenderTextureDescriptor ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_motionVectorRenderTargetDesc() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTextureDescriptor, 0x98>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_shouldFillOutDepth(bool value)  {
::cordl_internals::setInstanceField<bool, 0xcc>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_shouldFillOutDepth() const {
return ::cordl_internals::getInstanceField<bool, 0xcc>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__set_cullingPassIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRRenderPass::__get_cullingPassIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc(::cordl_internals::intptr_t displaySubsystemInstance, bool nativeBlitAvailable, bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->displaySubsystemInstance = displaySubsystemInstance;
this->nativeBlitAvailable = nativeBlitAvailable;
this->nativeBlitInvalidStates = nativeBlitInvalidStates;
this->blitParamsCount = blitParamsCount;
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_displaySubsystemInstance(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_displaySubsystemInstance() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_nativeBlitAvailable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_nativeBlitAvailable() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_nativeBlitInvalidStates(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_nativeBlitInvalidStates() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->__instance);
}
constexpr void ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__set_blitParamsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc::__get_blitParamsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem.InvokeDisplayFocusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystem::*)(bool)>(&::UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d3aa00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "InvokeDisplayFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem.MarkTransformLateLatched
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystem::*)(::UnityEngine::Transform, ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode)>(&::UnityEngine::XR::XRDisplaySubsystem::MarkTransformLateLatched)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d3aa20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "MarkTransformLateLatched",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem.TryGetAppGPUTimeLastFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::XRDisplaySubsystem::*)(ByRef<float_t>)>(&::UnityEngine::XR::XRDisplaySubsystem::TryGetAppGPUTimeLastFrame)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d3aa74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetAppGPUTimeLastFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem.TryGetCompositorGPUTimeLastFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::XRDisplaySubsystem::*)(ByRef<float_t>)>(&::UnityEngine::XR::XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d3aab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetCompositorGPUTimeLastFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem.TryGetDisplayRefreshRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::XRDisplaySubsystem::*)(ByRef<float_t>)>(&::UnityEngine::XR::XRDisplaySubsystem::TryGetDisplayRefreshRate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d3aafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetDisplayRefreshRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem.TryGetMotionToPhoton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::XRDisplaySubsystem::*)(ByRef<float_t>)>(&::UnityEngine::XR::XRDisplaySubsystem::TryGetMotionToPhoton)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d3ab40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetMotionToPhoton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystem::*)()>(&::UnityEngine::XR::XRDisplaySubsystem::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d3ab84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::XR::XRDisplaySubsystem::__set_displayFocusChanged(::System::Action_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Action_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<bool>>(value));
}
constexpr ::System::Action_1<bool> ::UnityEngine::XR::XRDisplaySubsystem::__get_displayFocusChanged() const {
return ::cordl_internals::getInstanceField<::System::Action_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged(bool focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "InvokeDisplayFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, focus);
}
 void ::UnityEngine::XR::XRDisplaySubsystem::MarkTransformLateLatched(::UnityEngine::Transform transform, ::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode nodeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "MarkTransformLateLatched",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::____UnityEngine__XR__XRDisplaySubsystem__LateLatchNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform, nodeType);
}
 bool ::UnityEngine::XR::XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(ByRef<float_t> gpuTimeLastFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetAppGPUTimeLastFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, gpuTimeLastFrame);
}
 bool ::UnityEngine::XR::XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(ByRef<float_t> gpuTimeLastFrameCompositor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetCompositorGPUTimeLastFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, gpuTimeLastFrameCompositor);
}
 bool ::UnityEngine::XR::XRDisplaySubsystem::TryGetDisplayRefreshRate(ByRef<float_t> displayRefreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetDisplayRefreshRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, displayRefreshRate);
}
 bool ::UnityEngine::XR::XRDisplaySubsystem::TryGetMotionToPhoton(ByRef<float_t> motionToPhoton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            "TryGetMotionToPhoton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, motionToPhoton);
}
// Ctor Parameters []
 ::UnityEngine::XR::XRDisplaySubsystem::XRDisplaySubsystem()  : ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor>(THROW_UNLESS(::il2cpp_utils::New<XRDisplaySubsystem>())) {}
 void ::UnityEngine::XR::XRDisplaySubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
