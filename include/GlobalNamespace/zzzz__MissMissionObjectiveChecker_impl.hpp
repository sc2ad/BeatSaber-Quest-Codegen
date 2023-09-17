#pragma once
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MissMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissMissionObjectiveChecker.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissMissionObjectiveChecker::*)()>(&::GlobalNamespace::MissMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20d7b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MissMissionObjectiveChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissMissionObjectiveChecker.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissMissionObjectiveChecker::*)()>(&::GlobalNamespace::MissMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x20d7cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissMissionObjectiveChecker.HandleNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissMissionObjectiveChecker::*)(::GlobalNamespace::NoteController)>(&::GlobalNamespace::MissMissionObjectiveChecker::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x20d7d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissMissionObjectiveChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissMissionObjectiveChecker::*)()>(&::GlobalNamespace::MissMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d7dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MissMissionObjectiveChecker::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager ::GlobalNamespace::MissMissionObjectiveChecker::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MissMissionObjectiveChecker::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissMissionObjectiveChecker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MissMissionObjectiveChecker::HandleNoteWasMissed(::GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
// Ctor Parameters []
 ::GlobalNamespace::MissMissionObjectiveChecker::MissMissionObjectiveChecker()  : ::GlobalNamespace::SimpleValueMissionObjectiveChecker(THROW_UNLESS(::il2cpp_utils::New<MissMissionObjectiveChecker>())) {}
 void ::GlobalNamespace::MissMissionObjectiveChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissMissionObjectiveChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
