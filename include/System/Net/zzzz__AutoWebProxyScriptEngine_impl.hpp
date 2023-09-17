#pragma once
namespace {
#include "System/Net/zzzz__AutoWebProxyScriptEngine_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri, ByRef<::System::Collections::Generic::IList_1<::StringW>>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2826bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine>::get(),
                            "GetProxies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri, ByRef<::System::Collections::Generic::IList_1<::StringW>>, ByRef<int32_t>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2826bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine>::get(),
                            "GetProxies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri destination, ByRef<::System::Collections::Generic::IList_1<::StringW>> proxyList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine>::get(),
                            "GetProxies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, destination, proxyList);
}
 bool ::System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri destination, ByRef<::System::Collections::Generic::IList_1<::StringW>> proxyList, ByRef<int32_t> syncStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::AutoWebProxyScriptEngine>::get(),
                            "GetProxies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::IList_1<::StringW>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, destination, proxyList, syncStatus);
}
} // end anonymous namespace
