#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::SongFinished{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::NotFinished{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::NotStarted{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Cleared{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Failed{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::GivenUp{2};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Quit{3};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::HostEndedLevel{4};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::WasInactive{5};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::StartupFailed{6};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason  GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::ConnectedAfterLevelEnded{7};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbca4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_playerLevelEndState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbca54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_playerLevelEndReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.get_levelCompletionResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbca5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_levelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.get_hasAnyResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdbca64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_hasAnyResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.get_failedOrGivenUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdbca80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_failedOrGivenUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbca94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelCompletionResults::*)(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, GlobalNamespace::LevelCompletionResults)>(&GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xdbca9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelCompletionResults::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::MultiplayerLevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xdbcad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLevelCompletionResults (GlobalNamespace::MultiplayerLevelCompletionResults::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdbcb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerLevelCompletionResults::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xdbcbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLevelCompletionResults.HasAnyResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState)>(&GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdbca74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "HasAnyResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults>
constexpr  GlobalNamespace::MultiplayerLevelCompletionResults::operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults>() const noexcept {
return LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IComparable
constexpr  GlobalNamespace::MultiplayerLevelCompletionResults::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__playerLevelEndState(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__playerLevelEndReason(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndReason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__levelCompletionResults(GlobalNamespace::LevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelCompletionResults>(value));
}
constexpr GlobalNamespace::LevelCompletionResults GlobalNamespace::MultiplayerLevelCompletionResults::__get__levelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_playerLevelEndState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_playerLevelEndReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LevelCompletionResults GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_levelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LevelCompletionResults, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_hasAnyResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "get_failedOrGivenUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelCompletionResults()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLevelCompletionResults>())) {}
 void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "playerLevelEndState", ty: "GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState", modifiers: "", def_value: None }, CppParam { name: "playerLevelEndReason", ty: "GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason", modifiers: "", def_value: None }, CppParam { name: "levelCompletionResults", ty: "GlobalNamespace::LevelCompletionResults", modifiers: "", def_value: None }]
 GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelCompletionResults(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState, GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason, GlobalNamespace::LevelCompletionResults levelCompletionResults)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLevelCompletionResults>(playerLevelEndState, playerLevelEndReason, levelCompletionResults))) {}
 void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState, GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason, GlobalNamespace::LevelCompletionResults levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerLevelEndState, playerLevelEndReason, levelCompletionResults);
}
 void GlobalNamespace::MultiplayerLevelCompletionResults::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 GlobalNamespace::MultiplayerLevelCompletionResults GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerLevelCompletionResults, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 int32_t GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLevelCompletionResults>::get(),
                            "HasAnyResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, playerLevelEndState);
}
