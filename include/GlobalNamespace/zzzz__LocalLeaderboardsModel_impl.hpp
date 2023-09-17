#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType  ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType::AllTime{0};
constexpr ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType  ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType::Daily{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::*)()>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c60c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__set__score(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__get__score() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__set__playerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__get__playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__set__fullCombo(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__get__fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__set__timestamp(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::__get__timestamp() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::____GlobalNamespace__LocalLeaderboardsModel__ScoreData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LocalLeaderboardsModel__ScoreData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::*)()>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c60bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::__set__leaderboardId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::__get__leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::__set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::__get__scores() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData::*)()>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c5598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData::__set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData::__get__leaderboardsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__SavedLeaderboardsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::*)()>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c69b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c._AppendLeaderboardScores_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::*)(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData)>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_AppendLeaderboardScores_b__16_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21c69c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            "<AppendLeaderboardScores>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c._MigrateQuestLeaderboards_b__17_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::*)(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData)>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c69e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            "<MigrateQuestLeaderboards>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c._MigrateQuestLeaderboards_b__17_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::*)(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData)>(&::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21c6a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            "<MigrateQuestLeaderboards>b__17_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__set___9(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c value)  {
::cordl_internals::setStaticField<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>(std::forward<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>(value));
}
 ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__get___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__set___9__16_0(::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>(std::forward<::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>>(value));
}
 ::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__get___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__set___9__17_0(::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool> value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool>, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>(std::forward<::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool>>(value));
}
 ::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool> ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__get___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData,bool>, "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>();
}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__set___9__17_1(::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>(std::forward<::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>(value));
}
 ::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::__get___9__17_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get>();
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::____GlobalNamespace__LocalLeaderboardsModel____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__LocalLeaderboardsModel____c>())) {}
 void ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_AppendLeaderboardScores_b__16_0(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData a, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            "<AppendLeaderboardScores>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
 bool ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_0(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData leaderboardData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            "<MigrateQuestLeaderboards>b__17_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaderboardData);
}
 bool ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c::_MigrateQuestLeaderboards_b__17_1(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData leaderboardData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel____c>::get(),
                            "<MigrateQuestLeaderboards>b__17_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaderboardData);
}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.add_newScoreWasAddedToLeaderboardEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>)>(&::GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c50c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "add_newScoreWasAddedToLeaderboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.remove_newScoreWasAddedToLeaderboardEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>)>(&::GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c5170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "remove_newScoreWasAddedToLeaderboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.LoadLeaderboardsData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData, ::StringW, ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>)>(&::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21c5220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "LoadLeaderboardsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.SaveLeaderboardsData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>)>(&::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x21c5460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "SaveLeaderboardsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AppendLeaderboardScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x21c55a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "AppendLeaderboardScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.MigrateQuestLeaderboards
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x21c5714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "MigrateQuestLeaderboards",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData)>(&::GlobalNamespace::LocalLeaderboardsModel::Save)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21c5a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardsData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21c5af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetLeaderboardsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLeaderboardData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21c5b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetLeaderboardData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetCurrentTimestamp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21c5bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetCurrentTimestamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.UpdateDailyLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21c5cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "UpdateDailyLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType, ::StringW, int32_t, bool)>(&::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x21c5da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "AddScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21c60cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "WillScoreGoIntoLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21c6194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetHighScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetHighScore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21c61ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetHighScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetPositionInLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21c6250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetPositionInLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.GetLastScorePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType)>(&::GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21c6324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetLastScorePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLastScorePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c63bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "ClearLastScorePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.AddScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, ::StringW, int32_t, bool)>(&::GlobalNamespace::LocalLeaderboardsModel::AddScore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21c6414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "AddScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.WillScoreGoIntoLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW, int32_t)>(&::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21c6470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "WillScoreGoIntoLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::StringW)>(&::GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21c64c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "ClearLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.ClearAllLeaderboards
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData, bool)>(&::GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboards)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x21c65f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "ClearAllLeaderboards",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)(::GlobalNamespace::ISaveData)>(&::GlobalNamespace::LocalLeaderboardsModel::Load)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21c67d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalLeaderboardsModel::*)()>(&::GlobalNamespace::LocalLeaderboardsModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21c68d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LocalLeaderboardsModel::__set__maxNumberOfScoresInLeaderboard(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::LocalLeaderboardsModel::__get__maxNumberOfScoresInLeaderboard() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LocalLeaderboardsModel::__set_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>>(value));
}
constexpr ::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> ::GlobalNamespace::LocalLeaderboardsModel::__get_newScoreWasAddedToLeaderboardEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LocalLeaderboardsModel::__set__lastScorePositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t> ::GlobalNamespace::LocalLeaderboardsModel::__get__lastScorePositions() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType,int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LocalLeaderboardsModel::__set__lastScoreLeaderboardId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::LocalLeaderboardsModel::__get__lastScoreLeaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LocalLeaderboardsModel::__set__leaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> ::GlobalNamespace::LocalLeaderboardsModel::__get__leaderboardsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LocalLeaderboardsModel::__set__dailyLeaderboardsData(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> ::GlobalNamespace::LocalLeaderboardsModel::__get__dailyLeaderboardsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::add_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "add_newScoreWasAddedToLeaderboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::remove_newScoreWasAddedToLeaderboardEvent(::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "remove_newScoreWasAddedToLeaderboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::LoadLeaderboardsData(::GlobalNamespace::ISaveData saveData, ::StringW filename, ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>> leaderboardsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "LoadLeaderboardsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData, filename, leaderboardsData);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::SaveLeaderboardsData(::GlobalNamespace::ISaveData saveData, ::StringW filename, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> leaderboardsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "SaveLeaderboardsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData, filename, leaderboardsData);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::AppendLeaderboardScores(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> main, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> tail, int32_t maxNumberOfScores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "AppendLeaderboardScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, main, tail, maxNumberOfScores);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::MigrateQuestLeaderboards(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> leaderboardDataList, int32_t maxNumberOfScores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "MigrateQuestLeaderboards",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leaderboardDataList, maxNumberOfScores);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::Save(::GlobalNamespace::ISaveData saveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData);
}
 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData> ::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardsData(::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetLeaderboardsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData>, false>(const_cast<void*>(instance), ___internal_method, leaderboardType);
}
 ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData ::GlobalNamespace::LocalLeaderboardsModel::GetLeaderboardData(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetLeaderboardData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardData, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType);
}
 int64_t ::GlobalNamespace::LocalLeaderboardsModel::GetCurrentTimestamp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetCurrentTimestamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::UpdateDailyLeaderboard(::StringW leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "UpdateDailyLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, leaderboardId);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType, ::StringW playerName, int32_t score, bool fullCombo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "AddScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType, playerName, score, fullCombo);
}
 bool ::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "WillScoreGoIntoLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType, score);
}
 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData> ::GlobalNamespace::LocalLeaderboardsModel::GetScores(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__ScoreData>, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType);
}
 int32_t ::GlobalNamespace::LocalLeaderboardsModel::GetHighScore(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetHighScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType);
}
 int32_t ::GlobalNamespace::LocalLeaderboardsModel::GetPositionInLeaderboard(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType, int32_t score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetPositionInLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType, score);
}
 int32_t ::GlobalNamespace::LocalLeaderboardsModel::GetLastScorePosition(::StringW leaderboardId, ::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "GetLastScorePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__LocalLeaderboardsModel__LeaderboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, leaderboardType);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::ClearLastScorePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "ClearLastScorePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::AddScore(::StringW leaderboardId, ::StringW playerName, int32_t score, bool fullCombo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "AddScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, playerName, score, fullCombo);
}
 bool ::GlobalNamespace::LocalLeaderboardsModel::WillScoreGoIntoLeaderboard(::StringW leaderboardId, int32_t score)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "WillScoreGoIntoLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaderboardId, score);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::ClearLeaderboard(::StringW leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "ClearLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, leaderboardId);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::ClearAllLeaderboards(::GlobalNamespace::ISaveData saveData, bool deleteLeaderboardFile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "ClearAllLeaderboards",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData, deleteLeaderboardFile);
}
 void ::GlobalNamespace::LocalLeaderboardsModel::Load(::GlobalNamespace::ISaveData saveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData);
}
// Ctor Parameters []
 ::GlobalNamespace::LocalLeaderboardsModel::LocalLeaderboardsModel()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<LocalLeaderboardsModel>())) {}
 void ::GlobalNamespace::LocalLeaderboardsModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalLeaderboardsModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
