#pragma once
#include "GlobalNamespace/zzzz__CommandBufferGOCore_impl.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGrabPass_def.hpp"
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
//  Writing Method size for method: GlobalNamespace::CommandBufferGrabPass.CreateCommandBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CommandBuffer (GlobalNamespace::CommandBufferGrabPass::*)(UnityEngine::Camera)>(&GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x26750d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::CommandBufferGrabPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferGrabPass.CamerasDict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> (GlobalNamespace::CommandBufferGrabPass::*)()>(&GlobalNamespace::CommandBufferGrabPass::CamerasDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26752c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::CommandBufferGrabPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferGrabPass.CommandBufferCameraEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CameraEvent (GlobalNamespace::CommandBufferGrabPass::*)()>(&GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2675318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::CommandBufferGrabPass),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferGrabPass._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CommandBufferGrabPass::*)()>(&GlobalNamespace::CommandBufferGrabPass::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2675320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CommandBufferGrabPass::__set__textureName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::CommandBufferGrabPass::__get__textureName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CommandBufferGrabPass::__set__cameraEvent(UnityEngine::Rendering::CameraEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CameraEvent, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CameraEvent>(value));
}
constexpr UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferGrabPass::__get__cameraEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CameraEvent, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CommandBufferGrabPass::__set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>, "_cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> GlobalNamespace::CommandBufferGrabPass::__get__cameras()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>, "_cameras", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get>();
}
 UnityEngine::Rendering::CommandBuffer GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer(UnityEngine::Camera camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                            "CreateCommandBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::CommandBuffer, false>(const_cast<void*>(instance), ___internal_method, camera);
}
 System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> GlobalNamespace::CommandBufferGrabPass::CamerasDict()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                            "CamerasDict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                            "CommandBufferCameraEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rendering::CameraEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::CommandBufferGrabPass GlobalNamespace::CommandBufferGrabPass::New_ctor()  {
GlobalNamespace::CommandBufferGrabPass o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::CommandBufferGrabPass>())};
return o;
}
 void GlobalNamespace::CommandBufferGrabPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferGrabPass>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
