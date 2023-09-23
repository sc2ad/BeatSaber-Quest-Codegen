#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionManager_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GroupType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_License_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x20339e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::*)(System::Type)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2033b0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::*)(System::Type, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2033b20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::*)(System::IAsyncResult)>(&HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2033b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>(object, method))) {}
 void HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::Invoke(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(const_cast<void*>(instance), ___internal_method, type);
}
 System::IAsyncResult HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::BeginInvoke(System::Type type, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, type, callback, object);
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CreateSessionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CreateSessionObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2031210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateSessionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CreateSessionFromType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (*)(System::Type)>(&HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2031274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateSessionFromType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetDefaultSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (*)()>(&HoudiniEngineUnity::HEU_SessionManager::GetDefaultSession)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x202bc30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.RegisterSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::RegisterSession)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x203137c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "RegisterSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.UnregisterSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t)>(&HoudiniEngineUnity::HEU_SessionManager::UnregisterSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20314e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "UnregisterSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetSessionWithID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (*)(int64_t)>(&HoudiniEngineUnity::HEU_SessionManager::GetSessionWithID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2031564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetSessionWithID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.SaveAllSessionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_SessionManager::SaveAllSessionData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2031410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "SaveAllSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.LoadAllSessionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_SessionManager::LoadAllSessionData)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x20315fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "LoadAllSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.InternalValidateSceneAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_SessionManager::InternalValidateSceneAssets)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2031a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "InternalValidateSceneAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetOrCreateDefaultSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionBase (*)(bool)>(&HoudiniEngineUnity::HEU_SessionManager::GetOrCreateDefaultSession)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x202b9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetOrCreateDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CreateInProcessSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CreateInProcessSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2031ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateInProcessSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CreateThriftSocketSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t, bool, float_t, bool)>(&HoudiniEngineUnity::HEU_SessionManager::CreateThriftSocketSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2031e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateThriftSocketSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CreateThriftPipeSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool, float_t, bool)>(&HoudiniEngineUnity::HEU_SessionManager::CreateThriftPipeSession)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2031bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateThriftPipeSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CreateCustomSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CreateCustomSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2031ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateCustomSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.ConnectThriftSocketSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t, bool, float_t)>(&HoudiniEngineUnity::HEU_SessionManager::ConnectThriftSocketSession)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2031f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectThriftSocketSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.ConnectThriftPipeSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool, float_t)>(&HoudiniEngineUnity::HEU_SessionManager::ConnectThriftPipeSession)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2032020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectThriftPipeSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.RecreateDefaultSessionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_SessionManager::RecreateDefaultSessionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20320d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "RecreateDefaultSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.ConnectSessionSyncUsingThriftSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t, bool, float_t, bool)>(&HoudiniEngineUnity::HEU_SessionManager::ConnectSessionSyncUsingThriftSocket)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2032134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectSessionSyncUsingThriftSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.ConnectSessionSyncUsingThriftPipe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool, float_t, bool)>(&HoudiniEngineUnity::HEU_SessionManager::ConnectSessionSyncUsingThriftPipe)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2032218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectSessionSyncUsingThriftPipe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.InitializeDefaultSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::InitializeDefaultSession)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x20322ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "InitializeDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CloseDefaultSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CloseDefaultSession)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x203238c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CloseDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CloseAllSessions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CloseAllSessions)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2032448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CloseAllSessions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CheckAndCloseExistingSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CheckAndCloseExistingSession)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2031d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CheckAndCloseExistingSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetSessionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HEU_SessionData (*)()>(&HoudiniEngineUnity::HEU_SessionManager::GetSessionData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2032724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetSessionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_SessionManager::GetSessionInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x203277c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.LoadStoredDefaultSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::LoadStoredDefaultSession)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x20312d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "LoadStoredDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.RestartSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::RestartSession)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2032800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "RestartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.ValidatePluginSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::ValidatePluginSession)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2032934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ValidatePluginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetLastSessionError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&HoudiniEngineUnity::HEU_SessionManager::GetLastSessionError)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2031c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetLastSessionError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.CheckVersionMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::CheckVersionMatch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x20329b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CheckVersionMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.ClearConnectionError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_SessionManager::ClearConnectionError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2032a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ClearConnectionError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetConnectionError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool)>(&HoudiniEngineUnity::HEU_SessionManager::GetConnectionError)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2030520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetConnectionError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.IsHARSProcessRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&HoudiniEngineUnity::HEU_SessionManager::IsHARSProcessRunning)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2032a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "IsHARSProcessRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.LoadSessionFromHIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::LoadSessionFromHIP)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2032ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "LoadSessionFromHIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.SaveSessionToHIP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::SaveSessionToHIP)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2032ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "SaveSessionToHIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetHoudiniPathOnMacOS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&HoudiniEngineUnity::HEU_SessionManager::GetHoudiniPathOnMacOS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2032c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetHoudiniPathOnMacOS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.OpenHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&HoudiniEngineUnity::HEU_SessionManager::OpenHoudini)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2032c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "OpenHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.OpenSessionInHoudini
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::OpenSessionInHoudini)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2032d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "OpenSessionInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetCurrentLicense
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HAPI_License (*)(bool)>(&HoudiniEngineUnity::HEU_SessionManager::GetCurrentLicense)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2033034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetCurrentLicense",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::GetString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2028c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetStringValuesFromStringIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<int32_t>)>(&HoudiniEngineUnity::HEU_SessionManager::GetStringValuesFromStringIndices)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x20330d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetStringValuesFromStringIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetGroupNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, HoudiniEngineUnity::HAPI_GroupType, bool)>(&HoudiniEngineUnity::HEU_SessionManager::GetGroupNames)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x203327c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetGroupNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GroupType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetGroupMembership
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, HoudiniEngineUnity::HAPI_GroupType, ::StringW, ByRef<::ArrayW<int32_t>>, bool)>(&HoudiniEngineUnity::HEU_SessionManager::GetGroupMembership)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x20334c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetGroupMembership",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GroupType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetNodeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, HoudiniEngineUnity::HEU_SessionBase)>(&HoudiniEngineUnity::HEU_SessionManager::GetNodeName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2033600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetNodeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetNodeInputName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, ByRef<::StringW>)>(&HoudiniEngineUnity::HEU_SessionManager::GetNodeInputName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x20336f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetNodeInputName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetComposedChildNodeList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, int32_t, bool, ByRef<::ArrayW<int32_t>>)>(&HoudiniEngineUnity::HEU_SessionManager::GetComposedChildNodeList)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2028d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetComposedChildNodeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetComposedObjectListMemorySafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>, int32_t, int32_t)>(&HoudiniEngineUnity::HEU_SessionManager::GetComposedObjectListMemorySafe)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x20337d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetComposedObjectListMemorySafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetComposedObjectTransformsMemorySafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase, int32_t, HoudiniEngineUnity::HAPI_RSTOrder, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>, int32_t, int32_t)>(&HoudiniEngineUnity::HEU_SessionManager::GetComposedObjectTransformsMemorySafe)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x203388c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetComposedObjectTransformsMemorySafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_RSTOrder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionManager.GetUniqueMaterialShopName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t, int32_t)>(&HoudiniEngineUnity::HEU_SessionManager::GetUniqueMaterialShopName)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x202fcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetUniqueMaterialShopName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void HoudiniEngineUnity::HEU_SessionManager::__set__defaultSession(HoudiniEngineUnity::HEU_SessionBase value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::HEU_SessionBase, "_defaultSession", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get>(std::forward<HoudiniEngineUnity::HEU_SessionBase>(value));
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_SessionManager::__get__defaultSession()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::HEU_SessionBase, "_defaultSession", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get>();
}
 void HoudiniEngineUnity::HEU_SessionManager::__set__sessionMap(System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase>, "_sessionMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get>(std::forward<System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase>>(value));
}
 System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase> HoudiniEngineUnity::HEU_SessionManager::__get__sessionMap()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase>, "_sessionMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get>();
}
 void HoudiniEngineUnity::HEU_SessionManager::__set__createSessionFromTypeDelegate(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate value)  {
::cordl_internals::setStaticField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate, "_createSessionFromTypeDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get>(std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate>(value));
}
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate HoudiniEngineUnity::HEU_SessionManager::__get__createSessionFromTypeDelegate()  {
return ::cordl_internals::getStaticField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate, "_createSessionFromTypeDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get>();
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_SessionManager::CreateSessionObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateSessionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(nullptr, ___internal_method);
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_SessionManager::CreateSessionFromType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateSessionFromType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(nullptr, ___internal_method, type);
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_SessionManager::GetDefaultSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_SessionManager::RegisterSession(int64_t sessionID, HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "RegisterSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sessionID, session);
}
 void HoudiniEngineUnity::HEU_SessionManager::UnregisterSession(int64_t sessionID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "UnregisterSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sessionID);
}
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_SessionManager::GetSessionWithID(int64_t sessionID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetSessionWithID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(nullptr, ___internal_method, sessionID);
}
 void HoudiniEngineUnity::HEU_SessionManager::SaveAllSessionData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "SaveAllSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_SessionManager::LoadAllSessionData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "LoadAllSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_SessionManager::InternalValidateSceneAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "InternalValidateSceneAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param bNotifyUserError: bool (default: true)
 HoudiniEngineUnity::HEU_SessionBase HoudiniEngineUnity::HEU_SessionManager::GetOrCreateDefaultSession(bool bNotifyUserError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetOrCreateDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionBase, false>(nullptr, ___internal_method, bNotifyUserError);
}
 bool HoudiniEngineUnity::HEU_SessionManager::CreateInProcessSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateInProcessSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::CreateThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateThriftSocketSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hostName, serverPort, autoClose, timeout, logError);
}
 bool HoudiniEngineUnity::HEU_SessionManager::CreateThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout, bool logError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateThriftPipeSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pipeName, autoClose, timeout, logError);
}
 bool HoudiniEngineUnity::HEU_SessionManager::CreateCustomSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CreateCustomSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::ConnectThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectThriftSocketSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hostName, serverPort, autoClose, timeout);
}
 bool HoudiniEngineUnity::HEU_SessionManager::ConnectThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectThriftPipeSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pipeName, autoClose, timeout);
}
 void HoudiniEngineUnity::HEU_SessionManager::RecreateDefaultSessionData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "RecreateDefaultSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::ConnectSessionSyncUsingThriftSocket(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectSessionSyncUsingThriftSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hostName, serverPort, autoClose, timeout, logError);
}
 bool HoudiniEngineUnity::HEU_SessionManager::ConnectSessionSyncUsingThriftPipe(::StringW pipeName, bool autoClose, float_t timeout, bool logError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ConnectSessionSyncUsingThriftPipe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pipeName, autoClose, timeout, logError);
}
 bool HoudiniEngineUnity::HEU_SessionManager::InitializeDefaultSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "InitializeDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::CloseDefaultSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CloseDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_SessionManager::CloseAllSessions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CloseAllSessions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void HoudiniEngineUnity::HEU_SessionManager::CheckAndCloseExistingSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CheckAndCloseExistingSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 HoudiniEngineUnity::HEU_SessionData HoudiniEngineUnity::HEU_SessionManager::GetSessionData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HEU_SessionData, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetSessionInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetSessionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::LoadStoredDefaultSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "LoadStoredDefaultSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::RestartSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "RestartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
/// @param session: HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 bool HoudiniEngineUnity::HEU_SessionManager::ValidatePluginSession(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ValidatePluginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session);
}
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetLastSessionError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetLastSessionError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::CheckVersionMatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "CheckVersionMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool HoudiniEngineUnity::HEU_SessionManager::ClearConnectionError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "ClearConnectionError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetConnectionError(bool clear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetConnectionError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, clear);
}
 bool HoudiniEngineUnity::HEU_SessionManager::IsHARSProcessRunning(int32_t processID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "IsHARSProcessRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, processID);
}
/// @param session: HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 bool HoudiniEngineUnity::HEU_SessionManager::LoadSessionFromHIP(bool bCookNodes, HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "LoadSessionFromHIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bCookNodes, session);
}
/// @param session: HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 bool HoudiniEngineUnity::HEU_SessionManager::SaveSessionToHIP(bool bLockNodes, HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "SaveSessionToHIP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bLockNodes, session);
}
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetHoudiniPathOnMacOS(::StringW houdiniPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetHoudiniPathOnMacOS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, houdiniPath);
}
 bool HoudiniEngineUnity::HEU_SessionManager::OpenHoudini(::StringW args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "OpenHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, args);
}
/// @param session: HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 bool HoudiniEngineUnity::HEU_SessionManager::OpenSessionInHoudini(HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "OpenSessionInHoudini",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session);
}
 HoudiniEngineUnity::HAPI_License HoudiniEngineUnity::HEU_SessionManager::GetCurrentLicense(bool bLogError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetCurrentLicense",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::HAPI_License, false>(nullptr, ___internal_method, bLogError);
}
/// @param session: HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetString(int32_t stringHandle, HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stringHandle, session);
}
 ::ArrayW<::StringW> HoudiniEngineUnity::HEU_SessionManager::GetStringValuesFromStringIndices(::ArrayW<int32_t> strIndices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetStringValuesFromStringIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, strIndices);
}
 ::ArrayW<::StringW> HoudiniEngineUnity::HEU_SessionManager::GetGroupNames(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, bool isInstanced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetGroupNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GroupType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, session, nodeID, partID, groupType, isInstanced);
}
 bool HoudiniEngineUnity::HEU_SessionManager::GetGroupMembership(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ByRef<::ArrayW<int32_t>> membership, bool isInstanced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetGroupMembership",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_GroupType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, partID, groupType, groupName, membership, isInstanced);
}
/// @param session: HoudiniEngineUnity::HEU_SessionBase (default: csnull)
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetNodeName(int32_t nodeID, HoudiniEngineUnity::HEU_SessionBase session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetNodeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, nodeID, session);
}
 bool HoudiniEngineUnity::HEU_SessionManager::GetNodeInputName(int32_t nodeID, int32_t inputIndex, ByRef<::StringW> inputName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetNodeInputName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nodeID, inputIndex, inputName);
}
 bool HoudiniEngineUnity::HEU_SessionManager::GetComposedChildNodeList(HoudiniEngineUnity::HEU_SessionBase session, int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive, ByRef<::ArrayW<int32_t>> childNodeIDs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetComposedChildNodeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, parentNodeID, nodeTypeFilter, nodeFlagFilter, bRecursive, childNodeIDs);
}
 bool HoudiniEngineUnity::HEU_SessionManager::GetComposedObjectListMemorySafe(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> objectInfos, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetComposedObjectListMemorySafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, objectInfos, start, length);
}
 bool HoudiniEngineUnity::HEU_SessionManager::GetComposedObjectTransformsMemorySafe(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> transforms, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetComposedObjectTransformsMemorySafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_RSTOrder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, nodeID, rstOrder, transforms, start, length);
}
 ::StringW HoudiniEngineUnity::HEU_SessionManager::GetUniqueMaterialShopName(int32_t assetID, int32_t materialID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionManager>::get(),
                            "GetUniqueMaterialShopName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assetID, materialID);
}
