#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
namespace {
#include "Mono/Unity/zzzz__X509ChainImplUnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref, bool)>(&::Mono::Unity::X509ChainImplUnityTls::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x268a8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_IsValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x268bf38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_NativeCertificateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268bf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "get_NativeCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_ChainElements)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x268bf68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.AddStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::Mono::Unity::X509ChainImplUnityTls::AddStatus)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x268c244;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainPolicy (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268c350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_ChainStatus)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x268c358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::X509ChainImplUnityTls::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2)>(&::Mono::Unity::X509ChainImplUnityTls::Build)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268c3d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x268c3dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(bool)>(&::Mono::Unity::X509ChainImplUnityTls::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x268c41c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Unity::X509ChainImplUnityTls),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr void ::Mono::Unity::X509ChainImplUnityTls::__set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection ::Mono::Unity::X509ChainImplUnityTls::__get_elements() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Unity::X509ChainImplUnityTls::__set_nativeCertificateChain(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref value)  {
::cordl_internals::setInstanceField<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref>(value));
}
constexpr ::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref ::Mono::Unity::X509ChainImplUnityTls::__get_nativeCertificateChain() const {
return ::cordl_internals::getInstanceField<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Unity::X509ChainImplUnityTls::__set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509ChainPolicy, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::X509Certificates::X509ChainPolicy>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy ::Mono::Unity::X509ChainImplUnityTls::__get_policy() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509ChainPolicy, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Unity::X509ChainImplUnityTls::__set_chainStatusList(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus> ::Mono::Unity::X509ChainImplUnityTls::__get_chainStatusList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Unity::X509ChainImplUnityTls::__set_reverseOrder(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Unity::X509ChainImplUnityTls::__get_reverseOrder() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "nativeCertificateChain", ty: "::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref", modifiers: "", def_value: None }, CppParam { name: "reverseOrder", ty: "bool", modifiers: "", def_value: Some("false") }]
 ::Mono::Unity::X509ChainImplUnityTls::X509ChainImplUnityTls(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref nativeCertificateChain, bool reverseOrder)  : ::System::Security::Cryptography::X509Certificates::X509ChainImpl(THROW_UNLESS(::il2cpp_utils::New<X509ChainImplUnityTls>(nativeCertificateChain, reverseOrder))) {}
/// @param reverseOrder: bool (default: false)
 void ::Mono::Unity::X509ChainImplUnityTls::_ctor(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref nativeCertificateChain, bool reverseOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nativeCertificateChain, reverseOrder);
}
 bool ::Mono::Unity::X509ChainImplUnityTls::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref ::Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "get_NativeCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509list_ref, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection ::Mono::Unity::X509ChainImplUnityTls::get_ChainElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "get_ChainElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Unity::X509ChainImplUnityTls::AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "AddStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 ::System::Security::Cryptography::X509Certificates::X509ChainPolicy ::Mono::Unity::X509ChainImplUnityTls::get_ChainPolicy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "get_ChainPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainPolicy, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> ::Mono::Unity::X509ChainImplUnityTls::get_ChainStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "get_ChainStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Unity::X509ChainImplUnityTls::Build(::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 void ::Mono::Unity::X509ChainImplUnityTls::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Unity::X509ChainImplUnityTls::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
} // end anonymous namespace
