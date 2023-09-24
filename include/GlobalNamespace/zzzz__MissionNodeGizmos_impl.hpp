#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeGizmos_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionNodeGizmos._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeGizmos::*)()>(&GlobalNamespace::MissionNodeGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2149138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionNodeGizmos>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionNodeGizmos::__set__missionNode(GlobalNamespace::MissionNode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNode>(value));
}
constexpr GlobalNamespace::MissionNode GlobalNamespace::MissionNodeGizmos::__get__missionNode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionNodeGizmos::__set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiersModelSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr GlobalNamespace::GameplayModifiersModelSO GlobalNamespace::MissionNodeGizmos::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiersModelSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionNodeGizmos::__set__missionProgressModel(GlobalNamespace::CampaignProgressModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CampaignProgressModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CampaignProgressModel>(value));
}
constexpr GlobalNamespace::CampaignProgressModel GlobalNamespace::MissionNodeGizmos::__get__missionProgressModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CampaignProgressModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MissionNodeGizmos GlobalNamespace::MissionNodeGizmos::New_ctor()  {
GlobalNamespace::MissionNodeGizmos o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MissionNodeGizmos>())};
return o;
}
 void GlobalNamespace::MissionNodeGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionNodeGizmos>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
