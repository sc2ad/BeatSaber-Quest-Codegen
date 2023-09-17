#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataFullComboSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataFullComboSO.CalculateBadgeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData (::GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>, ::GlobalNamespace::PlayerDataModel, ::GlobalNamespace::IDifficultyBeatmap, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x20d8170;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MultiplayerBadgeDataFullComboSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataFullComboSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataFullComboSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20d8634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::__set__weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::__get__weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::MultiplayerBadgeAwardData ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> resultsData, ::GlobalNamespace::PlayerDataModel playerDataModel, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, float_t randomMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO>::get(),
                            "CalculateBadgeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData, false>(const_cast<void*>(instance), ___internal_method, resultsData, playerDataModel, difficultyBeatmap, randomMultiplier);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::MultiplayerBadgeDataFullComboSO()  : ::GlobalNamespace::MultiplayerBadgeDataSO(THROW_UNLESS(::il2cpp_utils::New<MultiplayerBadgeDataFullComboSO>())) {}
 void ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
