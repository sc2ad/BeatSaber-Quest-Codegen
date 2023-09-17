#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SetBlocksBladeSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__BlocksBlade_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetBlocksBladeSaberGlowColor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetBlocksBladeSaberGlowColor::*)()>(&::GlobalNamespace::SetBlocksBladeSaberGlowColor::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x210c9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetBlocksBladeSaberGlowColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetBlocksBladeSaberGlowColor::*)()>(&::GlobalNamespace::SetBlocksBladeSaberGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210ca28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SetBlocksBladeSaberGlowColor::__set__saber(::GlobalNamespace::SaberTypeObject value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberTypeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SaberTypeObject>(value));
}
constexpr ::GlobalNamespace::SaberTypeObject ::GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__saber() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberTypeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SetBlocksBladeSaberGlowColor::__set__colorManager(::GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorManager>(value));
}
constexpr ::GlobalNamespace::ColorManager ::GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SetBlocksBladeSaberGlowColor::__set__blocksBlade(::GlobalNamespace::BlocksBlade value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BlocksBlade, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BlocksBlade>(value));
}
constexpr ::GlobalNamespace::BlocksBlade ::GlobalNamespace::SetBlocksBladeSaberGlowColor::__get__blocksBlade() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BlocksBlade, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SetBlocksBladeSaberGlowColor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SetBlocksBladeSaberGlowColor::SetBlocksBladeSaberGlowColor()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SetBlocksBladeSaberGlowColor>())) {}
 void ::GlobalNamespace::SetBlocksBladeSaberGlowColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetBlocksBladeSaberGlowColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
