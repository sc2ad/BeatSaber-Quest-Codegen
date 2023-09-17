#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SliderShaderWarmup_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::Start)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x224cd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224cf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SliderShaderWarmup::__set__sliderMeshController(::GlobalNamespace::SliderMeshController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderMeshController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SliderMeshController>(value));
}
constexpr ::GlobalNamespace::SliderMeshController ::GlobalNamespace::SliderShaderWarmup::__get__sliderMeshController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMeshController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SliderShaderWarmup::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController ::GlobalNamespace::SliderShaderWarmup::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SliderShaderWarmup::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SliderShaderWarmup::SliderShaderWarmup()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SliderShaderWarmup>())) {}
 void ::GlobalNamespace::SliderShaderWarmup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
