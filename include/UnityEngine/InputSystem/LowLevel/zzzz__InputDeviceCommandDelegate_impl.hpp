#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2954d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::UnityEngine::InputSystem::InputDevice, void*)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2954e84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::UnityEngine::InputSystem::InputDevice, void*, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2954e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::*)(::System::IAsyncResult)>(&::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2954ec0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::InputDeviceCommandDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<InputDeviceCommandDelegate>(object, method))) {}
 void ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::System::Nullable_1<int64_t> ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::Invoke(::UnityEngine::InputSystem::InputDevice device, void* command)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(const_cast<void*>(instance), ___internal_method, device, command);
}
 ::System::IAsyncResult ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::BeginInvoke(::UnityEngine::InputSystem::InputDevice device, void* command, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, device, command, callback, object);
}
 ::System::Nullable_1<int64_t> ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(const_cast<void*>(instance), ___internal_method, result);
}
} // end anonymous namespace
