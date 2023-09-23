#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoteDebrisSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)()>(&GlobalNamespace::NoteDebrisSpawner::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x225a74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteDebrisSpawner.SpawnDebris
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(GlobalNamespace::GlobalNamespace__NoteData__GameplayType, UnityEngine::Vector3, UnityEngine::Vector3, float_t, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, GlobalNamespace::ColorType, float_t, UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisSpawner::SpawnDebris)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x2259bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "SpawnDebris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteDebrisSpawner.HandleNoteDebrisDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(GlobalNamespace::NoteDebris)>(&GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x225a91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "HandleNoteDebrisDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteDebris>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteDebrisSpawner.SpawnNoteDebris
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(GlobalNamespace::GlobalNamespace__NoteData__GameplayType, ByRef<GlobalNamespace::NoteDebris>, ByRef<GlobalNamespace::NoteDebris>)>(&GlobalNamespace::NoteDebrisSpawner::SpawnNoteDebris)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x225a810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "SpawnNoteDebris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteDebris>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteDebris>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteDebrisSpawner.DespawnNoteDebris
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)(GlobalNamespace::NoteDebris)>(&GlobalNamespace::NoteDebrisSpawner::DespawnNoteDebris)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x225a9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "DespawnNoteDebris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteDebris>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteDebrisSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisSpawner::*)()>(&GlobalNamespace::NoteDebrisSpawner::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x225aa7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::INoteDebrisDidFinishEvent
constexpr  GlobalNamespace::NoteDebrisSpawner::operator GlobalNamespace::INoteDebrisDidFinishEvent() const noexcept {
return GlobalNamespace::INoteDebrisDidFinishEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteDebrisSpawner::__get__rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__cutDirMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteDebrisSpawner::__get__cutDirMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__fromCenterSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteDebrisSpawner::__get__fromCenterSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__moveSpeedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteDebrisSpawner::__get__moveSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__normalNotesDebrisPool(GlobalNamespace::GlobalNamespace__NoteDebris__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteDebris__Pool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteDebris__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteDebris__Pool GlobalNamespace::NoteDebrisSpawner::__get__normalNotesDebrisPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteDebris__Pool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__burstSliderHeadNotesDebrisPool(GlobalNamespace::GlobalNamespace__NoteDebris__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteDebris__Pool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteDebris__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteDebris__Pool GlobalNamespace::NoteDebrisSpawner::__get__burstSliderHeadNotesDebrisPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteDebris__Pool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__burstSliderElementNotesDebrisPool(GlobalNamespace::GlobalNamespace__NoteDebris__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteDebris__Pool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteDebris__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteDebris__Pool GlobalNamespace::NoteDebrisSpawner::__get__burstSliderElementNotesDebrisPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteDebris__Pool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__poolForNoteGameplayType(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> GlobalNamespace::NoteDebrisSpawner::__get__poolForNoteGameplayType() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__set__poolForNoteDebris(System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> GlobalNamespace::NoteDebrisSpawner::__get__poolForNoteDebris() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::NoteDebrisSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteDebrisSpawner::SpawnDebris(GlobalNamespace::GlobalNamespace__NoteData__GameplayType noteGameplayType, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float_t saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, GlobalNamespace::ColorType colorType, float_t timeToNextColorNote, UnityEngine::Vector3 moveVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "SpawnDebris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteGameplayType, cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, noteScale, colorType, timeToNextColorNote, moveVec);
}
 void GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris noteDebris)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "HandleNoteDebrisDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteDebris>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteDebris);
}
 void GlobalNamespace::NoteDebrisSpawner::SpawnNoteDebris(GlobalNamespace::GlobalNamespace__NoteData__GameplayType noteGameplayType, ByRef<GlobalNamespace::NoteDebris> debris0, ByRef<GlobalNamespace::NoteDebris> debris1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "SpawnNoteDebris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteDebris>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteDebris>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteGameplayType, debris0, debris1);
}
 void GlobalNamespace::NoteDebrisSpawner::DespawnNoteDebris(GlobalNamespace::NoteDebris noteDebris)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            "DespawnNoteDebris",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteDebris>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteDebris);
}
// Ctor Parameters []
 GlobalNamespace::NoteDebrisSpawner::NoteDebrisSpawner()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<NoteDebrisSpawner>())) {}
 void GlobalNamespace::NoteDebrisSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteDebrisSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
