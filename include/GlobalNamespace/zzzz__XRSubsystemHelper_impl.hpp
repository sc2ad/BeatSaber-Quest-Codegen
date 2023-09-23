#pragma once
#include "GlobalNamespace/zzzz__XRSubsystemHelper_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
//  Writing Method size for method: GlobalNamespace::XRSubsystemHelper.GetCurrentDisplaySubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRDisplaySubsystem (*)()>(&GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1f8eeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get(),
                            "GetCurrentDisplaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::XRSubsystemHelper.GetCurrentDisplaySubsystemDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRDisplaySubsystemDescriptor (*)()>(&GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1f8eff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get(),
                            "GetCurrentDisplaySubsystemDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::XRSubsystemHelper.GetCurrentInputSubsystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRInputSubsystem (*)()>(&GlobalNamespace::XRSubsystemHelper::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1f8f130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get(),
                            "GetCurrentInputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::XRSubsystemHelper::__set_s_displaySubsystems(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem>, "s_displaySubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> GlobalNamespace::XRSubsystemHelper::__get_s_displaySubsystems()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem>, "s_displaySubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get>();
}
 void GlobalNamespace::XRSubsystemHelper::__set_s_displaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_displaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> GlobalNamespace::XRSubsystemHelper::__get_s_displaySubsystemDescriptors()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>, "s_displaySubsystemDescriptors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get>();
}
 void GlobalNamespace::XRSubsystemHelper::__set_s_inputSubsystems(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem>, "s_inputSubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> GlobalNamespace::XRSubsystemHelper::__get_s_inputSubsystems()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem>, "s_inputSubsystems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get>();
}
 UnityEngine::XR::XRDisplaySubsystem GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get(),
                            "GetCurrentDisplaySubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRDisplaySubsystem, false>(nullptr, ___internal_method);
}
 UnityEngine::XR::XRDisplaySubsystemDescriptor GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystemDescriptor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get(),
                            "GetCurrentDisplaySubsystemDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRDisplaySubsystemDescriptor, false>(nullptr, ___internal_method);
}
 UnityEngine::XR::XRInputSubsystem GlobalNamespace::XRSubsystemHelper::GetCurrentInputSubsystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XRSubsystemHelper>::get(),
                            "GetCurrentInputSubsystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::XRInputSubsystem, false>(nullptr, ___internal_method);
}
