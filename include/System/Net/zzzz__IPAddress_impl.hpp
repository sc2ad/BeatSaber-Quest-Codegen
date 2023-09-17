#pragma once
#include "System/Net/zzzz__IPAddress_impl.hpp"
namespace {
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27f90c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_IsIPv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27f90d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_IsIPv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_PrivateAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_PrivateAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f90e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_PrivateAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.set_PrivateAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(uint32_t)>(&::System::Net::IPAddress::set_PrivateAddress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27f90e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "set_PrivateAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_PrivateScopeId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_PrivateScopeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f90f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_PrivateScopeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.set_PrivateScopeId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(uint32_t)>(&::System::Net::IPAddress::set_PrivateScopeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27f9100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "set_PrivateScopeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(int64_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27f9110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::ArrayW<uint8_t>, int64_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27f9194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::System::ReadOnlySpan_1<uint8_t>, int64_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x27f9260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(void*, int32_t, uint32_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27f93e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::ArrayW<uint16_t>, uint32_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27f949c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::ArrayW<uint8_t>)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27f94d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x27f953c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Net::IPAddress>)>(&::System::Net::IPAddress::TryParse)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27f968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::IPAddress>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress (*)(::StringW)>(&::System::Net::IPAddress::Parse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27f98f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.TryWriteBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::IPAddress::*)(::System::Span_1<uint8_t>, ByRef<int32_t>)>(&::System::Net::IPAddress::TryWriteBytes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27f9990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "TryWriteBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.WriteIPv6Bytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::System::Span_1<uint8_t>)>(&::System::Net::IPAddress::WriteIPv6Bytes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27f9aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "WriteIPv6Bytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.WriteIPv4Bytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::IPAddress::*)(::System::Span_1<uint8_t>)>(&::System::Net::IPAddress::WriteIPv4Bytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27f9b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "WriteIPv4Bytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.GetAddressBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::GetAddressBytes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27f9b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "GetAddressBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_AddressFamily
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_AddressFamily)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27f9cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_AddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_ScopeId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_ScopeId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27f9cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_ScopeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27f9d44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::IPAddress),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.IsLoopback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::IPAddress)>(&::System::Net::IPAddress::IsLoopback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27f9e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "IsLoopback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6Multicast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6Multicast)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27f9f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_IsIPv6Multicast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::IPAddress::*)(::bs_hook::Il2CppWrapperType, bool)>(&::System::Net::IPAddress::Equals)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27f9f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::IPAddress::*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::IPAddress::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fa080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::IPAddress),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x27fa088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::IPAddress),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.MapToIPv6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::MapToIPv6)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27fa4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "MapToIPv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.ThrowAddressNullException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::Net::IPAddress::ThrowAddressNullException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27f9210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "ThrowAddressNullException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::IPAddress::__set_Any(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_Any()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
 void ::System::Net::IPAddress::__set_Loopback(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "Loopback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_Loopback()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "Loopback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
 void ::System::Net::IPAddress::__set_Broadcast(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "Broadcast", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_Broadcast()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "Broadcast", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
 void ::System::Net::IPAddress::__set_None(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_None()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
 void ::System::Net::IPAddress::__set_IPv6Any(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "IPv6Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_IPv6Any()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "IPv6Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
 void ::System::Net::IPAddress::__set_IPv6Loopback(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "IPv6Loopback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_IPv6Loopback()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "IPv6Loopback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
 void ::System::Net::IPAddress::__set_IPv6None(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "IPv6None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::System::Net::IPAddress::__get_IPv6None()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "IPv6None", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get>();
}
constexpr void ::System::Net::IPAddress::__set__addressOrScopeId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Net::IPAddress::__get__addressOrScopeId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::IPAddress::__set__numbers(::ArrayW<uint16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint16_t>>(value));
}
constexpr ::ArrayW<uint16_t> ::System::Net::IPAddress::__get__numbers() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::IPAddress::__set__toString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::IPAddress::__get__toString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::IPAddress::__set__hashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::IPAddress::__get__hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::System::Net::IPAddress::get_IsIPv4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_IsIPv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::IPAddress::get_IsIPv6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_IsIPv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t ::System::Net::IPAddress::get_PrivateAddress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_PrivateAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::IPAddress::set_PrivateAddress(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "set_PrivateAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint32_t ::System::Net::IPAddress::get_PrivateScopeId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_PrivateScopeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::IPAddress::set_PrivateScopeId(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "set_PrivateScopeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "newAddress", ty: "int64_t", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(int64_t newAddress)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(newAddress))) {}
 void ::System::Net::IPAddress::_ctor(int64_t newAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newAddress);
}
// Ctor Parameters [CppParam { name: "address", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "int64_t", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(::ArrayW<uint8_t> address, int64_t scopeid)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(address, scopeid))) {}
 void ::System::Net::IPAddress::_ctor(::ArrayW<uint8_t> address, int64_t scopeid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address, scopeid);
}
// Ctor Parameters [CppParam { name: "address", ty: "::System::ReadOnlySpan_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "int64_t", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(::System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(address, scopeid))) {}
 void ::System::Net::IPAddress::_ctor(::System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address, scopeid);
}
// Ctor Parameters [CppParam { name: "numbers", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "numbersLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "uint32_t", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(void* numbers, int32_t numbersLength, uint32_t scopeid)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(numbers, numbersLength, scopeid))) {}
 void ::System::Net::IPAddress::_ctor(void* numbers, int32_t numbersLength, uint32_t scopeid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numbers, numbersLength, scopeid);
}
// Ctor Parameters [CppParam { name: "numbers", ty: "::ArrayW<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "uint32_t", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(::ArrayW<uint16_t> numbers, uint32_t scopeid)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(numbers, scopeid))) {}
 void ::System::Net::IPAddress::_ctor(::ArrayW<uint16_t> numbers, uint32_t scopeid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numbers, scopeid);
}
// Ctor Parameters [CppParam { name: "address", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(::ArrayW<uint8_t> address)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(address))) {}
 void ::System::Net::IPAddress::_ctor(::ArrayW<uint8_t> address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address);
}
// Ctor Parameters [CppParam { name: "address", ty: "::System::ReadOnlySpan_1<uint8_t>", modifiers: "", def_value: None }]
 ::System::Net::IPAddress::IPAddress(::System::ReadOnlySpan_1<uint8_t> address)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPAddress>(address))) {}
 void ::System::Net::IPAddress::_ctor(::System::ReadOnlySpan_1<uint8_t> address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address);
}
 bool ::System::Net::IPAddress::TryParse(::StringW ipString, ByRef<::System::Net::IPAddress> address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::IPAddress>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ipString, address);
}
 ::System::Net::IPAddress ::System::Net::IPAddress::Parse(::StringW ipString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress, false>(nullptr, ___internal_method, ipString);
}
 bool ::System::Net::IPAddress::TryWriteBytes(::System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "TryWriteBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, destination, bytesWritten);
}
 void ::System::Net::IPAddress::WriteIPv6Bytes(::System::Span_1<uint8_t> destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "WriteIPv6Bytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, destination);
}
 void ::System::Net::IPAddress::WriteIPv4Bytes(::System::Span_1<uint8_t> destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "WriteIPv4Bytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, destination);
}
 ::ArrayW<uint8_t> ::System::Net::IPAddress::GetAddressBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "GetAddressBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::Sockets::AddressFamily ::System::Net::IPAddress::get_AddressFamily()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_AddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::System::Net::IPAddress::get_ScopeId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_ScopeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::IPAddress::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::IPAddress::IsLoopback(::System::Net::IPAddress address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "IsLoopback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, address);
}
 bool ::System::Net::IPAddress::get_IsIPv6Multicast()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "get_IsIPv6Multicast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::IPAddress::Equals(::bs_hook::Il2CppWrapperType comparandObj, bool compareScopeId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, comparandObj, compareScopeId);
}
 bool ::System::Net::IPAddress::Equals(::bs_hook::Il2CppWrapperType comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, comparand);
}
 int32_t ::System::Net::IPAddress::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::IPAddress ::System::Net::IPAddress::MapToIPv6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "MapToIPv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::System::Net::IPAddress::ThrowAddressNullException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IPAddress>::get(),
                            "ThrowAddressNullException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress::*)(int64_t)>(&::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27fa77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "newAddress", ty: "int64_t", modifiers: "", def_value: None }]
 ::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress::____System__Net__IPAddress__ReadOnlyIPAddress(int64_t newAddress)  : ::System::Net::IPAddress(THROW_UNLESS(::il2cpp_utils::New<____System__Net__IPAddress__ReadOnlyIPAddress>(newAddress))) {}
 void ::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress::_ctor(int64_t newAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__IPAddress__ReadOnlyIPAddress>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newAddress);
}
} // end anonymous namespace
