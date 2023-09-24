#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixIoctlRequest_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixAddressFamily_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_mtu_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifconf_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.socket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::NetworkInformation::AixAddressFamily, int32_t, int32_t)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::socket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2859cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "socket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixAddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::close)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2859d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, System::Net::NetworkInformation::AixIoctlRequest, ByRef<int32_t>)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2859de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, System::Net::NetworkInformation::AixIoctlRequest, ByRef<System::Net::NetworkInformation::AixStructs::ifconf>)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2859e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::NetworkInformation::AixStructs::ifconf>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, System::Net::NetworkInformation::AixIoctlRequest, ByRef<System::Net::NetworkInformation::AixStructs::ifreq_flags>)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2859f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::NetworkInformation::AixStructs::ifreq_flags>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, System::Net::NetworkInformation::AixIoctlRequest, ByRef<System::Net::NetworkInformation::AixStructs::ifreq_mtu>)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2859fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::NetworkInformation::AixStructs::ifreq_mtu>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.ByteArrayCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, void*, int32_t)>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::ByteArrayCopy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285a060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ByteArrayCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI.GetAllNetworkInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::NetworkInformation::NetworkInterface> (System::Net::NetworkInformation::AixNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xe8c;
  constexpr static std::size_t addrs = 0x285a07c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::AixNetworkInterfaceAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixNetworkInterfaceAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::AixNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::AixNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285b174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::socket(System::Net::NetworkInformation::AixAddressFamily family, int32_t type, int32_t protocol)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "socket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixAddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, family, type, protocol);
}
 int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::close(int32_t fd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd);
}
 int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, System::Net::NetworkInformation::AixIoctlRequest request, ByRef<int32_t> arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
 int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, System::Net::NetworkInformation::AixIoctlRequest request, ByRef<System::Net::NetworkInformation::AixStructs::ifconf> arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::NetworkInformation::AixStructs::ifconf>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
 int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, System::Net::NetworkInformation::AixIoctlRequest request, ByRef<System::Net::NetworkInformation::AixStructs::ifreq_flags> arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::NetworkInformation::AixStructs::ifreq_flags>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
 int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, System::Net::NetworkInformation::AixIoctlRequest request, ByRef<System::Net::NetworkInformation::AixStructs::ifreq_mtu> arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ioctl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixIoctlRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::NetworkInformation::AixStructs::ifreq_mtu>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fd, request, arg);
}
 void System::Net::NetworkInformation::AixNetworkInterfaceAPI::ByteArrayCopy(void* dst, void* src, int32_t elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "ByteArrayCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dst, src, elements);
}
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> System::Net::NetworkInformation::AixNetworkInterfaceAPI::GetAllNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            "GetAllNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::NetworkInformation::NetworkInterface>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::NetworkInformation::AixNetworkInterfaceAPI System::Net::NetworkInformation::AixNetworkInterfaceAPI::New_ctor()  {
System::Net::NetworkInformation::AixNetworkInterfaceAPI o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::AixNetworkInterfaceAPI>())};
return o;
}
 void System::Net::NetworkInformation::AixNetworkInterfaceAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
