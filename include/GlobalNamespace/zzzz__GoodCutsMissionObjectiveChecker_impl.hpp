#pragma once
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__GoodCutsMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::GoodCutsMissionObjectiveChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)()>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20d6618;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GoodCutsMissionObjectiveChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GoodCutsMissionObjectiveChecker.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)()>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20d6764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GoodCutsMissionObjectiveChecker.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20d67fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GoodCutsMissionObjectiveChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GoodCutsMissionObjectiveChecker::*)()>(&GlobalNamespace::GoodCutsMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d6888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GoodCutsMissionObjectiveChecker::__set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr GlobalNamespace::BeatmapObjectManager GlobalNamespace::GoodCutsMissionObjectiveChecker::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GoodCutsMissionObjectiveChecker::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GoodCutsMissionObjectiveChecker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GoodCutsMissionObjectiveChecker::HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
// Ctor Parameters []
 GlobalNamespace::GoodCutsMissionObjectiveChecker::GoodCutsMissionObjectiveChecker()  : GlobalNamespace::SimpleValueMissionObjectiveChecker(THROW_UNLESS(::il2cpp_utils::New<GoodCutsMissionObjectiveChecker>())) {}
 void GlobalNamespace::GoodCutsMissionObjectiveChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GoodCutsMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
