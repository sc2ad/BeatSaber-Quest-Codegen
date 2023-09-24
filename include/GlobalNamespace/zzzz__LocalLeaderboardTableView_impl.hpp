#pragma once
#include "GlobalNamespace/zzzz__LeaderboardTableView_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::LocalLeaderboardTableView.SetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardTableView::*)(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData>, int32_t, int32_t)>(&GlobalNamespace::LocalLeaderboardTableView::SetScores)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x218c470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalLeaderboardTableView>::get(),
                            "SetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalLeaderboardTableView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalLeaderboardTableView::*)()>(&GlobalNamespace::LocalLeaderboardTableView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x218c6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalLeaderboardTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::LocalLeaderboardTableView::SetScores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> scores, int32_t specialScorePos, int32_t maxNumberOfCells)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalLeaderboardTableView>::get(),
                            "SetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scores, specialScorePos, maxNumberOfCells);
}
 GlobalNamespace::LocalLeaderboardTableView GlobalNamespace::LocalLeaderboardTableView::New_ctor()  {
GlobalNamespace::LocalLeaderboardTableView o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LocalLeaderboardTableView>())};
return o;
}
 void GlobalNamespace::LocalLeaderboardTableView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalLeaderboardTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
