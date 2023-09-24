#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarData::*)(::StringW, UnityEngine::Color32, UnityEngine::Color32, ::StringW, UnityEngine::Color32, ::StringW, UnityEngine::Color32, ::StringW, UnityEngine::Color32, ::StringW, UnityEngine::Color32, UnityEngine::Color32, UnityEngine::Color32, ::StringW, ::StringW, ::StringW)>(&GlobalNamespace::MultiplayerAvatarData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1216304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarData::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::MultiplayerAvatarData::Serialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1216350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (GlobalNamespace::MultiplayerAvatarData::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x121650c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerAvatarData (*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::MultiplayerAvatarData::Deserialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1216540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerAvatarData::*)(GlobalNamespace::MultiplayerAvatarData)>(&GlobalNamespace::MultiplayerAvatarData::Equals)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1216754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerAvatarData::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::MultiplayerAvatarData::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1216a28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerAvatarData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerAvatarData.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerAvatarData::*)()>(&GlobalNamespace::MultiplayerAvatarData::GetHashCode)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1216ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerAvatarData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>
constexpr  GlobalNamespace::MultiplayerAvatarData::operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>() const {
return LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerAvatarData>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>
constexpr  GlobalNamespace::MultiplayerAvatarData::operator System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>() const {
return System::IEquatable_1<GlobalNamespace::MultiplayerAvatarData>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "headTopId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "headTopPrimaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "headTopSecondaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "glassesId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "glassesColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "facialHairId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "facialHairColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "handsId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "handsColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "clothesId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clothesPrimaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "clothesSecondaryColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "clothesDetailColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "skinColorId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "eyesId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "mouthId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData(::StringW headTopId, UnityEngine::Color32 headTopPrimaryColor, UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color32 glassesColor, ::StringW facialHairId, UnityEngine::Color32 facialHairColor, ::StringW handsId, UnityEngine::Color32 handsColor, ::StringW clothesId, UnityEngine::Color32 clothesPrimaryColor, UnityEngine::Color32 clothesSecondaryColor, UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId) noexcept : ::bs_hook::ValueTypeWrapper() {this->headTopId = headTopId;
this->headTopPrimaryColor = headTopPrimaryColor;
this->headTopSecondaryColor = headTopSecondaryColor;
this->glassesId = glassesId;
this->glassesColor = glassesColor;
this->facialHairId = facialHairId;
this->facialHairColor = facialHairColor;
this->handsId = handsId;
this->handsColor = handsColor;
this->clothesId = clothesId;
this->clothesPrimaryColor = clothesPrimaryColor;
this->clothesSecondaryColor = clothesSecondaryColor;
this->clothesDetailColor = clothesDetailColor;
this->skinColorId = skinColorId;
this->eyesId = eyesId;
this->mouthId = mouthId;
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_headTopId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_headTopId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_headTopPrimaryColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x8>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_headTopPrimaryColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_headTopSecondaryColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xc>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_headTopSecondaryColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_glassesId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_glassesId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_glassesColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x18>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_glassesColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_facialHairId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_facialHairId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_facialHairColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x28>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_facialHairColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_handsId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_handsId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_handsColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x38>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_handsColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_clothesId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_clothesId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_clothesPrimaryColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x48>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_clothesPrimaryColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x48>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_clothesSecondaryColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x4c>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_clothesSecondaryColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x4c>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_clothesDetailColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x50>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 GlobalNamespace::MultiplayerAvatarData::__get_clothesDetailColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x50>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_skinColorId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_skinColorId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_eyesId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_eyesId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->__instance);
}
constexpr void GlobalNamespace::MultiplayerAvatarData::__set_mouthId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerAvatarData::__get_mouthId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->__instance);
}
 void GlobalNamespace::MultiplayerAvatarData::_ctor(::StringW headTopId, UnityEngine::Color32 headTopPrimaryColor, UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId, UnityEngine::Color32 glassesColor, ::StringW facialHairId, UnityEngine::Color32 facialHairColor, ::StringW handsId, UnityEngine::Color32 handsColor, ::StringW clothesId, UnityEngine::Color32 clothesPrimaryColor, UnityEngine::Color32 clothesSecondaryColor, UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId, ::StringW mouthId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, headTopId, headTopPrimaryColor, headTopSecondaryColor, glassesId, glassesColor, facialHairId, facialHairColor, handsId, handsColor, clothesId, clothesPrimaryColor, clothesSecondaryColor, clothesDetailColor, skinColorId, eyesId, mouthId);
}
 void GlobalNamespace::MultiplayerAvatarData::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer);
}
 GlobalNamespace::MultiplayerAvatarData GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerAvatarData, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, reader);
}
 GlobalNamespace::MultiplayerAvatarData GlobalNamespace::MultiplayerAvatarData::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerAvatarData, false>(nullptr, ___internal_method, reader);
}
 bool GlobalNamespace::MultiplayerAvatarData::Equals(GlobalNamespace::MultiplayerAvatarData other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerAvatarData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool GlobalNamespace::MultiplayerAvatarData::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t GlobalNamespace::MultiplayerAvatarData::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerAvatarData>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
