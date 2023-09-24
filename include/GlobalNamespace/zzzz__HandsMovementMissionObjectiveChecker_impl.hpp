#pragma once
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__HandsMovementMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__SaberActivityCounter_def.hpp"
//  Writing Method size for method: GlobalNamespace::HandsMovementMissionObjectiveChecker.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x20d6890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HandsMovementMissionObjectiveChecker.HandleTotalDistanceDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)(float_t)>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20d6964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            "HandleTotalDistanceDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HandsMovementMissionObjectiveChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20d69c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HandsMovementMissionObjectiveChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HandsMovementMissionObjectiveChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HandsMovementMissionObjectiveChecker::__set__saberActivityCounter(GlobalNamespace::SaberActivityCounter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberActivityCounter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberActivityCounter>(value));
}
constexpr GlobalNamespace::SaberActivityCounter GlobalNamespace::HandsMovementMissionObjectiveChecker::__get__saberActivityCounter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberActivityCounter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange(float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            "HandleTotalDistanceDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance);
}
 void GlobalNamespace::HandsMovementMissionObjectiveChecker::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::HandsMovementMissionObjectiveChecker GlobalNamespace::HandsMovementMissionObjectiveChecker::New_ctor()  {
GlobalNamespace::HandsMovementMissionObjectiveChecker o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::HandsMovementMissionObjectiveChecker>())};
return o;
}
 void GlobalNamespace::HandsMovementMissionObjectiveChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HandsMovementMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
