#pragma once
#include "System/Net/zzzz__EndPoint_impl.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
//  Writing Method size for method: System::Net::IPEndPoint.get_AddressFamily
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::AddressFamily (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::get_AddressFamily)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27faf64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IPEndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::IPEndPoint::*)(System::Net::IPAddress, int32_t)>(&System::Net::IPEndPoint::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27faf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.get_Address
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fb058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "get_Address",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.get_Port
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::get_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fb060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "get_Port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27fb068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IPEndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::Serialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27fb128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IPEndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPoint (System::Net::IPEndPoint::*)(System::Net::SocketAddress)>(&System::Net::IPEndPoint::Create)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x27fb198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IPEndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::IPEndPoint::*)(::bs_hook::Il2CppWrapperType)>(&System::Net::IPEndPoint::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27fb38c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IPEndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::IPEndPoint.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::IPEndPoint::*)()>(&System::Net::IPEndPoint::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27fb440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::IPEndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::IPEndPoint::__set__address(System::Net::IPAddress value)  {
::cordl_internals::setInstanceField<System::Net::IPAddress, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPAddress>(value));
}
constexpr System::Net::IPAddress System::Net::IPEndPoint::__get__address() const {
return ::cordl_internals::getInstanceField<System::Net::IPAddress, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::IPEndPoint::__set__port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::IPEndPoint::__get__port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::IPEndPoint::__set_Any(System::Net::IPEndPoint value)  {
::cordl_internals::setStaticField<System::Net::IPEndPoint, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get>(std::forward<System::Net::IPEndPoint>(value));
}
 System::Net::IPEndPoint System::Net::IPEndPoint::__get_Any()  {
return ::cordl_internals::getStaticField<System::Net::IPEndPoint, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get>();
}
 void System::Net::IPEndPoint::__set_IPv6Any(System::Net::IPEndPoint value)  {
::cordl_internals::setStaticField<System::Net::IPEndPoint, "IPv6Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get>(std::forward<System::Net::IPEndPoint>(value));
}
 System::Net::IPEndPoint System::Net::IPEndPoint::__get_IPv6Any()  {
return ::cordl_internals::getStaticField<System::Net::IPEndPoint, "IPv6Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get>();
}
 System::Net::Sockets::AddressFamily System::Net::IPEndPoint::get_AddressFamily()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "get_AddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::AddressFamily, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::IPEndPoint System::Net::IPEndPoint::New_ctor(System::Net::IPAddress address, int32_t port)  {
System::Net::IPEndPoint o{THROW_UNLESS(::il2cpp_utils::New<System::Net::IPEndPoint>(address, port))};
return o;
}
 void System::Net::IPEndPoint::_ctor(System::Net::IPAddress address, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address, port);
}
 System::Net::IPAddress System::Net::IPEndPoint::get_Address()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "get_Address",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPAddress, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::IPEndPoint::get_Port()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "get_Port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::IPEndPoint::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::SocketAddress System::Net::IPEndPoint::Serialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SocketAddress, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::EndPoint System::Net::IPEndPoint::Create(System::Net::SocketAddress socketAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::EndPoint, false>(const_cast<void*>(instance), ___internal_method, socketAddress);
}
 bool System::Net::IPEndPoint::Equals(::bs_hook::Il2CppWrapperType comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, comparand);
}
 int32_t System::Net::IPEndPoint::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::IPEndPoint>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
