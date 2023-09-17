#pragma once
namespace {
#include "Mono/Security/X509/zzzz__X509StoreManager_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUserPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUserPath)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2290794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_CurrentUserPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachinePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachinePath)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2290894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_LocalMachinePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Stores (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUser)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x229097c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_CurrentUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Stores (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2290a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_LocalMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_TrustedRootCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection (*)()>(&::Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x228e94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_TrustedRootCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Mono::Security::X509::X509StoreManager::__set__userPath(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "_userPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Mono::Security::X509::X509StoreManager::__get__userPath()  {
return ::cordl_internals::getStaticField<::StringW, "_userPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>();
}
 void ::Mono::Security::X509::X509StoreManager::__set__localMachinePath(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "_localMachinePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Mono::Security::X509::X509StoreManager::__get__localMachinePath()  {
return ::cordl_internals::getStaticField<::StringW, "_localMachinePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>();
}
 void ::Mono::Security::X509::X509StoreManager::__set__userStore(::Mono::Security::X509::X509Stores value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores, "_userStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>(std::forward<::Mono::Security::X509::X509Stores>(value));
}
 ::Mono::Security::X509::X509Stores ::Mono::Security::X509::X509StoreManager::__get__userStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores, "_userStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>();
}
 void ::Mono::Security::X509::X509StoreManager::__set__machineStore(::Mono::Security::X509::X509Stores value)  {
::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores, "_machineStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>(std::forward<::Mono::Security::X509::X509Stores>(value));
}
 ::Mono::Security::X509::X509Stores ::Mono::Security::X509::X509StoreManager::__get__machineStore()  {
return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores, "_machineStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get>();
}
 ::StringW ::Mono::Security::X509::X509StoreManager::get_CurrentUserPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_CurrentUserPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW ::Mono::Security::X509::X509StoreManager::get_LocalMachinePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_LocalMachinePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::Mono::Security::X509::X509Stores ::Mono::Security::X509::X509StoreManager::get_CurrentUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_CurrentUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores, false>(nullptr, ___internal_method);
}
 ::Mono::Security::X509::X509Stores ::Mono::Security::X509::X509StoreManager::get_LocalMachine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_LocalMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores, false>(nullptr, ___internal_method);
}
 ::Mono::Security::X509::X509CertificateCollection ::Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager>::get(),
                            "get_TrustedRootCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
