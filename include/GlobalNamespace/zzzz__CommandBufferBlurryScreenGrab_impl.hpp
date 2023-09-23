#pragma once
#include "GlobalNamespace/zzzz__CommandBufferGOCore_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferBlurryScreenGrab_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: GlobalNamespace::CommandBufferBlurryScreenGrab.CreateCommandBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CommandBuffer (GlobalNamespace::CommandBufferBlurryScreenGrab::*)(UnityEngine::Camera)>(&GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2674ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::CommandBufferBlurryScreenGrab),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferBlurryScreenGrab.CamerasDict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> (GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(&GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2674fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::CommandBufferBlurryScreenGrab),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferBlurryScreenGrab.CommandBufferCameraEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CameraEvent (GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(&GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2675024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::CommandBufferBlurryScreenGrab),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferBlurryScreenGrab._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CommandBufferBlurryScreenGrab::*)()>(&GlobalNamespace::CommandBufferBlurryScreenGrab::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267502c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::KawaseBlurRendererSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::KawaseBlurRendererSO>(value));
}
constexpr GlobalNamespace::KawaseBlurRendererSO GlobalNamespace::CommandBufferBlurryScreenGrab::__get__kawaseBlurRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::KawaseBlurRendererSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__set__kernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize>(value));
}
constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize GlobalNamespace::CommandBufferBlurryScreenGrab::__get__kernelSize() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__set__cameraEvent(UnityEngine::Rendering::CameraEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CameraEvent, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CameraEvent>(value));
}
constexpr UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferBlurryScreenGrab::__get__cameraEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CameraEvent, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CommandBufferBlurryScreenGrab::__set__downsample(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::CommandBufferBlurryScreenGrab::__get__downsample() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CommandBufferBlurryScreenGrab::__set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>, "_cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> GlobalNamespace::CommandBufferBlurryScreenGrab::__get__cameras()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>, "_cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get>();
}
 UnityEngine::Rendering::CommandBuffer GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer(UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                            "CreateCommandBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::CommandBuffer, false>(const_cast<void*>(instance), ___internal_method, camera);
}
 System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                            "CamerasDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                            "CommandBufferCameraEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::CameraEvent, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferBlurryScreenGrab()  : GlobalNamespace::CommandBufferGOCore(THROW_UNLESS(::il2cpp_utils::New<CommandBufferBlurryScreenGrab>())) {}
 void GlobalNamespace::CommandBufferBlurryScreenGrab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferBlurryScreenGrab>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
