#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
namespace {
//  Writing Method size for method: UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d423e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::*)()>(&UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d424a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::UnityEngine__RemoteSettings__UpdatedEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__RemoteSettings__UpdatedEventHandler>(object, method))) {}
 void UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::RemoteSettings.RemoteSettingsUpdated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::RemoteSettings::RemoteSettingsUpdated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d42294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get(),
                            "RemoteSettingsUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::RemoteSettings.RemoteSettingsBeforeFetchFromServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d422f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get(),
                            "RemoteSettingsBeforeFetchFromServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::RemoteSettings.RemoteSettingsUpdateCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, int32_t)>(&UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d4235c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get(),
                            "RemoteSettingsUpdateCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::RemoteSettings::__set_Updated(UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler value)  {
::cordl_internals::setStaticField<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler, "Updated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get>(std::forward<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler>(value));
}
 UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler UnityEngine::RemoteSettings::__get_Updated()  {
return ::cordl_internals::getStaticField<UnityEngine::UnityEngine__RemoteSettings__UpdatedEventHandler, "Updated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get>();
}
 void UnityEngine::RemoteSettings::__set_BeforeFetchFromServer(System::Action value)  {
::cordl_internals::setStaticField<System::Action, "BeforeFetchFromServer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get>(std::forward<System::Action>(value));
}
 System::Action UnityEngine::RemoteSettings::__get_BeforeFetchFromServer()  {
return ::cordl_internals::getStaticField<System::Action, "BeforeFetchFromServer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get>();
}
 void UnityEngine::RemoteSettings::__set_Completed(System::Action_3<bool,bool,int32_t> value)  {
::cordl_internals::setStaticField<System::Action_3<bool,bool,int32_t>, "Completed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get>(std::forward<System::Action_3<bool,bool,int32_t>>(value));
}
 System::Action_3<bool,bool,int32_t> UnityEngine::RemoteSettings::__get_Completed()  {
return ::cordl_internals::getStaticField<System::Action_3<bool,bool,int32_t>, "Completed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get>();
}
 void UnityEngine::RemoteSettings::RemoteSettingsUpdated(bool wasLastUpdatedFromServer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get(),
                            "RemoteSettingsUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wasLastUpdatedFromServer);
}
 void UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get(),
                            "RemoteSettingsBeforeFetchFromServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int32_t response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteSettings>::get(),
                            "RemoteSettingsUpdateCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wasLastUpdatedFromServer, settingsChanged, response);
}
} // end anonymous namespace
