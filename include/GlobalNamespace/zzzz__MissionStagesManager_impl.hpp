#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionStage_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "GlobalNamespace/zzzz__MissionStageLockView_def.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MissionStagesManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MissionStagesManager____c::*)()>(&GlobalNamespace::GlobalNamespace__MissionStagesManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214ae10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MissionStagesManager____c._InitStages_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__MissionStagesManager____c::*)(GlobalNamespace::MissionStage)>(&GlobalNamespace::GlobalNamespace__MissionStagesManager____c::_InitStages_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x214ae18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get(),
                            "<InitStages>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionStage>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__MissionStagesManager____c::__set___9(GlobalNamespace::GlobalNamespace__MissionStagesManager____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__MissionStagesManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>(value));
}
 GlobalNamespace::GlobalNamespace__MissionStagesManager____c GlobalNamespace::GlobalNamespace__MissionStagesManager____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__MissionStagesManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__MissionStagesManager____c::__set___9__6_0(System::Func_2<GlobalNamespace::MissionStage,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<GlobalNamespace::MissionStage,int32_t>, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get>(std::forward<System::Func_2<GlobalNamespace::MissionStage,int32_t>>(value));
}
 System::Func_2<GlobalNamespace::MissionStage,int32_t> GlobalNamespace::GlobalNamespace__MissionStagesManager____c::__get___9__6_0()  {
return ::cordl_internals::getStaticField<System::Func_2<GlobalNamespace::MissionStage,int32_t>, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get>();
}
 GlobalNamespace::GlobalNamespace__MissionStagesManager____c GlobalNamespace::GlobalNamespace__MissionStagesManager____c::New_ctor()  {
GlobalNamespace::GlobalNamespace__MissionStagesManager____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__MissionStagesManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__MissionStagesManager____c::_InitStages_b__6_0(GlobalNamespace::MissionStage stage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MissionStagesManager____c>::get(),
                            "<InitStages>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MissionStage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stage);
}
//  Writing Method size for method: GlobalNamespace::MissionStagesManager.get_firstLockedMissionStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionStage (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214ac58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "get_firstLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionStagesManager.UpdateFirtsLockedMissionStage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)(int32_t)>(&GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x214a388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateFirtsLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionStagesManager.InitStages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::InitStages)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x214ac60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "InitStages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionStagesManager.UpdateStageLockPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::UpdateStageLockPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x214a604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateStageLockPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionStagesManager.UpdateStageLockPositionAnimated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)(bool, float_t)>(&GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21485bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateStageLockPositionAnimated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionStagesManager.UpdateStageLockText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)(int32_t)>(&GlobalNamespace::MissionStagesManager::UpdateStageLockText)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x214a404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateStageLockText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionStagesManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214ada4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionStagesManager::__set__missionStageLockView(GlobalNamespace::MissionStageLockView value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionStageLockView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionStageLockView>(value));
}
constexpr GlobalNamespace::MissionStageLockView GlobalNamespace::MissionStagesManager::__get__missionStageLockView() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionStageLockView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionStagesManager::__set__missionStages(::ArrayW<GlobalNamespace::MissionStage> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::MissionStage>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::MissionStage>>(value));
}
constexpr ::ArrayW<GlobalNamespace::MissionStage> GlobalNamespace::MissionStagesManager::__get__missionStages() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::MissionStage>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionStagesManager::__set__firstLockedMissionStage(GlobalNamespace::MissionStage value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionStage, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionStage>(value));
}
constexpr GlobalNamespace::MissionStage GlobalNamespace::MissionStagesManager::__get__firstLockedMissionStage() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionStage, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MissionStage GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "get_firstLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MissionStage, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage(int32_t numberOfClearedMissions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateFirtsLockedMissionStage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfClearedMissions);
}
 void GlobalNamespace::MissionStagesManager::InitStages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "InitStages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionStagesManager::UpdateStageLockPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateStageLockPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated(bool animated, float_t animationDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateStageLockPositionAnimated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animated, animationDuration);
}
 void GlobalNamespace::MissionStagesManager::UpdateStageLockText(int32_t numberOfClearedMissions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            "UpdateStageLockText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfClearedMissions);
}
 GlobalNamespace::MissionStagesManager GlobalNamespace::MissionStagesManager::New_ctor()  {
GlobalNamespace::MissionStagesManager o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MissionStagesManager>())};
return o;
}
 void GlobalNamespace::MissionStagesManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionStagesManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
