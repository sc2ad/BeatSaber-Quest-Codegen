#pragma once
#include "System/Net/Cache/zzzz__RequestCacheManager_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: System::Net::Cache::RequestCacheManager.GetBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Cache::RequestCacheBinding (*)(::StringW)>(&System::Net::Cache::RequestCacheManager::GetBinding)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x285e850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get(),
                            "GetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Cache::RequestCacheManager.LoadConfigSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Cache::RequestCacheManager::LoadConfigSettings)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x285ea4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get(),
                            "LoadConfigSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::Cache::RequestCacheManager::__set_s_CacheConfigSettings(System::Net::Cache::RequestCachingSectionInternal value)  {
::cordl_internals::setStaticField<System::Net::Cache::RequestCachingSectionInternal, "s_CacheConfigSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>(std::forward<System::Net::Cache::RequestCachingSectionInternal>(value));
}
 System::Net::Cache::RequestCachingSectionInternal System::Net::Cache::RequestCacheManager::__get_s_CacheConfigSettings()  {
return ::cordl_internals::getStaticField<System::Net::Cache::RequestCachingSectionInternal, "s_CacheConfigSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>();
}
 void System::Net::Cache::RequestCacheManager::__set_s_BypassCacheBinding(System::Net::Cache::RequestCacheBinding value)  {
::cordl_internals::setStaticField<System::Net::Cache::RequestCacheBinding, "s_BypassCacheBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>(std::forward<System::Net::Cache::RequestCacheBinding>(value));
}
 System::Net::Cache::RequestCacheBinding System::Net::Cache::RequestCacheManager::__get_s_BypassCacheBinding()  {
return ::cordl_internals::getStaticField<System::Net::Cache::RequestCacheBinding, "s_BypassCacheBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>();
}
 void System::Net::Cache::RequestCacheManager::__set_s_DefaultGlobalBinding(System::Net::Cache::RequestCacheBinding value)  {
::cordl_internals::setStaticField<System::Net::Cache::RequestCacheBinding, "s_DefaultGlobalBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>(std::forward<System::Net::Cache::RequestCacheBinding>(value));
}
 System::Net::Cache::RequestCacheBinding System::Net::Cache::RequestCacheManager::__get_s_DefaultGlobalBinding()  {
return ::cordl_internals::getStaticField<System::Net::Cache::RequestCacheBinding, "s_DefaultGlobalBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>();
}
 void System::Net::Cache::RequestCacheManager::__set_s_DefaultHttpBinding(System::Net::Cache::RequestCacheBinding value)  {
::cordl_internals::setStaticField<System::Net::Cache::RequestCacheBinding, "s_DefaultHttpBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>(std::forward<System::Net::Cache::RequestCacheBinding>(value));
}
 System::Net::Cache::RequestCacheBinding System::Net::Cache::RequestCacheManager::__get_s_DefaultHttpBinding()  {
return ::cordl_internals::getStaticField<System::Net::Cache::RequestCacheBinding, "s_DefaultHttpBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>();
}
 void System::Net::Cache::RequestCacheManager::__set_s_DefaultFtpBinding(System::Net::Cache::RequestCacheBinding value)  {
::cordl_internals::setStaticField<System::Net::Cache::RequestCacheBinding, "s_DefaultFtpBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>(std::forward<System::Net::Cache::RequestCacheBinding>(value));
}
 System::Net::Cache::RequestCacheBinding System::Net::Cache::RequestCacheManager::__get_s_DefaultFtpBinding()  {
return ::cordl_internals::getStaticField<System::Net::Cache::RequestCacheBinding, "s_DefaultFtpBinding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get>();
}
 System::Net::Cache::RequestCacheBinding System::Net::Cache::RequestCacheManager::GetBinding(::StringW internedScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get(),
                            "GetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Cache::RequestCacheBinding, false>(nullptr, ___internal_method, internedScheme);
}
 void System::Net::Cache::RequestCacheManager::LoadConfigSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Cache::RequestCacheManager>::get(),
                            "LoadConfigSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
