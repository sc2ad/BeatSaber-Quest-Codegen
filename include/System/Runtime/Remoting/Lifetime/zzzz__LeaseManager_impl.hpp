#pragma once
namespace {
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseManager_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.SetPollTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x232f41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "SetPollTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.TrackLifetime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::Runtime::Remoting::ServerIdentity)>(&::System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x232f514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "TrackLifetime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.StartManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&::System::Runtime::Remoting::Lifetime::LeaseManager::StartManager)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x232f648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "StartManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.StopManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&::System::Runtime::Remoting::Lifetime::LeaseManager::StopManager)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x232f7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "StopManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager.ManageLeases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x232f7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "ManageLeases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&::System::Runtime::Remoting::Lifetime::LeaseManager::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x232fa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Remoting::Lifetime::LeaseManager::__set__objects(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::System::Runtime::Remoting::Lifetime::LeaseManager::__get__objects() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Lifetime::LeaseManager::__set__timer(::System::Threading::Timer value)  {
::cordl_internals::setInstanceField<::System::Threading::Timer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Timer>(value));
}
constexpr ::System::Threading::Timer ::System::Runtime::Remoting::Lifetime::LeaseManager::__get__timer() const {
return ::cordl_internals::getInstanceField<::System::Threading::Timer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime(::System::TimeSpan timeSpan)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "SetPollTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeSpan);
}
 void ::System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime(::System::Runtime::Remoting::ServerIdentity identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "TrackLifetime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity);
}
 void ::System::Runtime::Remoting::Lifetime::LeaseManager::StartManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "StartManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Lifetime::LeaseManager::StopManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "StopManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            "ManageLeases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
// Ctor Parameters []
 ::System::Runtime::Remoting::Lifetime::LeaseManager::LeaseManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaseManager>())) {}
 void ::System::Runtime::Remoting::Lifetime::LeaseManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::LeaseManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
