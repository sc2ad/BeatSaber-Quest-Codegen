#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__IVRApplications_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationError_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationProperty_def.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationTransitionState_def.hpp"
#include "OVR/OpenVR/zzzz__AppOverrideKeys_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x26481d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::*)(::StringW, bool)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26482a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::*)(::StringW, bool, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x26482c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::____OVR__OpenVR__IVRApplications___AddApplicationManifest(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___AddApplicationManifest>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::Invoke(::StringW pchApplicationManifestFullPath, bool bTemporary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchApplicationManifestFullPath, bTemporary);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::BeginInvoke(::StringW pchApplicationManifestFullPath, bool bTemporary, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchApplicationManifestFullPath, bTemporary, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2648380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2648468;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::Invoke(::StringW pchApplicationManifestFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchApplicationManifestFullPath);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::BeginInvoke(::StringW pchApplicationManifestFullPath, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchApplicationManifestFullPath, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26484b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2648598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26485b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::____OVR__OpenVR__IVRApplications___IsApplicationInstalled(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___IsApplicationInstalled>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26485e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264869c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26486b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26486d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::____OVR__OpenVR__IVRApplications___GetApplicationCount(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationCount>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26486f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::*)(uint32_t, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26487bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::*)(uint32_t, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26487d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648874;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::Invoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::BeginInvoke(uint32_t unApplicationIndex, ::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x264889c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::*)(uint32_t, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648960;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::*)(uint32_t, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2648974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648a18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::Invoke(uint32_t unProcessId, ::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::BeginInvoke(uint32_t unProcessId, ::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2648a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648b14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2648b28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648b48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::____OVR__OpenVR__IVRApplications___LaunchApplication(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___LaunchApplication>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2648b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::*)(::StringW, ::StringW, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648c48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::*)(::StringW, ::StringW, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2648c5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648d04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint32_t unKeys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint32_t unKeys, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchTemplateAppKey, pchNewAppKey, pKeys, unKeys, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2648d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::*)(::StringW, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648e04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::*)(::StringW, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648e18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::Invoke(::StringW pchMimeType, ::StringW pchArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchArgs);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::BeginInvoke(::StringW pchMimeType, ::StringW pchArgs, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchArgs, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2648e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2648f3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2648f50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2648f70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2648f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264906c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2649080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26490a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26490c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::*)(uint32_t, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264918c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::*)(uint32_t, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26491a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2649230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::____OVR__OpenVR__IVRApplications___IdentifyApplication(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___IdentifyApplication>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::Invoke(uint32_t unProcessId, ::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, unProcessId, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::BeginInvoke(uint32_t unProcessId, ::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, unProcessId, pchAppKey, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2649258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264932c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2649340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2649360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::____OVR__OpenVR__IVRApplications___GetApplicationProcessId(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationProcessId>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2649388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::*)(::OVR::OpenVR::EVRApplicationError)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264944c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::*)(::OVR::OpenVR::EVRApplicationError, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2649460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26494e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRApplicationError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, error);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRApplicationError error, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, error, callback, object);
}
 ::cordl_internals::intptr_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x264950c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26495e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ::System::Text::StringBuilder, uint32_t, ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::BeginInvoke)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26495f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::*)(ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26496f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, ByRef<::OVR::OpenVR::EVRApplicationError> peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ::System::Text::StringBuilder pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString::EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, peError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2649720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ByRef<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26497f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x264980c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::*)(ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26498d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, peError);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, peError, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool::EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, peError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2649900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ByRef<::OVR::OpenVR::EVRApplicationError>)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26499d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::*)(::StringW, ::OVR::OpenVR::EVRApplicationProperty, ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26499ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::*)(ByRef<::OVR::OpenVR::EVRApplicationError>, ::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2649ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint64_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::Invoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, peError);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::BeginInvoke(::StringW pchAppKey, ::OVR::OpenVR::EVRApplicationProperty eProperty, ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, eProperty, peError, callback, object);
}
 uint64_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64::EndInvoke(ByRef<::OVR::OpenVR::EVRApplicationError> peError, ::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::EVRApplicationError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method, peError, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2649ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::*)(::StringW, bool)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2649bb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::*)(::StringW, bool, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2649bd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2649c68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::Invoke(::StringW pchAppKey, bool bAutoLaunch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, bAutoLaunch);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::BeginInvoke(::StringW pchAppKey, bool bAutoLaunch, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, bAutoLaunch, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2649c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2649d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2649d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2649d98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2649dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::*)(::StringW, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2649e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::*)(::StringW, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2649eac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2649ed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::Invoke(::StringW pchAppKey, ::StringW pchMimeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, pchMimeType);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::BeginInvoke(::StringW pchAppKey, ::StringW pchMimeType, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, pchMimeType, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2649efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::*)(::StringW, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2649fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::*)(::StringW, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2649fe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::Invoke(::StringW pchMimeType, ::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x264a0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::*)(::StringW, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::*)(::StringW, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x264a194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a22c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::Invoke(::StringW pchAppKey, ::System::Text::StringBuilder pchMimeTypesBuffer, uint32_t unMimeTypesBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::BeginInvoke(::StringW pchAppKey, ::System::Text::StringBuilder pchMimeTypesBuffer, uint32_t unMimeTypesBuffer, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x264a254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::*)(::StringW, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a32c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::*)(::StringW, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x264a340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a3d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::Invoke(::StringW pchMimeType, ::System::Text::StringBuilder pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::BeginInvoke(::StringW pchMimeType, ::System::Text::StringBuilder pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x264a400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::*)(uint32_t, ::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a4c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::*)(uint32_t, ::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::BeginInvoke)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x264a4d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a57c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::Invoke(uint32_t unHandle, ::System::Text::StringBuilder pchArgs, uint32_t unArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, unHandle, pchArgs, unArgs);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::BeginInvoke(uint32_t unHandle, ::System::Text::StringBuilder pchArgs, uint32_t unArgs, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, unHandle, pchArgs, unArgs, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x264a5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::*)(::System::Text::StringBuilder, uint32_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a67c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::*)(::System::Text::StringBuilder, uint32_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x264a690;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::____OVR__OpenVR__IVRApplications___GetStartingApplication(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetStartingApplication>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::Invoke(::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::BeginInvoke(::System::Text::StringBuilder pchAppKeyBuffer, uint32_t unAppKeyBufferLen, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x264a74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationTransitionState (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a808;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x264a81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationTransitionState (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a83c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::____OVR__OpenVR__IVRApplications___GetTransitionState(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetTransitionState>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationTransitionState ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationTransitionState, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 ::OVR::OpenVR::EVRApplicationTransitionState ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationTransitionState, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x264a864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::*)(::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a938;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x264a94c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264a96c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::Invoke(::StringW pchAppKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchAppKey);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::BeginInvoke(::StringW pchAppKey, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchAppKey, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x264a994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::*)(::OVR::OpenVR::EVRApplicationTransitionState)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264aa58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::*)(::OVR::OpenVR::EVRApplicationTransitionState, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x264aa6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264aaf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::cordl_internals::intptr_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::Invoke(::OVR::OpenVR::EVRApplicationTransitionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationTransitionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, state);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRApplicationTransitionState state, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRApplicationTransitionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, state, callback, object);
}
 ::cordl_internals::intptr_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x264ab18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264abd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x264abe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264ac08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 bool ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x264ac30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264ad08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::*)(::StringW, ::StringW, ::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x264ad1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264ad48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::____OVR__OpenVR__IVRApplications___LaunchInternalProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___LaunchInternalProcess>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::Invoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::BeginInvoke(::StringW pchBinaryPath, ::StringW pchArguments, ::StringW pchWorkingDirectory, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, pchBinaryPath, pchArguments, pchWorkingDirectory, callback, object);
}
 ::OVR::OpenVR::EVRApplicationError ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRApplicationError, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x264ad70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::*)()>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264ae2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x264ae40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::*)(::System::IAsyncResult)>(&::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x264ae60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>(object, method))) {}
 void ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, object);
}
 uint32_t ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "AddApplicationManifest", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RemoveApplicationManifest", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsApplicationInstalled", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationCount", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationKeyByIndex", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationKeyByProcessId", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LaunchApplication", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LaunchTemplateApplication", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LaunchApplicationFromMimeType", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LaunchDashboardOverlay", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CancelApplicationLaunch", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IdentifyApplication", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationProcessId", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationsErrorNameFromEnum", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationPropertyString", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationPropertyBool", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationPropertyUint64", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetApplicationAutoLaunch", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationAutoLaunch", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetDefaultApplicationForMimeType", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetDefaultApplicationForMimeType", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationSupportedMimeTypes", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationsThatSupportMimeType", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationLaunchArguments", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetStartingApplication", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetTransitionState", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PerformApplicationPrelaunchCheck", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetApplicationsTransitionStateNameFromEnum", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsQuitUserPromptRequested", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LaunchInternalProcess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentSceneProcessId", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId", modifiers: "", def_value: Some("csnull") }]
constexpr ::OVR::OpenVR::IVRApplications::IVRApplications(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest AddApplicationManifest, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest RemoveApplicationManifest, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled IsApplicationInstalled, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount GetApplicationCount, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex GetApplicationKeyByIndex, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId GetApplicationKeyByProcessId, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication LaunchApplication, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication LaunchTemplateApplication, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType LaunchApplicationFromMimeType, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay LaunchDashboardOverlay, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch CancelApplicationLaunch, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication IdentifyApplication, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId GetApplicationProcessId, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum GetApplicationsErrorNameFromEnum, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString GetApplicationPropertyString, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool GetApplicationPropertyBool, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 GetApplicationPropertyUint64, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch SetApplicationAutoLaunch, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch GetApplicationAutoLaunch, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType SetDefaultApplicationForMimeType, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType GetDefaultApplicationForMimeType, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes GetApplicationSupportedMimeTypes, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType GetApplicationsThatSupportMimeType, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments GetApplicationLaunchArguments, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication GetStartingApplication, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState GetTransitionState, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck PerformApplicationPrelaunchCheck, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum GetApplicationsTransitionStateNameFromEnum, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested IsQuitUserPromptRequested, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess LaunchInternalProcess, ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId GetCurrentSceneProcessId) noexcept : ::bs_hook::ValueTypeWrapper() {this->AddApplicationManifest = AddApplicationManifest;
this->RemoveApplicationManifest = RemoveApplicationManifest;
this->IsApplicationInstalled = IsApplicationInstalled;
this->GetApplicationCount = GetApplicationCount;
this->GetApplicationKeyByIndex = GetApplicationKeyByIndex;
this->GetApplicationKeyByProcessId = GetApplicationKeyByProcessId;
this->LaunchApplication = LaunchApplication;
this->LaunchTemplateApplication = LaunchTemplateApplication;
this->LaunchApplicationFromMimeType = LaunchApplicationFromMimeType;
this->LaunchDashboardOverlay = LaunchDashboardOverlay;
this->CancelApplicationLaunch = CancelApplicationLaunch;
this->IdentifyApplication = IdentifyApplication;
this->GetApplicationProcessId = GetApplicationProcessId;
this->GetApplicationsErrorNameFromEnum = GetApplicationsErrorNameFromEnum;
this->GetApplicationPropertyString = GetApplicationPropertyString;
this->GetApplicationPropertyBool = GetApplicationPropertyBool;
this->GetApplicationPropertyUint64 = GetApplicationPropertyUint64;
this->SetApplicationAutoLaunch = SetApplicationAutoLaunch;
this->GetApplicationAutoLaunch = GetApplicationAutoLaunch;
this->SetDefaultApplicationForMimeType = SetDefaultApplicationForMimeType;
this->GetDefaultApplicationForMimeType = GetDefaultApplicationForMimeType;
this->GetApplicationSupportedMimeTypes = GetApplicationSupportedMimeTypes;
this->GetApplicationsThatSupportMimeType = GetApplicationsThatSupportMimeType;
this->GetApplicationLaunchArguments = GetApplicationLaunchArguments;
this->GetStartingApplication = GetStartingApplication;
this->GetTransitionState = GetTransitionState;
this->PerformApplicationPrelaunchCheck = PerformApplicationPrelaunchCheck;
this->GetApplicationsTransitionStateNameFromEnum = GetApplicationsTransitionStateNameFromEnum;
this->IsQuitUserPromptRequested = IsQuitUserPromptRequested;
this->LaunchInternalProcess = LaunchInternalProcess;
this->GetCurrentSceneProcessId = GetCurrentSceneProcessId;
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_AddApplicationManifest(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest, 0x0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest ::OVR::OpenVR::IVRApplications::__get_AddApplicationManifest() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___AddApplicationManifest, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_RemoveApplicationManifest(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest, 0x8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest ::OVR::OpenVR::IVRApplications::__get_RemoveApplicationManifest() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___RemoveApplicationManifest, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_IsApplicationInstalled(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled, 0x10>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled ::OVR::OpenVR::IVRApplications::__get_IsApplicationInstalled() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsApplicationInstalled, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationCount(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount, 0x18>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount ::OVR::OpenVR::IVRApplications::__get_GetApplicationCount() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationCount, 0x18>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationKeyByIndex(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex, 0x20>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex ::OVR::OpenVR::IVRApplications::__get_GetApplicationKeyByIndex() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByIndex, 0x20>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationKeyByProcessId(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId, 0x28>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId ::OVR::OpenVR::IVRApplications::__get_GetApplicationKeyByProcessId() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationKeyByProcessId, 0x28>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_LaunchApplication(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication, 0x30>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication ::OVR::OpenVR::IVRApplications::__get_LaunchApplication() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplication, 0x30>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_LaunchTemplateApplication(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication, 0x38>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication ::OVR::OpenVR::IVRApplications::__get_LaunchTemplateApplication() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchTemplateApplication, 0x38>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_LaunchApplicationFromMimeType(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType, 0x40>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType ::OVR::OpenVR::IVRApplications::__get_LaunchApplicationFromMimeType() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchApplicationFromMimeType, 0x40>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_LaunchDashboardOverlay(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay, 0x48>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay ::OVR::OpenVR::IVRApplications::__get_LaunchDashboardOverlay() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchDashboardOverlay, 0x48>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_CancelApplicationLaunch(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch, 0x50>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch ::OVR::OpenVR::IVRApplications::__get_CancelApplicationLaunch() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___CancelApplicationLaunch, 0x50>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_IdentifyApplication(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication, 0x58>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication ::OVR::OpenVR::IVRApplications::__get_IdentifyApplication() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IdentifyApplication, 0x58>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationProcessId(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId, 0x60>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId ::OVR::OpenVR::IVRApplications::__get_GetApplicationProcessId() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationProcessId, 0x60>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationsErrorNameFromEnum(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum, 0x68>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum ::OVR::OpenVR::IVRApplications::__get_GetApplicationsErrorNameFromEnum() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsErrorNameFromEnum, 0x68>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationPropertyString(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString, 0x70>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString ::OVR::OpenVR::IVRApplications::__get_GetApplicationPropertyString() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyString, 0x70>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationPropertyBool(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool, 0x78>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool ::OVR::OpenVR::IVRApplications::__get_GetApplicationPropertyBool() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyBool, 0x78>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationPropertyUint64(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64, 0x80>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64 ::OVR::OpenVR::IVRApplications::__get_GetApplicationPropertyUint64() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationPropertyUint64, 0x80>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_SetApplicationAutoLaunch(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch, 0x88>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch ::OVR::OpenVR::IVRApplications::__get_SetApplicationAutoLaunch() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetApplicationAutoLaunch, 0x88>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationAutoLaunch(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch, 0x90>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch ::OVR::OpenVR::IVRApplications::__get_GetApplicationAutoLaunch() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationAutoLaunch, 0x90>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_SetDefaultApplicationForMimeType(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType, 0x98>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType ::OVR::OpenVR::IVRApplications::__get_SetDefaultApplicationForMimeType() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___SetDefaultApplicationForMimeType, 0x98>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetDefaultApplicationForMimeType(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType, 0xa0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType ::OVR::OpenVR::IVRApplications::__get_GetDefaultApplicationForMimeType() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetDefaultApplicationForMimeType, 0xa0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationSupportedMimeTypes(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes, 0xa8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes ::OVR::OpenVR::IVRApplications::__get_GetApplicationSupportedMimeTypes() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationSupportedMimeTypes, 0xa8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationsThatSupportMimeType(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType, 0xb0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType ::OVR::OpenVR::IVRApplications::__get_GetApplicationsThatSupportMimeType() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsThatSupportMimeType, 0xb0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationLaunchArguments(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments, 0xb8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments ::OVR::OpenVR::IVRApplications::__get_GetApplicationLaunchArguments() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationLaunchArguments, 0xb8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetStartingApplication(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication, 0xc0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication ::OVR::OpenVR::IVRApplications::__get_GetStartingApplication() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetStartingApplication, 0xc0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetTransitionState(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState, 0xc8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState ::OVR::OpenVR::IVRApplications::__get_GetTransitionState() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetTransitionState, 0xc8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_PerformApplicationPrelaunchCheck(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck, 0xd0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck ::OVR::OpenVR::IVRApplications::__get_PerformApplicationPrelaunchCheck() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___PerformApplicationPrelaunchCheck, 0xd0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetApplicationsTransitionStateNameFromEnum(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum, 0xd8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum ::OVR::OpenVR::IVRApplications::__get_GetApplicationsTransitionStateNameFromEnum() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetApplicationsTransitionStateNameFromEnum, 0xd8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_IsQuitUserPromptRequested(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested, 0xe0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested ::OVR::OpenVR::IVRApplications::__get_IsQuitUserPromptRequested() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___IsQuitUserPromptRequested, 0xe0>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_LaunchInternalProcess(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess, 0xe8>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess ::OVR::OpenVR::IVRApplications::__get_LaunchInternalProcess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___LaunchInternalProcess, 0xe8>(this->__instance);
}
constexpr void ::OVR::OpenVR::IVRApplications::__set_GetCurrentSceneProcessId(::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId, 0xf0>(this->__instance, std::forward<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId>(value));
}
constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId ::OVR::OpenVR::IVRApplications::__get_GetCurrentSceneProcessId() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::____OVR__OpenVR__IVRApplications___GetCurrentSceneProcessId, 0xf0>(this->__instance);
}
} // end anonymous namespace
