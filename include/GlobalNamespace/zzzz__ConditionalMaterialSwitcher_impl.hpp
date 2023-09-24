#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalMaterialSwitcher_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::ConditionalMaterialSwitcher.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalMaterialSwitcher::*)()>(&GlobalNamespace::ConditionalMaterialSwitcher::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21156cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConditionalMaterialSwitcher>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConditionalMaterialSwitcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalMaterialSwitcher::*)()>(&GlobalNamespace::ConditionalMaterialSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConditionalMaterialSwitcher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__material0(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::ConditionalMaterialSwitcher::__get__material0() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__material1(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::ConditionalMaterialSwitcher::__get__material1() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__value(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::ConditionalMaterialSwitcher::__get__value() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__renderer(UnityEngine::Renderer value)  {
::cordl_internals::setInstanceField<UnityEngine::Renderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Renderer>(value));
}
constexpr UnityEngine::Renderer GlobalNamespace::ConditionalMaterialSwitcher::__get__renderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Renderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ConditionalMaterialSwitcher::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConditionalMaterialSwitcher>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ConditionalMaterialSwitcher GlobalNamespace::ConditionalMaterialSwitcher::New_ctor()  {
GlobalNamespace::ConditionalMaterialSwitcher o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ConditionalMaterialSwitcher>())};
return o;
}
 void GlobalNamespace::ConditionalMaterialSwitcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConditionalMaterialSwitcher>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
