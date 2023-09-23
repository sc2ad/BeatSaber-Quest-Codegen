#pragma once
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoteSpawnInfoNetSerializable.Obtain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteSpawnInfoNetSerializable (*)()>(&GlobalNamespace::NoteSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1217bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteSpawnInfoNetSerializable.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteSpawnInfoNetSerializable (GlobalNamespace::NoteSpawnInfoNetSerializable::*)(float_t, int32_t, GlobalNamespace::NoteLineLayer, GlobalNamespace::NoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType, GlobalNamespace::ColorType, GlobalNamespace::NoteCutDirection, float_t, float_t, int32_t, float_t, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float_t, float_t, float_t, float_t, float_t, float_t)>(&GlobalNamespace::NoteSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1217c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteSpawnInfoNetSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteSpawnInfoNetSerializable::*)()>(&GlobalNamespace::NoteSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1217d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteSpawnInfoNetSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteSpawnInfoNetSerializable::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1217df0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteSpawnInfoNetSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteSpawnInfoNetSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteSpawnInfoNetSerializable::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::NoteSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1217f94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteSpawnInfoNetSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_lineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_noteLineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::NoteSpawnInfoNetSerializable::__get_noteLineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_beforeJumpNoteLineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::NoteSpawnInfoNetSerializable::__get_beforeJumpNoteLineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType GlobalNamespace::NoteSpawnInfoNetSerializable::__get_gameplayType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_scoringType(GlobalNamespace::GlobalNamespace__NoteData__ScoringType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__ScoringType GlobalNamespace::NoteSpawnInfoNetSerializable::__get_scoringType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteData__ScoringType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_colorType(GlobalNamespace::ColorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorType>(value));
}
constexpr GlobalNamespace::ColorType GlobalNamespace::NoteSpawnInfoNetSerializable::__get_colorType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_cutDirection(GlobalNamespace::NoteCutDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutDirection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutDirection>(value));
}
constexpr GlobalNamespace::NoteCutDirection GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutDirection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_timeToNextColorNote(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_timeToNextColorNote() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_timeToPrevColorNote(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_timeToPrevColorNote() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_flipLineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_flipLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_flipYSide(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_flipYSide() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_moveStartPos(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveStartPos() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_moveEndPos(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveEndPos() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_jumpEndPos(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpEndPos() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_jumpGravity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpGravity() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_moveDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_jumpDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_cutDirectionAngleOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutDirectionAngleOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_cutSfxVolumeMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutSfxVolumeMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::NoteSpawnInfoNetSerializable GlobalNamespace::NoteSpawnInfoNetSerializable::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteSpawnInfoNetSerializable, false>(nullptr, ___internal_method);
}
 GlobalNamespace::NoteSpawnInfoNetSerializable GlobalNamespace::NoteSpawnInfoNetSerializable::Init(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::GlobalNamespace__NoteData__ScoringType scoringType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration, float_t rotation, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteSpawnInfoNetSerializable, false>(const_cast<void*>(instance), ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, moveStartPos, moveEndPos, jumpEndPos, jumpGravity, moveDuration, jumpDuration, rotation, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
// Ctor Parameters []
 GlobalNamespace::NoteSpawnInfoNetSerializable::NoteSpawnInfoNetSerializable()  : GlobalNamespace::PoolableSerializable(THROW_UNLESS(::il2cpp_utils::New<NoteSpawnInfoNetSerializable>())) {}
 void GlobalNamespace::NoteSpawnInfoNetSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::NoteSpawnInfoNetSerializable::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteSpawnInfoNetSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
