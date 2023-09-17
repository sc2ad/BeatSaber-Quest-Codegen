#pragma once
namespace {
#include "System/Net/Configuration/zzzz__DefaultProxySectionInternal_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetDefaultProxy_UsingOldMonoCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "GetDefaultProxy_UsingOldMonoCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetSystemWebProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetSystemWebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "GetSystemWebProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.get_ClassSyncObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::get_ClassSyncObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x285e50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "get_ClassSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.GetSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::DefaultProxySectionInternal (*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::GetSection)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x285e5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "GetSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal.get_WebProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy (::System::Net::Configuration::DefaultProxySectionInternal::*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::get_WebProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "get_WebProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySectionInternal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::DefaultProxySectionInternal::*)()>(&::System::Net::Configuration::DefaultProxySectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::Configuration::DefaultProxySectionInternal::__set_webProxy(::System::Net::IWebProxy value)  {
::cordl_internals::setInstanceField<::System::Net::IWebProxy, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::IWebProxy>(value));
}
constexpr ::System::Net::IWebProxy ::System::Net::Configuration::DefaultProxySectionInternal::__get_webProxy() const {
return ::cordl_internals::getInstanceField<::System::Net::IWebProxy, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Net::Configuration::DefaultProxySectionInternal::__set_classSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "classSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType ::System::Net::Configuration::DefaultProxySectionInternal::__get_classSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "classSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get>();
}
 ::System::Net::IWebProxy ::System::Net::Configuration::DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "GetDefaultProxy_UsingOldMonoCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy, false>(nullptr, ___internal_method);
}
 ::System::Net::IWebProxy ::System::Net::Configuration::DefaultProxySectionInternal::GetSystemWebProxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "GetSystemWebProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy, false>(nullptr, ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::Configuration::DefaultProxySectionInternal::get_ClassSyncObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "get_ClassSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 ::System::Net::Configuration::DefaultProxySectionInternal ::System::Net::Configuration::DefaultProxySectionInternal::GetSection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "GetSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::DefaultProxySectionInternal, false>(nullptr, ___internal_method);
}
 ::System::Net::IWebProxy ::System::Net::Configuration::DefaultProxySectionInternal::get_WebProxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            "get_WebProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Net::Configuration::DefaultProxySectionInternal::DefaultProxySectionInternal()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultProxySectionInternal>())) {}
 void ::System::Net::Configuration::DefaultProxySectionInternal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySectionInternal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
