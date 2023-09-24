#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_impl.hpp"
#include "Unity/XR/Oculus/zzzz__OculusLoader_def.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
#include "Unity/XR/Oculus/zzzz__OculusLoader_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystemDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult  Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult::Supported{0};
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult  Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult::NotSupported{1};
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult  Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult::ExitApplication{2};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.IsDeviceSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult (*)()>(&Unity::XR::Oculus::OculusLoader::IsDeviceSupported)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2adf1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "IsDeviceSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.get_displaySubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRDisplaySubsystem (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::get_displaySubsystem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2adf27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "get_displaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.get_inputSubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRInputSubsystem (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::get_inputSubsystem)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2adf2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "get_inputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::Initialize)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2adf35c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Unity::XR::Oculus::OculusLoader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.PermissionGrantedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::OculusLoader::*)(::StringW)>(&Unity::XR::Oculus::OculusLoader::PermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2adfb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "PermissionGrantedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2adfb90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Unity::XR::Oculus::OculusLoader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::Stop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2adfc0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Unity::XR::Oculus::OculusLoader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.Deinitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::Deinitialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2adfc88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Unity::XR::Oculus::OculusLoader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.RuntimeLoadOVRPlugin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::OculusLoader::RuntimeLoadOVRPlugin)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2adfd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "RuntimeLoadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.GetSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::XR::Oculus::OculusSettings (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::GetSettings)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2adfefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "GetSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader.CheckUnityVersionCompatibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::CheckUnityVersionCompatibility)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2adf794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "CheckUnityVersionCompatibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::OculusLoader::*)()>(&Unity::XR::Oculus::OculusLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adff44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Unity::XR::Oculus::OculusLoader::__set_s_DisplaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_DisplaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> Unity::XR::Oculus::OculusLoader::__get_s_DisplaySubsystemDescriptors()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_DisplaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get>();
}
 void Unity::XR::Oculus::OculusLoader::__set_s_InputSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor>, "s_InputSubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> Unity::XR::Oculus::OculusLoader::__get_s_InputSubsystemDescriptors()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor>, "s_InputSubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get>();
}
 Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult Unity::XR::Oculus::OculusLoader::IsDeviceSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "IsDeviceSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult, false>(nullptr, ___internal_method);
}
 UnityEngine::XR::XRDisplaySubsystem Unity::XR::Oculus::OculusLoader::get_displaySubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "get_displaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRDisplaySubsystem, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::XR::XRInputSubsystem Unity::XR::Oculus::OculusLoader::get_inputSubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "get_inputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRInputSubsystem, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Unity::XR::Oculus::OculusLoader::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Unity::XR::Oculus::OculusLoader::PermissionGrantedCallback(::StringW permissionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "PermissionGrantedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permissionName);
}
 bool Unity::XR::Oculus::OculusLoader::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Unity::XR::Oculus::OculusLoader::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Unity::XR::Oculus::OculusLoader::Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "Deinitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Unity::XR::Oculus::OculusLoader::RuntimeLoadOVRPlugin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "RuntimeLoadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 Unity::XR::Oculus::OculusSettings Unity::XR::Oculus::OculusLoader::GetSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "GetSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::XR::Oculus::OculusSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Unity::XR::Oculus::OculusLoader::CheckUnityVersionCompatibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            "CheckUnityVersionCompatibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Unity::XR::Oculus::OculusLoader Unity::XR::Oculus::OculusLoader::New_ctor()  {
Unity::XR::Oculus::OculusLoader o{THROW_UNLESS(::il2cpp_utils::New<Unity::XR::Oculus::OculusLoader>())};
return o;
}
 void Unity::XR::Oculus::OculusLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
