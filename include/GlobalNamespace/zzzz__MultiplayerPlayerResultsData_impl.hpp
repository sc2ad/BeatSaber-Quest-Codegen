#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerPlayerResultsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPlayerResultsData::*)(GlobalNamespace::IConnectedPlayer, GlobalNamespace::MultiplayerLevelCompletionResults)>(&GlobalNamespace::MultiplayerPlayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20ffaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPlayerResultsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerPlayerResultsData.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerPlayerResultsData::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::MultiplayerPlayerResultsData::CompareTo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x20ffad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPlayerResultsData>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IComparable
constexpr  GlobalNamespace::MultiplayerPlayerResultsData::operator System::IComparable() const noexcept {
return System::IComparable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__set_connectedPlayer(GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectedPlayer>(value));
}
constexpr GlobalNamespace::IConnectedPlayer GlobalNamespace::MultiplayerPlayerResultsData::__get_connectedPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectedPlayer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__set_multiplayerLevelCompletionResults(GlobalNamespace::MultiplayerLevelCompletionResults value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLevelCompletionResults>(value));
}
constexpr GlobalNamespace::MultiplayerLevelCompletionResults GlobalNamespace::MultiplayerPlayerResultsData::__get_multiplayerLevelCompletionResults() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLevelCompletionResults, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__set_badge(GlobalNamespace::MultiplayerBadgeAwardData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerBadgeAwardData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerBadgeAwardData>(value));
}
constexpr GlobalNamespace::MultiplayerBadgeAwardData GlobalNamespace::MultiplayerPlayerResultsData::__get_badge() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerBadgeAwardData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MultiplayerPlayerResultsData GlobalNamespace::MultiplayerPlayerResultsData::New_ctor(GlobalNamespace::IConnectedPlayer connectedPlayer, GlobalNamespace::MultiplayerLevelCompletionResults multiplayerLevelCompletionResults)  {
GlobalNamespace::MultiplayerPlayerResultsData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerPlayerResultsData>(connectedPlayer, multiplayerLevelCompletionResults))};
return o;
}
 void GlobalNamespace::MultiplayerPlayerResultsData::_ctor(GlobalNamespace::IConnectedPlayer connectedPlayer, GlobalNamespace::MultiplayerLevelCompletionResults multiplayerLevelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPlayerResultsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer, multiplayerLevelCompletionResults);
}
 int32_t GlobalNamespace::MultiplayerPlayerResultsData::CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPlayerResultsData>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
