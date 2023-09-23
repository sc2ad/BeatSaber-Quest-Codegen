#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CenterStageLobbyViewController_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
//  Writing Method size for method: GlobalNamespace::CenterStageLobbyViewController.SetLevelGameplaySetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageLobbyViewController::*)(GlobalNamespace::ILevelGameplaySetupData)>(&GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2175aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CenterStageLobbyViewController>::get(),
                            "SetLevelGameplaySetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ILevelGameplaySetupData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CenterStageLobbyViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageLobbyViewController::*)()>(&GlobalNamespace::CenterStageLobbyViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2175c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CenterStageLobbyViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CenterStageLobbyViewController::__set__beatmapSelectionView(GlobalNamespace::BeatmapSelectionView value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapSelectionView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapSelectionView>(value));
}
constexpr GlobalNamespace::BeatmapSelectionView GlobalNamespace::CenterStageLobbyViewController::__get__beatmapSelectionView() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapSelectionView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CenterStageLobbyViewController::__set__modifiersSelectionView(GlobalNamespace::ModifiersSelectionView value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ModifiersSelectionView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ModifiersSelectionView>(value));
}
constexpr GlobalNamespace::ModifiersSelectionView GlobalNamespace::CenterStageLobbyViewController::__get__modifiersSelectionView() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ModifiersSelectionView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData(GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CenterStageLobbyViewController>::get(),
                            "SetLevelGameplaySetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ILevelGameplaySetupData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levelGameplaySetupData);
}
// Ctor Parameters []
 GlobalNamespace::CenterStageLobbyViewController::CenterStageLobbyViewController()  : HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<CenterStageLobbyViewController>())) {}
 void GlobalNamespace::CenterStageLobbyViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CenterStageLobbyViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
