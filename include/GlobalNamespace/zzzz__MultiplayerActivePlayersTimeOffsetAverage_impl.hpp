#pragma once
#include "GlobalNamespace/zzzz__MultiplayerActivePlayersTimeOffsetAverage_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_offsetSyncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(&GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x20efc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>::get(),
                            "get_offsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage.get_isFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(&GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x20efe14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>::get(),
                            "get_isFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::*)()>(&GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20eff5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IMultiplayerObservable
constexpr  GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::operator GlobalNamespace::IMultiplayerObservable() const noexcept {
return GlobalNamespace::IMultiplayerObservable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr GlobalNamespace::IMultiplayerSessionManager GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IMultiplayerSessionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__set__lastReturnedOffsetSyncTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__lastReturnedOffsetSyncTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__set__timeOfLastValidReturnedTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::__get__timeOfLastValidReturnedTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_offsetSyncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>::get(),
                            "get_offsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::get_isFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>::get(),
                            "get_isFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::New_ctor()  {
GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>())};
return o;
}
 void GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
