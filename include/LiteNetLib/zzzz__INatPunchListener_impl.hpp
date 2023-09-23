#pragma once
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
//  Writing Method size for method: LiteNetLib::INatPunchListener.OnNatIntroductionRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INatPunchListener::*)(System::Net::IPEndPoint, System::Net::IPEndPoint, ::StringW)>(&LiteNetLib::INatPunchListener::OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::INatPunchListener),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::INatPunchListener>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::INatPunchListener.OnNatIntroductionSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::INatPunchListener::*)(System::Net::IPEndPoint, LiteNetLib::NatAddressType, ::StringW)>(&LiteNetLib::INatPunchListener::OnNatIntroductionSuccess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::INatPunchListener),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::INatPunchListener>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void LiteNetLib::INatPunchListener::OnNatIntroductionRequest(System::Net::IPEndPoint localEndPoint, System::Net::IPEndPoint remoteEndPoint, ::StringW token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::INatPunchListener>::get(),
                            "OnNatIntroductionRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localEndPoint, remoteEndPoint, token);
}
 void LiteNetLib::INatPunchListener::OnNatIntroductionSuccess(System::Net::IPEndPoint targetEndPoint, LiteNetLib::NatAddressType type, ::StringW token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::INatPunchListener>::get(),
                            "OnNatIntroductionSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NatAddressType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetEndPoint, type, token);
}
