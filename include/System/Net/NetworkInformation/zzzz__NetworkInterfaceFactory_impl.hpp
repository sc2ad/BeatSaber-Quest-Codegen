#pragma once
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::NetworkInterfaceFactory.GetAllNetworkInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::NetworkInformation::NetworkInterface> (System::Net::NetworkInformation::NetworkInterfaceFactory::*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::NetworkInterfaceFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::NetworkInterfaceFactory>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::NetworkInterfaceFactory.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::NetworkInterfaceFactory (*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::Create)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x285dbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::NetworkInterfaceFactory>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::NetworkInterfaceFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::NetworkInterfaceFactory::*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::NetworkInterfaceFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> System::Net::NetworkInformation::NetworkInterfaceFactory::GetAllNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::NetworkInterfaceFactory>::get(),
                            "GetAllNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::NetworkInformation::NetworkInterface>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::NetworkInformation::NetworkInterfaceFactory System::Net::NetworkInformation::NetworkInterfaceFactory::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::NetworkInterfaceFactory>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::NetworkInterfaceFactory, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 System::Net::NetworkInformation::NetworkInterfaceFactory::NetworkInterfaceFactory()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetworkInterfaceFactory>())) {}
 void System::Net::NetworkInformation::NetworkInterfaceFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::NetworkInterfaceFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
