#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ISponsor_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x232f0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::*)(::System::Runtime::Remoting::Lifetime::ILease)>(&::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x232f408;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::*)(::System::Runtime::Remoting::Lifetime::ILease, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x232f1dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::*)(::System::IAsyncResult)>(&::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x232f3e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>(object, method))) {}
 void ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::Invoke(::System::Runtime::Remoting::Lifetime::ILease lease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, lease);
}
 ::System::IAsyncResult ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease lease, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, lease, callback, object);
}
 ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2326710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_CurrentLeaseTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x232ea78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "get_CurrentLeaseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_CurrentState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Lifetime::LeaseState (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232eae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "get_CurrentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::Activate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232eae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_RenewOnCallTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232eaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "get_RenewOnCallTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Renew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::Lease::Renew)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x232eafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "Renew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Unregister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::Runtime::Remoting::Lifetime::ISponsor)>(&::System::Runtime::Remoting::Lifetime::Lease::Unregister)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x232eb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ISponsor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.UpdateState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::UpdateState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x232eccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.CheckNextSponsor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x232ee6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "CheckNextSponsor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.ProcessSponsorResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)(::bs_hook::Il2CppWrapperType, bool)>(&::System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x232f1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "ProcessSponsorResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Lifetime::ILease
constexpr  ::System::Runtime::Remoting::Lifetime::Lease::operator ::System::Runtime::Remoting::Lifetime::ILease() const noexcept {
return ::System::Runtime::Remoting::Lifetime::ILease(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__leaseExpireTime(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Runtime::Remoting::Lifetime::Lease::__get__leaseExpireTime() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__currentState(::System::Runtime::Remoting::Lifetime::LeaseState value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Lifetime::LeaseState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Lifetime::LeaseState>(value));
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState ::System::Runtime::Remoting::Lifetime::Lease::__get__currentState() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::LeaseState, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__initialLeaseTime(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::Lease::__get__initialLeaseTime() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__renewOnCallTime(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::Lease::__get__renewOnCallTime() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__sponsorshipTimeout(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::Lease::__get__sponsorshipTimeout() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__sponsors(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::System::Runtime::Remoting::Lifetime::Lease::__get__sponsors() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__renewingSponsors(::System::Collections::Queue value)  {
::cordl_internals::setInstanceField<::System::Collections::Queue, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Queue>(value));
}
constexpr ::System::Collections::Queue ::System::Runtime::Remoting::Lifetime::Lease::__get__renewingSponsors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Queue, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::Lease::__set__renewalDelegate(::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate>(value));
}
constexpr ::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate ::System::Runtime::Remoting::Lifetime::Lease::__get__renewalDelegate() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::____System__Runtime__Remoting__Lifetime__Lease__RenewalDelegate, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Runtime::Remoting::Lifetime::Lease::Lease()  : ::System::MarshalByRefObject(THROW_UNLESS(::il2cpp_utils::New<Lease>())) {}
 void ::System::Runtime::Remoting::Lifetime::Lease::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "get_CurrentLeaseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Lifetime::LeaseState ::System::Runtime::Remoting::Lifetime::Lease::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "get_CurrentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::LeaseState, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Lifetime::Lease::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "get_RenewOnCallTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::Lease::Renew(::System::TimeSpan renewalTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "Renew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, renewalTime);
}
 void ::System::Runtime::Remoting::Lifetime::Lease::Unregister(::System::Runtime::Remoting::Lifetime::ISponsor obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ISponsor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void ::System::Runtime::Remoting::Lifetime::Lease::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "CheckNextSponsor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse(::bs_hook::Il2CppWrapperType state, bool timedOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease>::get(),
                            "ProcessSponsorResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, timedOut);
}
} // end anonymous namespace
