#pragma once
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
//  Writing Method size for method: System::Net::EndPoint.get_AddressFamily
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::AddressFamily (System::Net::EndPoint::*)()>(&System::Net::EndPoint::get_AddressFamily)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x280a00c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::EndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPoint.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress (System::Net::EndPoint::*)()>(&System::Net::EndPoint::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x280a034;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::EndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPoint.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPoint (System::Net::EndPoint::*)(System::Net::SocketAddress)>(&System::Net::EndPoint::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x280a05c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::EndPoint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPoint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPoint::*)()>(&System::Net::EndPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fb050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::Sockets::AddressFamily System::Net::EndPoint::get_AddressFamily()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                            "get_AddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::AddressFamily, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::SocketAddress System::Net::EndPoint::Serialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SocketAddress, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::EndPoint System::Net::EndPoint::Create(System::Net::SocketAddress socketAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::EndPoint, false>(const_cast<void*>(instance), ___internal_method, socketAddress);
}
 System::Net::EndPoint System::Net::EndPoint::New_ctor()  {
System::Net::EndPoint o{THROW_UNLESS(::il2cpp_utils::New<System::Net::EndPoint>())};
return o;
}
 void System::Net::EndPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPoint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
