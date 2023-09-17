#pragma once
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__EnergyMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&::GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x20d60b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.HandleEnergyDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)(float_t)>(&::GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x20d6184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "HandleEnergyDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&::GlobalNamespace::EnergyMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x20d62b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::EnergyMissionObjectiveChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker.CheckAndUpdateStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&::GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20d61f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "CheckAndUpdateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnergyMissionObjectiveChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnergyMissionObjectiveChecker::*)()>(&::GlobalNamespace::EnergyMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d63ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::EnergyMissionObjectiveChecker::__set__energyCounter(::GlobalNamespace::GameEnergyCounter value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameEnergyCounter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameEnergyCounter>(value));
}
constexpr ::GlobalNamespace::GameEnergyCounter ::GlobalNamespace::EnergyMissionObjectiveChecker::__get__energyCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::EnergyMissionObjectiveChecker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EnergyMissionObjectiveChecker::HandleEnergyDidChange(float_t energy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "HandleEnergyDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, energy);
}
 void ::GlobalNamespace::EnergyMissionObjectiveChecker::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EnergyMissionObjectiveChecker::CheckAndUpdateStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            "CheckAndUpdateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::EnergyMissionObjectiveChecker::EnergyMissionObjectiveChecker()  : ::GlobalNamespace::MissionObjectiveChecker(THROW_UNLESS(::il2cpp_utils::New<EnergyMissionObjectiveChecker>())) {}
 void ::GlobalNamespace::EnergyMissionObjectiveChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnergyMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
