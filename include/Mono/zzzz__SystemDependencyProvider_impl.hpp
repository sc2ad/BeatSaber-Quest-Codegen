#pragma once
#include "Mono/zzzz__SystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "Mono/zzzz__SystemCertificateProvider_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
//  Writing Method size for method: Mono::SystemDependencyProvider.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::SystemDependencyProvider (*)()>(&Mono::SystemDependencyProvider::get_Instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x268523c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemDependencyProvider.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::SystemDependencyProvider::Initialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2685298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemDependencyProvider.Mono_ISystemDependencyProvider_get_CertificateProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::ISystemCertificateProvider (Mono::SystemDependencyProvider::*)()>(&Mono::SystemDependencyProvider::Mono_ISystemDependencyProvider_get_CertificateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2685484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "Mono.ISystemDependencyProvider.get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemDependencyProvider.get_CertificateProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::SystemCertificateProvider (Mono::SystemDependencyProvider::*)()>(&Mono::SystemDependencyProvider::get_CertificateProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268548c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemDependencyProvider.get_X509Pal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::X509PalImpl (Mono::SystemDependencyProvider::*)()>(&Mono::SystemDependencyProvider::get_X509Pal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2685494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "get_X509Pal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemDependencyProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SystemDependencyProvider::*)()>(&Mono::SystemDependencyProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x26853ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Mono::ISystemDependencyProvider
constexpr  Mono::SystemDependencyProvider::operator Mono::ISystemDependencyProvider() const noexcept {
return Mono::ISystemDependencyProvider(::bs_hook::Il2CppWrapperType::instance);
}
 void Mono::SystemDependencyProvider::__set_instance(Mono::SystemDependencyProvider value)  {
::cordl_internals::setStaticField<Mono::SystemDependencyProvider, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get>(std::forward<Mono::SystemDependencyProvider>(value));
}
 Mono::SystemDependencyProvider Mono::SystemDependencyProvider::__get_instance()  {
return ::cordl_internals::getStaticField<Mono::SystemDependencyProvider, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get>();
}
 void Mono::SystemDependencyProvider::__set_syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType Mono::SystemDependencyProvider::__get_syncRoot()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get>();
}
constexpr void Mono::SystemDependencyProvider::__set__CertificateProvider_k__BackingField(Mono::SystemCertificateProvider value)  {
::cordl_internals::setInstanceField<Mono::SystemCertificateProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::SystemCertificateProvider>(value));
}
constexpr Mono::SystemCertificateProvider Mono::SystemDependencyProvider::__get__CertificateProvider_k__BackingField() const {
return ::cordl_internals::getInstanceField<Mono::SystemCertificateProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::SystemDependencyProvider Mono::SystemDependencyProvider::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::SystemDependencyProvider, false>(nullptr, ___internal_method);
}
 void Mono::SystemDependencyProvider::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 Mono::ISystemCertificateProvider Mono::SystemDependencyProvider::Mono_ISystemDependencyProvider_get_CertificateProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "Mono.ISystemDependencyProvider.get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::ISystemCertificateProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::SystemCertificateProvider Mono::SystemDependencyProvider::get_CertificateProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::SystemCertificateProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::X509PalImpl Mono::SystemDependencyProvider::get_X509Pal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            "get_X509Pal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::X509PalImpl, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::SystemDependencyProvider Mono::SystemDependencyProvider::New_ctor()  {
Mono::SystemDependencyProvider o{THROW_UNLESS(::il2cpp_utils::New<Mono::SystemDependencyProvider>())};
return o;
}
 void Mono::SystemDependencyProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemDependencyProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
