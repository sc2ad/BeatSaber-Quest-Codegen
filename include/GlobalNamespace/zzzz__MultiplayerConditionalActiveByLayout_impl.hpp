#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConditionalActiveByLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition  GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition::ShowIf{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition  GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition::HideIf{1};
//  Writing Method size for method: GlobalNamespace::MultiplayerConditionalActiveByLayout.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&GlobalNamespace::MultiplayerConditionalActiveByLayout::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x20f1590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConditionalActiveByLayout>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConditionalActiveByLayout.HandlePlayersLayoutWasCalculated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConditionalActiveByLayout::*)(GlobalNamespace::MultiplayerPlayerLayout, int32_t)>(&GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20f1630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConditionalActiveByLayout>::get(),
                            "HandlePlayersLayoutWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlayerLayout>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerConditionalActiveByLayout._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConditionalActiveByLayout::*)()>(&GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f1688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConditionalActiveByLayout>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__set__condition(GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__condition() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerConditionalActiveByLayout__Condition, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__set__layout(GlobalNamespace::MultiplayerPlayerLayout value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayerLayout, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayerLayout>(value));
}
constexpr GlobalNamespace::MultiplayerPlayerLayout GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__layout() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayerLayout, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerConditionalActiveByLayout::__set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLayoutProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLayoutProvider>(value));
}
constexpr GlobalNamespace::MultiplayerLayoutProvider GlobalNamespace::MultiplayerConditionalActiveByLayout::__get__layoutProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLayoutProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerConditionalActiveByLayout::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConditionalActiveByLayout>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerConditionalActiveByLayout::HandlePlayersLayoutWasCalculated(GlobalNamespace::MultiplayerPlayerLayout layout, int32_t playersCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConditionalActiveByLayout>::get(),
                            "HandlePlayersLayoutWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlayerLayout>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layout, playersCount);
}
 GlobalNamespace::MultiplayerConditionalActiveByLayout GlobalNamespace::MultiplayerConditionalActiveByLayout::New_ctor()  {
GlobalNamespace::MultiplayerConditionalActiveByLayout o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MultiplayerConditionalActiveByLayout>())};
return o;
}
 void GlobalNamespace::MultiplayerConditionalActiveByLayout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerConditionalActiveByLayout>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
