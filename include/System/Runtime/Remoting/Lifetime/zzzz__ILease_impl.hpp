#pragma once
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::ILease.get_CurrentLeaseTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::ILease::*)()>(&System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Lifetime::ILease),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::ILease.get_CurrentState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Lifetime::LeaseState (System::Runtime::Remoting::Lifetime::ILease::*)()>(&System::Runtime::Remoting::Lifetime::ILease::get_CurrentState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Lifetime::ILease),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::ILease.get_RenewOnCallTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::ILease::*)()>(&System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Lifetime::ILease),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::ILease.Renew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::ILease::*)(System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::ILease::Renew)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Lifetime::ILease),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                            "get_CurrentLeaseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::ILease::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                            "get_CurrentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Lifetime::LeaseState, false>(const_cast<void*>(instance), ___internal_method);
}
 System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                            "get_RenewOnCallTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::Renew(System::TimeSpan renewalTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::ILease>::get(),
                            "Renew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, renewalTime);
}
