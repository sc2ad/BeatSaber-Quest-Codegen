#pragma once
#include "LiteNetLib/zzzz__NetUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "LiteNetLib/zzzz__LocalAddrType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: LiteNetLib::NetUtils.MakeEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint (*)(::StringW, int32_t)>(&LiteNetLib::NetUtils::MakeEndPoint)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2087ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "MakeEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.ResolveAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress (*)(::StringW)>(&LiteNetLib::NetUtils::ResolveAddress)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x208db3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "ResolveAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.ResolveAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress (*)(::StringW, System::Net::Sockets::AddressFamily)>(&LiteNetLib::NetUtils::ResolveAddress)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x20927e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "ResolveAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.ResolveAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::IPAddress> (*)(::StringW)>(&LiteNetLib::NetUtils::ResolveAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20928b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "ResolveAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.GetLocalIpList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW> (*)(LiteNetLib::LocalAddrType)>(&LiteNetLib::NetUtils::GetLocalIpList)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x20928d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "GetLocalIpList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LocalAddrType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.GetLocalIpList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<::StringW>, LiteNetLib::LocalAddrType)>(&LiteNetLib::NetUtils::GetLocalIpList)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x2092978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "GetLocalIpList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LocalAddrType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.GetLocalIp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(LiteNetLib::LocalAddrType)>(&LiteNetLib::NetUtils::GetLocalIp)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2087c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "GetLocalIp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LocalAddrType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.PrintInterfaceInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::NetUtils::PrintInterfaceInfos)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x20931c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "PrintInterfaceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetUtils.RelativeSequenceNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&LiteNetLib::NetUtils::RelativeSequenceNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20913f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "RelativeSequenceNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void LiteNetLib::NetUtils::__set_IpList(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<::StringW>, "IpList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get>(std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
 System::Collections::Generic::List_1<::StringW> LiteNetLib::NetUtils::__get_IpList()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<::StringW>, "IpList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get>();
}
 System::Net::IPEndPoint LiteNetLib::NetUtils::MakeEndPoint(::StringW hostStr, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "MakeEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPEndPoint, false>(nullptr, ___internal_method, hostStr, port);
}
 System::Net::IPAddress LiteNetLib::NetUtils::ResolveAddress(::StringW hostStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "ResolveAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPAddress, false>(nullptr, ___internal_method, hostStr);
}
 System::Net::IPAddress LiteNetLib::NetUtils::ResolveAddress(::StringW hostStr, System::Net::Sockets::AddressFamily addressFamily)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "ResolveAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPAddress, false>(nullptr, ___internal_method, hostStr, addressFamily);
}
 ::ArrayW<System::Net::IPAddress> LiteNetLib::NetUtils::ResolveAddresses(::StringW hostStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "ResolveAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::IPAddress>, false>(nullptr, ___internal_method, hostStr);
}
 System::Collections::Generic::List_1<::StringW> LiteNetLib::NetUtils::GetLocalIpList(LiteNetLib::LocalAddrType addrType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "GetLocalIpList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LocalAddrType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(nullptr, ___internal_method, addrType);
}
 void LiteNetLib::NetUtils::GetLocalIpList(System::Collections::Generic::IList_1<::StringW> targetList, LiteNetLib::LocalAddrType addrType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "GetLocalIpList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LocalAddrType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetList, addrType);
}
 ::StringW LiteNetLib::NetUtils::GetLocalIp(LiteNetLib::LocalAddrType addrType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "GetLocalIp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::LocalAddrType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, addrType);
}
 void LiteNetLib::NetUtils::PrintInterfaceInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "PrintInterfaceInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 int32_t LiteNetLib::NetUtils::RelativeSequenceNumber(int32_t number, int32_t expected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetUtils>::get(),
                            "RelativeSequenceNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, number, expected);
}
