#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__AppDomain_def.hpp"
#include "System/zzzz__ResolveEventHandler_def.hpp"
#include "System/zzzz__UnhandledExceptionEventHandler_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__FirstChanceExceptionEventArgs_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/zzzz__AssemblyLoadEventHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
//  Writing Method size for method: System::AppDomain.IsAppXModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::AppDomain::IsAppXModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "IsAppXModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)()>(&System::AppDomain::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248590c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.getFriendlyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::AppDomain::*)()>(&System::AppDomain::getFriendlyName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "getFriendlyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.getCurDomain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AppDomain (*)()>(&System::AppDomain::getCurDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "getCurDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.get_CurrentDomain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AppDomain (*)()>(&System::AppDomain::get_CurrentDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248591c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "get_CurrentDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.GetAssemblies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::Assembly> (System::AppDomain::*)(bool)>(&System::AppDomain::GetAssemblies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetAssemblies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.GetAssemblies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::Assembly> (System::AppDomain::*)()>(&System::AppDomain::GetAssemblies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetAssemblies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.GetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::AppDomain::*)(::StringW)>(&System::AppDomain::GetData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InitializeLifetimeService
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::AppDomain::*)()>(&System::AppDomain::InitializeLifetimeService)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485934;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::AppDomain),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.LoadAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::AppDomain::*)(::StringW, System::Security::Policy::Evidence, bool, ByRef<System::Threading::StackCrawlMark>)>(&System::AppDomain::LoadAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248593c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "LoadAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::AppDomain::*)(::StringW)>(&System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2485944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::AppDomain::*)(::StringW, System::Security::Policy::Evidence, bool, ByRef<System::Threading::StackCrawlMark>)>(&System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2485968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalSetDomainByID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AppDomain (*)(int32_t)>(&System::AppDomain::InternalSetDomainByID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalSetDomainByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalSetDomain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AppDomain (*)(System::AppDomain)>(&System::AppDomain::InternalSetDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalSetDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AppDomain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalPushDomainRefByID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::AppDomain::InternalPushDomainRefByID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalPushDomainRefByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalPopDomainRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::AppDomain::InternalPopDomainRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalPopDomainRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalSetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)(System::Runtime::Remoting::Contexts::Context)>(&System::AppDomain::InternalSetContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalSetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalGetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)()>(&System::AppDomain::InternalGetContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalGetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalGetDefaultContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::Context (*)()>(&System::AppDomain::InternalGetDefaultContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalGetDefaultContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalGetProcessGuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::AppDomain::InternalGetProcessGuid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalGetProcessGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InvokeInDomainByID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(int32_t, System::Reflection::MethodInfo, ::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::AppDomain::InvokeInDomainByID)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2485a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InvokeInDomainByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.GetProcessGuid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::AppDomain::GetProcessGuid)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2485c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetProcessGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.InternalIsFinalizingForUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::AppDomain::InternalIsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalIsFinalizingForUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.IsFinalizingForUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AppDomain::*)()>(&System::AppDomain::IsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2485cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "IsFinalizingForUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.getDomainID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::AppDomain::*)()>(&System::AppDomain::getDomainID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2485cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "getDomainID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::AppDomain::*)()>(&System::AppDomain::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485cd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::AppDomain),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.DoAssemblyLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)(System::Reflection::Assembly)>(&System::AppDomain::DoAssemblyLoad)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2485cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoAssemblyLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.DoAssemblyResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::AppDomain::*)(::StringW, System::Reflection::Assembly, bool)>(&System::AppDomain::DoAssemblyResolve)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2485d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoAssemblyResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.DoTypeResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::AppDomain::*)(::StringW)>(&System::AppDomain::DoTypeResolve)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x248607c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoTypeResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.DoDomainUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)()>(&System::AppDomain::DoDomainUnload)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x248634c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoDomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.GetMarshalledDomainObjRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::AppDomain::*)()>(&System::AppDomain::GetMarshalledDomainObjRef)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2486370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetMarshalledDomainObjRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.ProcessMessageInDomain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)(::ArrayW<uint8_t>, System::Runtime::Remoting::Messaging::CADMethodCallMessage, ByRef<::ArrayW<uint8_t>>, ByRef<System::Runtime::Remoting::Messaging::CADMethodReturnMessage>)>(&System::AppDomain::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2486448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "ProcessMessageInDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::CADMethodCallMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Remoting::Messaging::CADMethodReturnMessage>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.add_DomainUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)(System::EventHandler)>(&System::AppDomain::add_DomainUnload)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2486578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "add_DomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.remove_DomainUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)(System::EventHandler)>(&System::AppDomain::remove_DomainUnload)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2486784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "remove_DomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.add_UnhandledException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)(System::UnhandledExceptionEventHandler)>(&System::AppDomain::add_UnhandledException)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x248698c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "add_UnhandledException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UnhandledExceptionEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::AppDomain.remove_UnhandledException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AppDomain::*)(System::UnhandledExceptionEventHandler)>(&System::AppDomain::remove_UnhandledException)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2486a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "remove_UnhandledException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UnhandledExceptionEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::AppDomain::__set__mono_app_domain(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::AppDomain::__get__mono_app_domain() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::AppDomain::__set__process_guid(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "_process_guid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>(std::forward<::StringW>(value));
}
 ::StringW System::AppDomain::__get__process_guid()  {
return ::cordl_internals::getStaticField<::StringW, "_process_guid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>();
}
 void System::AppDomain::__set_type_resolve_in_progress(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "type_resolve_in_progress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> System::AppDomain::__get_type_resolve_in_progress()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "type_resolve_in_progress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>();
}
 void System::AppDomain::__set_assembly_resolve_in_progress(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "assembly_resolve_in_progress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> System::AppDomain::__get_assembly_resolve_in_progress()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "assembly_resolve_in_progress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>();
}
 void System::AppDomain::__set_assembly_resolve_in_progress_refonly(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "assembly_resolve_in_progress_refonly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> System::AppDomain::__get_assembly_resolve_in_progress_refonly()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>, "assembly_resolve_in_progress_refonly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get>();
}
constexpr void System::AppDomain::__set__evidence(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::AppDomain::__get__evidence() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set__granted(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::AppDomain::__get__granted() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set__principalPolicy(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::AppDomain::__get__principalPolicy() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_AssemblyLoad(System::AssemblyLoadEventHandler value)  {
::cordl_internals::setInstanceField<System::AssemblyLoadEventHandler, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::AssemblyLoadEventHandler>(value));
}
constexpr System::AssemblyLoadEventHandler System::AppDomain::__get_AssemblyLoad() const {
return ::cordl_internals::getInstanceField<System::AssemblyLoadEventHandler, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_AssemblyResolve(System::ResolveEventHandler value)  {
::cordl_internals::setInstanceField<System::ResolveEventHandler, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ResolveEventHandler>(value));
}
constexpr System::ResolveEventHandler System::AppDomain::__get_AssemblyResolve() const {
return ::cordl_internals::getInstanceField<System::ResolveEventHandler, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_DomainUnload(System::EventHandler value)  {
::cordl_internals::setInstanceField<System::EventHandler, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::EventHandler>(value));
}
constexpr System::EventHandler System::AppDomain::__get_DomainUnload() const {
return ::cordl_internals::getInstanceField<System::EventHandler, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_ProcessExit(System::EventHandler value)  {
::cordl_internals::setInstanceField<System::EventHandler, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::EventHandler>(value));
}
constexpr System::EventHandler System::AppDomain::__get_ProcessExit() const {
return ::cordl_internals::getInstanceField<System::EventHandler, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_ResourceResolve(System::ResolveEventHandler value)  {
::cordl_internals::setInstanceField<System::ResolveEventHandler, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ResolveEventHandler>(value));
}
constexpr System::ResolveEventHandler System::AppDomain::__get_ResourceResolve() const {
return ::cordl_internals::getInstanceField<System::ResolveEventHandler, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_TypeResolve(System::ResolveEventHandler value)  {
::cordl_internals::setInstanceField<System::ResolveEventHandler, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ResolveEventHandler>(value));
}
constexpr System::ResolveEventHandler System::AppDomain::__get_TypeResolve() const {
return ::cordl_internals::getInstanceField<System::ResolveEventHandler, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_UnhandledException(System::UnhandledExceptionEventHandler value)  {
::cordl_internals::setInstanceField<System::UnhandledExceptionEventHandler, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::UnhandledExceptionEventHandler>(value));
}
constexpr System::UnhandledExceptionEventHandler System::AppDomain::__get_UnhandledException() const {
return ::cordl_internals::getInstanceField<System::UnhandledExceptionEventHandler, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_FirstChanceException(System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs> value)  {
::cordl_internals::setInstanceField<System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs>>(value));
}
constexpr System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs> System::AppDomain::__get_FirstChanceException() const {
return ::cordl_internals::getInstanceField<System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set__domain_manager(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::AppDomain::__get__domain_manager() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_ReflectionOnlyAssemblyResolve(System::ResolveEventHandler value)  {
::cordl_internals::setInstanceField<System::ResolveEventHandler, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ResolveEventHandler>(value));
}
constexpr System::ResolveEventHandler System::AppDomain::__get_ReflectionOnlyAssemblyResolve() const {
return ::cordl_internals::getInstanceField<System::ResolveEventHandler, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set__activation(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::AppDomain::__get__activation() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set__applicationIdentity(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::AppDomain::__get__applicationIdentity() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::AppDomain::__set_compatibility_switch(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> System::AppDomain::__get_compatibility_switch() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::AppDomain::IsAppXModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "IsAppXModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 System::AppDomain System::AppDomain::New_ctor()  {
System::AppDomain o{THROW_UNLESS(::il2cpp_utils::New<System::AppDomain>())};
return o;
}
 void System::AppDomain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::AppDomain::getFriendlyName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "getFriendlyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::AppDomain System::AppDomain::getCurDomain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "getCurDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AppDomain, false>(nullptr, ___internal_method);
}
 System::AppDomain System::AppDomain::get_CurrentDomain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "get_CurrentDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AppDomain, false>(nullptr, ___internal_method);
}
 ::ArrayW<System::Reflection::Assembly> System::AppDomain::GetAssemblies(bool refOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetAssemblies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::Assembly>, false>(const_cast<void*>(instance), ___internal_method, refOnly);
}
 ::ArrayW<System::Reflection::Assembly> System::AppDomain::GetAssemblies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetAssemblies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::Assembly>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::AppDomain::GetData(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::bs_hook::Il2CppWrapperType System::AppDomain::InitializeLifetimeService()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InitializeLifetimeService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Assembly System::AppDomain::LoadAssembly(::StringW assemblyRef, System::Security::Policy::Evidence securityEvidence, bool refOnly, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "LoadAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method, assemblyRef, securityEvidence, refOnly, stackMark);
}
 System::Reflection::Assembly System::AppDomain::Load(::StringW assemblyString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method, assemblyString);
}
 System::Reflection::Assembly System::AppDomain::Load(::StringW assemblyString, System::Security::Policy::Evidence assemblySecurity, bool refonly, ByRef<System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Policy::Evidence>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method, assemblyString, assemblySecurity, refonly, stackMark);
}
 System::AppDomain System::AppDomain::InternalSetDomainByID(int32_t domain_id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalSetDomainByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AppDomain, false>(nullptr, ___internal_method, domain_id);
}
 System::AppDomain System::AppDomain::InternalSetDomain(System::AppDomain context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalSetDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AppDomain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AppDomain, false>(nullptr, ___internal_method, context);
}
 void System::AppDomain::InternalPushDomainRefByID(int32_t domain_id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalPushDomainRefByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, domain_id);
}
 void System::AppDomain::InternalPopDomainRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalPopDomainRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 System::Runtime::Remoting::Contexts::Context System::AppDomain::InternalSetContext(System::Runtime::Remoting::Contexts::Context context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalSetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method, context);
}
 System::Runtime::Remoting::Contexts::Context System::AppDomain::InternalGetContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalGetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method);
}
 System::Runtime::Remoting::Contexts::Context System::AppDomain::InternalGetDefaultContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalGetDefaultContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::Context, false>(nullptr, ___internal_method);
}
 ::StringW System::AppDomain::InternalGetProcessGuid(::StringW newguid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalGetProcessGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, newguid);
}
 ::bs_hook::Il2CppWrapperType System::AppDomain::InvokeInDomainByID(int32_t domain_id, System::Reflection::MethodInfo method, ::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InvokeInDomainByID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, domain_id, method, obj, args);
}
 ::StringW System::AppDomain::GetProcessGuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetProcessGuid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 bool System::AppDomain::InternalIsFinalizingForUnload(int32_t domain_id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "InternalIsFinalizingForUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, domain_id);
}
 bool System::AppDomain::IsFinalizingForUnload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "IsFinalizingForUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::AppDomain::getDomainID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "getDomainID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::AppDomain::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::AppDomain::DoAssemblyLoad(System::Reflection::Assembly assembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoAssemblyLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assembly);
}
 System::Reflection::Assembly System::AppDomain::DoAssemblyResolve(::StringW name, System::Reflection::Assembly requestingAssembly, bool refonly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoAssemblyResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method, name, requestingAssembly, refonly);
}
 System::Reflection::Assembly System::AppDomain::DoTypeResolve(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoTypeResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::AppDomain::DoDomainUnload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "DoDomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::AppDomain::GetMarshalledDomainObjRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "GetMarshalledDomainObjRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::AppDomain::ProcessMessageInDomain(::ArrayW<uint8_t> arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage cadMsg, ByRef<::ArrayW<uint8_t>> arrResponse, ByRef<System::Runtime::Remoting::Messaging::CADMethodReturnMessage> cadMrm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "ProcessMessageInDomain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::CADMethodCallMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Remoting::Messaging::CADMethodReturnMessage>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arrRequest, cadMsg, arrResponse, cadMrm);
}
 void System::AppDomain::add_DomainUnload(System::EventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "add_DomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::AppDomain::remove_DomainUnload(System::EventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "remove_DomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::AppDomain::add_UnhandledException(System::UnhandledExceptionEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "add_UnhandledException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UnhandledExceptionEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::AppDomain::remove_UnhandledException(System::UnhandledExceptionEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::AppDomain>::get(),
                            "remove_UnhandledException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UnhandledExceptionEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
