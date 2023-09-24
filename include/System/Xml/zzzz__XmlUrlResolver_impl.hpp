#pragma once
#include "System/Xml/zzzz__XmlResolver_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Xml/zzzz__XmlUrlResolver_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::*)()>(&System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2716030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27163ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ofObjectToReturn", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "absoluteUri", ty: "System::Uri", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "System::Xml::XmlUrlResolver", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::System__Xml__XmlUrlResolver___GetEntityAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> __t__builder, System::Type ofObjectToReturn, System::Uri absoluteUri, System::Xml::XmlUrlResolver __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->ofObjectToReturn = ofObjectToReturn;
this->absoluteUri = absoluteUri;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType>, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__set_ofObjectToReturn(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__get_ofObjectToReturn() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__set_absoluteUri(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x28>(this->__instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__get_absoluteUri() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x28>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__set___4__this(System::Xml::XmlUrlResolver value)  {
::cordl_internals::setInstanceField<System::Xml::XmlUrlResolver, 0x30>(this->__instance, std::forward<System::Xml::XmlUrlResolver>(value));
}
constexpr System::Xml::XmlUrlResolver System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlUrlResolver, 0x30>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>, 0x38>(this->__instance);
}
 void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Xml::XmlUrlResolver.get_DownloadManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlDownloadManager (*)()>(&System::Xml::XmlUrlResolver::get_DownloadManager)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2715cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            "get_DownloadManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlUrlResolver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUrlResolver::*)()>(&System::Xml::XmlUrlResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2715d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlUrlResolver.GetEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::XmlUrlResolver::*)(System::Uri, ::StringW, System::Type)>(&System::Xml::XmlUrlResolver::GetEntity)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2715da4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlUrlResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlUrlResolver.ResolveUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Xml::XmlUrlResolver::*)(System::Uri, ::StringW)>(&System::Xml::XmlUrlResolver::ResolveUri)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2715f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlUrlResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlUrlResolver.GetEntityAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> (System::Xml::XmlUrlResolver::*)(System::Uri, ::StringW, System::Type)>(&System::Xml::XmlUrlResolver::GetEntityAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2715f24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlUrlResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
 void System::Xml::XmlUrlResolver::__set_s_DownloadManager(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_DownloadManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Xml::XmlUrlResolver::__get_s_DownloadManager()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_DownloadManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get>();
}
constexpr void System::Xml::XmlUrlResolver::__set__credentials(System::Net::ICredentials value)  {
::cordl_internals::setInstanceField<System::Net::ICredentials, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ICredentials>(value));
}
constexpr System::Net::ICredentials System::Xml::XmlUrlResolver::__get__credentials() const {
return ::cordl_internals::getInstanceField<System::Net::ICredentials, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlUrlResolver::__set__proxy(System::Net::IWebProxy value)  {
::cordl_internals::setInstanceField<System::Net::IWebProxy, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IWebProxy>(value));
}
constexpr System::Net::IWebProxy System::Xml::XmlUrlResolver::__get__proxy() const {
return ::cordl_internals::getInstanceField<System::Net::IWebProxy, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlUrlResolver::__set__cachePolicy(System::Net::Cache::RequestCachePolicy value)  {
::cordl_internals::setInstanceField<System::Net::Cache::RequestCachePolicy, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Cache::RequestCachePolicy>(value));
}
constexpr System::Net::Cache::RequestCachePolicy System::Xml::XmlUrlResolver::__get__cachePolicy() const {
return ::cordl_internals::getInstanceField<System::Net::Cache::RequestCachePolicy, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::XmlDownloadManager System::Xml::XmlUrlResolver::get_DownloadManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            "get_DownloadManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlDownloadManager, false>(nullptr, ___internal_method);
}
 System::Xml::XmlUrlResolver System::Xml::XmlUrlResolver::New_ctor()  {
System::Xml::XmlUrlResolver o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::XmlUrlResolver>())};
return o;
}
 void System::Xml::XmlUrlResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Xml::XmlUrlResolver::GetEntity(System::Uri absoluteUri, ::StringW role, System::Type ofObjectToReturn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            "GetEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, absoluteUri, role, ofObjectToReturn);
}
 System::Uri System::Xml::XmlUrlResolver::ResolveUri(System::Uri baseUri, ::StringW relativeUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            "ResolveUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method, baseUri, relativeUri);
}
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> System::Xml::XmlUrlResolver::GetEntityAsync(System::Uri absoluteUri, ::StringW role, System::Type ofObjectToReturn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlUrlResolver>::get(),
                            "GetEntityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, absoluteUri, role, ofObjectToReturn);
}
