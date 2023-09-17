#pragma once
namespace {
#include "System/Net/zzzz__EndPointManager_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
//  Writing Method size for method: ::System::Net::EndPointManager.AddListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::HttpListener)>(&::System::Net::EndPointManager::AddListener)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x2830e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.AddPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener)>(&::System::Net::EndPointManager::AddPrefix)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28318a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "AddPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.AddPrefixInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener)>(&::System::Net::EndPointManager::AddPrefixInternal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2831628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "AddPrefixInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.GetEPListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPointListener (*)(::StringW, int32_t, ::System::Net::HttpListener, bool)>(&::System::Net::EndPointManager::GetEPListener)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x28319c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "GetEPListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemoveEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::EndPointListener, ::System::Net::IPEndPoint)>(&::System::Net::EndPointManager::RemoveEndPoint)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x28300d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemoveEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemoveListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::HttpListener)>(&::System::Net::EndPointManager::RemoveListener)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2831d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemovePrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener)>(&::System::Net::EndPointManager::RemovePrefix)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2831788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemovePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemovePrefixInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener)>(&::System::Net::EndPointManager::RemovePrefixInternal)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2832120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemovePrefixInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::EndPointManager::__set_ip_to_endpoints(::System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable, "ip_to_endpoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get>(std::forward<::System::Collections::Hashtable>(value));
}
 ::System::Collections::Hashtable ::System::Net::EndPointManager::__get_ip_to_endpoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable, "ip_to_endpoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get>();
}
 void ::System::Net::EndPointManager::AddListener(::System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "AddListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, listener);
}
 void ::System::Net::EndPointManager::AddPrefix(::StringW prefix, ::System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "AddPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, listener);
}
 void ::System::Net::EndPointManager::AddPrefixInternal(::StringW p, ::System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "AddPrefixInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, listener);
}
 ::System::Net::EndPointListener ::System::Net::EndPointManager::GetEPListener(::StringW host, int32_t port, ::System::Net::HttpListener listener, bool secure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "GetEPListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndPointListener, false>(nullptr, ___internal_method, host, port, listener, secure);
}
 void ::System::Net::EndPointManager::RemoveEndPoint(::System::Net::EndPointListener epl, ::System::Net::IPEndPoint ep)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemoveEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, epl, ep);
}
 void ::System::Net::EndPointManager::RemoveListener(::System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemoveListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, listener);
}
 void ::System::Net::EndPointManager::RemovePrefix(::StringW prefix, ::System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemovePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, listener);
}
 void ::System::Net::EndPointManager::RemovePrefixInternal(::StringW prefix, ::System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager>::get(),
                            "RemovePrefixInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, listener);
}
} // end anonymous namespace
