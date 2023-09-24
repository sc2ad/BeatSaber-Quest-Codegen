#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::*)()>(&GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218c878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0._SetGameplayModifiers_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::*)(int32_t, GlobalNamespace::GameplayModifierInfoListItem)>(&GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::_SetGameplayModifiers_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x218c888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0>::get(),
                            "<SetGameplayModifiers>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::__set_modifierParams(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::__get_modifierParams() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0::_SetGameplayModifiers_b__0(int32_t idx, GlobalNamespace::GameplayModifierInfoListItem item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0>::get(),
                            "<SetGameplayModifiers>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, item);
}
//  Writing Method size for method: GlobalNamespace::ModifiersSelectionView.SetGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ModifiersSelectionView::*)(GlobalNamespace::GameplayModifiers)>(&GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x218c70c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ModifiersSelectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ModifiersSelectionView>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ModifiersSelectionView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ModifiersSelectionView::*)()>(&GlobalNamespace::ModifiersSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218c880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ModifiersSelectionView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ModifiersSelectionView::__set__modifierInfoList(GlobalNamespace::GameplayModifierInfoListItemsList value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifierInfoListItemsList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifierInfoListItemsList>(value));
}
constexpr GlobalNamespace::GameplayModifierInfoListItemsList GlobalNamespace::ModifiersSelectionView::__get__modifierInfoList() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifierInfoListItemsList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ModifiersSelectionView::__set__noModifiersText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::ModifiersSelectionView::__get__noModifiersText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ModifiersSelectionView::__set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiersModelSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr GlobalNamespace::GameplayModifiersModelSO GlobalNamespace::ModifiersSelectionView::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiersModelSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers(GlobalNamespace::GameplayModifiers gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ModifiersSelectionView>::get(),
                            "SetGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplayModifiers);
}
 GlobalNamespace::ModifiersSelectionView GlobalNamespace::ModifiersSelectionView::New_ctor()  {
GlobalNamespace::ModifiersSelectionView o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ModifiersSelectionView>())};
return o;
}
 void GlobalNamespace::ModifiersSelectionView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ModifiersSelectionView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
