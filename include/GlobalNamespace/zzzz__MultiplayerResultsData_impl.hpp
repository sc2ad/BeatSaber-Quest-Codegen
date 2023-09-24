#pragma once
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsData.get_gameId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_gameId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_gameId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsData.get_localPlayerResultData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerPlayerResultsData (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_localPlayerResultData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsData.get_otherPlayersData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_otherPlayersData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_otherPlayersData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsData.get_allPlayersSortedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_allPlayersSortedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerResultsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsData::*)(::StringW, GlobalNamespace::MultiplayerLevelCompletionResults, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>, GlobalNamespace::MultiplayerBadgesProvider, GlobalNamespace::IMultiplayerSessionManager)>(&GlobalNamespace::MultiplayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x20f2abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerBadgesProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerResultsData::__set__gameId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerResultsData::__get__gameId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__localPlayerResultData(GlobalNamespace::MultiplayerPlayerResultsData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayerResultsData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayerResultsData>(value));
}
constexpr GlobalNamespace::MultiplayerPlayerResultsData GlobalNamespace::MultiplayerResultsData::__get__localPlayerResultData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayerResultsData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__otherPlayersData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> GlobalNamespace::MultiplayerResultsData::__get__otherPlayersData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__allPlayersSortedData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> GlobalNamespace::MultiplayerResultsData::__get__allPlayersSortedData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::MultiplayerResultsData::get_gameId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_gameId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerPlayerResultsData GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_localPlayerResultData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MultiplayerPlayerResultsData, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> GlobalNamespace::MultiplayerResultsData::get_otherPlayersData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_otherPlayersData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            "get_allPlayersSortedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MultiplayerResultsData GlobalNamespace::MultiplayerResultsData::New_ctor(::StringW gameId, GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResultData, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayersResultData, GlobalNamespace::MultiplayerBadgesProvider badgesProvider, GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
GlobalNamespace::MultiplayerResultsData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerResultsData>(gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager))};
return o;
}
 void GlobalNamespace::MultiplayerResultsData::_ctor(::StringW gameId, GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResultData, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayersResultData, GlobalNamespace::MultiplayerBadgesProvider badgesProvider, GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerResultsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerLevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerBadgesProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IMultiplayerSessionManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager);
}
