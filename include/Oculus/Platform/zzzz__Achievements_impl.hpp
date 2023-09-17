#pragma once
namespace {
#include "Oculus/Platform/zzzz__Achievements_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Achievements.AddCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate> (*)(::StringW, uint64_t)>(&::Oculus::Platform::Achievements::AddCount)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x258f7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "AddCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.AddFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate> (*)(::StringW, ::StringW)>(&::Oculus::Platform::Achievements::AddFields)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x258f918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "AddFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetAllDefinitions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList> (*)()>(&::Oculus::Platform::Achievements::GetAllDefinitions)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258fa88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetAllDefinitions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetAllProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList> (*)()>(&::Oculus::Platform::Achievements::GetAllProgress)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x258fbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetAllProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetDefinitionsByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList> (*)(::ArrayW<::StringW>)>(&::Oculus::Platform::Achievements::GetDefinitionsByName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x258fd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetDefinitionsByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetProgressByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList> (*)(::ArrayW<::StringW>)>(&::Oculus::Platform::Achievements::GetProgressByName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x258feac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetProgressByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.Unlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate> (*)(::StringW)>(&::Oculus::Platform::Achievements::Unlock)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2590020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "Unlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetNextAchievementDefinitionListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList> (*)(::Oculus::Platform::Models::AchievementDefinitionList)>(&::Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2590180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetNextAchievementDefinitionListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AchievementDefinitionList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Achievements.GetNextAchievementProgressListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList> (*)(::Oculus::Platform::Models::AchievementProgressList)>(&::Oculus::Platform::Achievements::GetNextAchievementProgressListPage)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x259035c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetNextAchievementProgressListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AchievementProgressList>::get()}
                        )));
    return ___internal_method;
  }
};
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate> ::Oculus::Platform::Achievements::AddCount(::StringW name, uint64_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "AddCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate>, false>(nullptr, ___internal_method, name, count);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate> ::Oculus::Platform::Achievements::AddFields(::StringW name, ::StringW fields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "AddFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate>, false>(nullptr, ___internal_method, name, fields);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList> ::Oculus::Platform::Achievements::GetAllDefinitions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetAllDefinitions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList>, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList> ::Oculus::Platform::Achievements::GetAllProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetAllProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList>, false>(nullptr, ___internal_method);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList> ::Oculus::Platform::Achievements::GetDefinitionsByName(::ArrayW<::StringW> names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetDefinitionsByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList>, false>(nullptr, ___internal_method, names);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList> ::Oculus::Platform::Achievements::GetProgressByName(::ArrayW<::StringW> names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetProgressByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList>, false>(nullptr, ___internal_method, names);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate> ::Oculus::Platform::Achievements::Unlock(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "Unlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementUpdate>, false>(nullptr, ___internal_method, name);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList> ::Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage(::Oculus::Platform::Models::AchievementDefinitionList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetNextAchievementDefinitionListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AchievementDefinitionList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementDefinitionList>, false>(nullptr, ___internal_method, list);
}
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList> ::Oculus::Platform::Achievements::GetNextAchievementProgressListPage(::Oculus::Platform::Models::AchievementProgressList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Achievements>::get(),
                            "GetNextAchievementProgressListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::AchievementProgressList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AchievementProgressList>, false>(nullptr, ___internal_method, list);
}
} // end anonymous namespace
