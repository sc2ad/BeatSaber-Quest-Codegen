#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::AchievementIdsModelSO.get_achievementsIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::AchievementSO> (GlobalNamespace::AchievementIdsModelSO::*)()>(&GlobalNamespace::AchievementIdsModelSO::get_achievementsIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c5934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementIdsModelSO>::get(),
                            "get_achievementsIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AchievementIdsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementIdsModelSO::*)()>(&GlobalNamespace::AchievementIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x20c593c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementIdsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AchievementIdsModelSO::__set__achievementsIds(System::Collections::Generic::List_1<GlobalNamespace::AchievementSO> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::AchievementSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::AchievementSO>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::AchievementSO> GlobalNamespace::AchievementIdsModelSO::__get__achievementsIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::AchievementSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::AchievementSO> GlobalNamespace::AchievementIdsModelSO::get_achievementsIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementIdsModelSO>::get(),
                            "get_achievementsIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::AchievementSO>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::AchievementIdsModelSO::AchievementIdsModelSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<AchievementIdsModelSO>())) {}
 void GlobalNamespace::AchievementIdsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AchievementIdsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
