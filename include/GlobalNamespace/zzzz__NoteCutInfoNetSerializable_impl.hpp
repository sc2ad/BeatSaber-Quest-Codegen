#pragma once
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
//  Writing Method size for method: GlobalNamespace::NoteCutInfoNetSerializable.Obtain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutInfoNetSerializable (*)()>(&GlobalNamespace::NoteCutInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1217228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutInfoNetSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::NoteCutInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x121728c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteCutInfoNetSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutInfoNetSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::NoteCutInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x121746c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::NoteCutInfoNetSerializable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutInfoNetSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)()>(&GlobalNamespace::NoteCutInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1217618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutInfoNetSerializable.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutInfoNetSerializable (GlobalNamespace::NoteCutInfoNetSerializable::*)(ByRef<GlobalNamespace::NoteCutInfo>, GlobalNamespace::NoteData, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::NoteCutInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1217678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutInfoNetSerializable.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutInfoNetSerializable (GlobalNamespace::NoteCutInfoNetSerializable::*)(float_t, bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, GlobalNamespace::GlobalNamespace__NoteData__GameplayType, GlobalNamespace::ColorType, GlobalNamespace::NoteLineLayer, int32_t, float_t, float_t, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::NoteCutInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x121775c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_saberSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteCutInfoNetSerializable::__get_saberSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_cutWasOk(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::NoteCutInfoNetSerializable::__get_cutWasOk() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_saberDir(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteCutInfoNetSerializable::__get_saberDir() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_cutPoint(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteCutInfoNetSerializable::__get_cutPoint() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_cutNormal(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteCutInfoNetSerializable::__get_cutNormal() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_notePosition(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteCutInfoNetSerializable::__get_notePosition() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_noteScale(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteCutInfoNetSerializable::__get_noteScale() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_noteRotation(GlobalNamespace::QuaternionSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::QuaternionSerializable, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::QuaternionSerializable>(value));
}
constexpr GlobalNamespace::QuaternionSerializable GlobalNamespace::NoteCutInfoNetSerializable::__get_noteRotation() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::QuaternionSerializable, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_gameplayType(GlobalNamespace::GlobalNamespace__NoteData__GameplayType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__NoteData__GameplayType GlobalNamespace::NoteCutInfoNetSerializable::__get_gameplayType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__NoteData__GameplayType, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_colorType(GlobalNamespace::ColorType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorType, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorType>(value));
}
constexpr GlobalNamespace::ColorType GlobalNamespace::NoteCutInfoNetSerializable::__get_colorType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorType, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_noteTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteCutInfoNetSerializable::__get_noteTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_noteLineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteCutInfoNetSerializable::__get_noteLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_lineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer GlobalNamespace::NoteCutInfoNetSerializable::__get_lineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_timeToNextColorNote(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::NoteCutInfoNetSerializable::__get_timeToNextColorNote() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__set_moveVec(GlobalNamespace::Vector3Serializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Vector3Serializable, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Vector3Serializable>(value));
}
constexpr GlobalNamespace::Vector3Serializable GlobalNamespace::NoteCutInfoNetSerializable::__get_moveVec() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Vector3Serializable, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::NoteCutInfoNetSerializable GlobalNamespace::NoteCutInfoNetSerializable::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutInfoNetSerializable, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::NoteCutInfoNetSerializable::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::NoteCutInfoNetSerializable::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
// Ctor Parameters []
 GlobalNamespace::NoteCutInfoNetSerializable::NoteCutInfoNetSerializable()  : GlobalNamespace::PoolableSerializable(THROW_UNLESS(::il2cpp_utils::New<NoteCutInfoNetSerializable>())) {}
 void GlobalNamespace::NoteCutInfoNetSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteCutInfoNetSerializable GlobalNamespace::NoteCutInfoNetSerializable::Init(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, GlobalNamespace::NoteData noteData, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 moveVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutInfoNetSerializable, false>(const_cast<void*>(instance), ___internal_method, noteCutInfo, noteData, notePosition, noteRotation, noteScale, moveVec);
}
 GlobalNamespace::NoteCutInfoNetSerializable GlobalNamespace::NoteCutInfoNetSerializable::Init(float_t saberSpeed, bool cutWasOk, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, GlobalNamespace::GlobalNamespace__NoteData__GameplayType gameplayType, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteLineLayer lineLayer, int32_t noteLineIndex, float_t noteTime, float_t timeToNextColorNote, UnityEngine::Vector3 notePosition, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 moveVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutInfoNetSerializable>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteData__GameplayType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutInfoNetSerializable, false>(const_cast<void*>(instance), ___internal_method, saberSpeed, cutWasOk, saberDir, cutPoint, cutNormal, gameplayType, colorType, lineLayer, noteLineIndex, noteTime, timeToNextColorNote, notePosition, noteRotation, noteScale, moveVec);
}
