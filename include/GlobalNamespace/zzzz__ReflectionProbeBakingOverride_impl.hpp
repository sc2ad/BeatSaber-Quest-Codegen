#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling  GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling::LeaveAsIs{0};
constexpr GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling  GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling::Enable{1};
constexpr GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling  GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling::Disable{2};
//  Writing Method size for method: GlobalNamespace::ReflectionProbeBakingOverride.UpdateForProbeBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeBakingOverride::*)()>(&GlobalNamespace::ReflectionProbeBakingOverride::UpdateForProbeBaking)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x219ce88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingOverride>::get(),
                            "UpdateForProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ReflectionProbeBakingOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeBakingOverride::*)()>(&GlobalNamespace::ReflectionProbeBakingOverride::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x219cf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__stateHandling(GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling GlobalNamespace::ReflectionProbeBakingOverride::__get__stateHandling() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__setPosition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ReflectionProbeBakingOverride::__get__setPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__localPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::ReflectionProbeBakingOverride::__get__localPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__setRotation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ReflectionProbeBakingOverride::__get__setRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__localRotation(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::ReflectionProbeBakingOverride::__get__localRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__setScale(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ReflectionProbeBakingOverride::__get__setScale() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__set__localScale(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::ReflectionProbeBakingOverride::__get__localScale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ReflectionProbeBakingOverride::UpdateForProbeBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingOverride>::get(),
                            "UpdateForProbeBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::ReflectionProbeBakingOverride::ReflectionProbeBakingOverride()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ReflectionProbeBakingOverride>())) {}
 void GlobalNamespace::ReflectionProbeBakingOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReflectionProbeBakingOverride>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
