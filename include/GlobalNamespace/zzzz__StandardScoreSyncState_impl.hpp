#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::GlobalNamespace__StandardScoreSyncState__Score(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score  GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::ModifiedScore{0};
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score  GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::MultipliedScore{1};
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score  GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::ImmediateMaxPossibleMultipliedScore{2};
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score  GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::Combo{3};
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score  GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::Multiplier{4};
constexpr GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score  GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score::Count{5};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncState::*)(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score, int32_t)>(&GlobalNamespace::StandardScoreSyncState::SetState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdcd45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.GetDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::GetDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdcd4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.ApplyDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::ApplyDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdcd4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.GetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::StandardScoreSyncState::*)(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score)>(&GlobalNamespace::StandardScoreSyncState::GetState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdcd4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncState::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::StandardScoreSyncState::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xdcd53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncState::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::StandardScoreSyncState::Deserialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xdcd5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdcd614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.GetSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::StandardScoreSyncState::*)()>(&GlobalNamespace::StandardScoreSyncState::GetSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdcd670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__GetDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__GetDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdcd6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__ApplyDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__ApplyDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdcd720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardScoreSyncState.IEquatableByReference_StandardScoreSyncState__Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandardScoreSyncState::*)(ByRef<GlobalNamespace::StandardScoreSyncState>)>(&GlobalNamespace::StandardScoreSyncState::IEquatableByReference_StandardScoreSyncState__Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdcd744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "IEquatableByReference<StandardScoreSyncState>.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t>
constexpr  GlobalNamespace::StandardScoreSyncState::operator GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t>() const {
return GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::StandardScoreSyncState::operator LiteNetLib::Utils::INetSerializable() const {
return LiteNetLib::Utils::INetSerializable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>
constexpr  GlobalNamespace::StandardScoreSyncState::operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>() const {
return GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_multiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::StandardScoreSyncState::StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo, int32_t _multiplier) noexcept : ::bs_hook::ValueTypeWrapper() {this->_modifiedScore = _modifiedScore;
this->_multipliedScore = _multipliedScore;
this->_immediateMaxPossibleMultipliedScore = _immediateMaxPossibleMultipliedScore;
this->_combo = _combo;
this->_multiplier = _multiplier;
}
constexpr void GlobalNamespace::StandardScoreSyncState::__set__modifiedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::StandardScoreSyncState::__get__modifiedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::StandardScoreSyncState::__set__multipliedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::StandardScoreSyncState::__get__multipliedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::StandardScoreSyncState::__set__immediateMaxPossibleMultipliedScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::StandardScoreSyncState::__get__immediateMaxPossibleMultipliedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::StandardScoreSyncState::__set__combo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::StandardScoreSyncState::__get__combo() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::StandardScoreSyncState::__set__multiplier(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::StandardScoreSyncState::__get__multiplier() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
 void GlobalNamespace::StandardScoreSyncState::SetState(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score s, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, s, value);
}
 GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::GetDelta(ByRef<GlobalNamespace::StandardScoreSyncState> stateTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StandardScoreSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateTable);
}
 GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::ApplyDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StandardScoreSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, delta);
}
 int32_t GlobalNamespace::StandardScoreSyncState::GetState(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, s);
}
 void GlobalNamespace::StandardScoreSyncState::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer);
}
 void GlobalNamespace::StandardScoreSyncState::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, reader);
}
 bool GlobalNamespace::StandardScoreSyncState::Equals(ByRef<GlobalNamespace::StandardScoreSyncState> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t GlobalNamespace::StandardScoreSyncState::GetSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__GetDelta(ByRef<GlobalNamespace::StandardScoreSyncState> stateTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StandardScoreSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateTable);
}
 GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__ApplyDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StandardScoreSyncState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, delta);
}
 bool GlobalNamespace::StandardScoreSyncState::IEquatableByReference_StandardScoreSyncState__Equals(ByRef<GlobalNamespace::StandardScoreSyncState> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardScoreSyncState>::get(),
                            "IEquatableByReference<StandardScoreSyncState>.Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::StandardScoreSyncState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
