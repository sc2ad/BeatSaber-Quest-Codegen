#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::GameplayModifierMask, ::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::BeatmapLevelSelectionMask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xd9cb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::BeatmapLevelSelectionMask::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xd9cb2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BeatmapLevelSelectionMask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::BeatmapLevelSelectionMask::Equals)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xd9cbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSelectionMask::*)()>(&::GlobalNamespace::BeatmapLevelSelectionMask::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xd9ccb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BeatmapLevelSelectionMask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSelectionMask::*)(::LiteNetLib::Utils::NetDataWriter, uint32_t)>(&::GlobalNamespace::BeatmapLevelSelectionMask::Serialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xd9cce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (*)(::LiteNetLib::Utils::NetDataReader, uint32_t)>(&::GlobalNamespace::BeatmapLevelSelectionMask::Deserialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xd9cd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::BeatmapLevelSelectionMask::op_Equality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xd9cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSelectionMask.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::BeatmapLevelSelectionMask::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xd9cdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>
constexpr  ::GlobalNamespace::BeatmapLevelSelectionMask::operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>() const {
return ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "modifiers", ty: "::GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask::BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks) noexcept : ::bs_hook::ValueTypeWrapper() {this->difficulties = difficulties;
this->modifiers = modifiers;
this->songPacks = songPacks;
}
constexpr void ::GlobalNamespace::BeatmapLevelSelectionMask::__set_difficulties(::GlobalNamespace::BeatmapDifficultyMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x0>(this->__instance, std::forward<::GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask ::GlobalNamespace::BeatmapLevelSelectionMask::__get_difficulties() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSelectionMask::__set_modifiers(::GlobalNamespace::GameplayModifierMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifierMask, 0x2>(this->__instance, std::forward<::GlobalNamespace::GameplayModifierMask>(value));
}
constexpr ::GlobalNamespace::GameplayModifierMask ::GlobalNamespace::BeatmapLevelSelectionMask::__get_modifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierMask, 0x2>(this->__instance);
}
constexpr void ::GlobalNamespace::BeatmapLevelSelectionMask::__set_songPacks(::GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->__instance, std::forward<::GlobalNamespace::SongPackMask>(value));
}
constexpr ::GlobalNamespace::SongPackMask ::GlobalNamespace::BeatmapLevelSelectionMask::__get_songPacks() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x8>(this->__instance);
}
 void ::GlobalNamespace::BeatmapLevelSelectionMask::_ctor(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, difficulties, modifiers, songPacks);
}
 bool ::GlobalNamespace::BeatmapLevelSelectionMask::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool ::GlobalNamespace::BeatmapLevelSelectionMask::Equals(::GlobalNamespace::BeatmapLevelSelectionMask other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t ::GlobalNamespace::BeatmapLevelSelectionMask::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param version: uint32_t (default: 0u)
 void ::GlobalNamespace::BeatmapLevelSelectionMask::Serialize(::LiteNetLib::Utils::NetDataWriter writer, uint32_t version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer, version);
}
/// @param version: uint32_t (default: 0u)
 ::GlobalNamespace::BeatmapLevelSelectionMask ::GlobalNamespace::BeatmapLevelSelectionMask::Deserialize(::LiteNetLib::Utils::NetDataReader reader, uint32_t version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(nullptr, ___internal_method, reader, version);
}
 bool ::GlobalNamespace::BeatmapLevelSelectionMask::op_Equality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, l, r);
}
 bool ::GlobalNamespace::BeatmapLevelSelectionMask::op_Inequality(::GlobalNamespace::BeatmapLevelSelectionMask l, ::GlobalNamespace::BeatmapLevelSelectionMask r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, l, r);
}
} // end anonymous namespace
