#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode::GlobalNamespace__AppInitSetupData__RunMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode  GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode::Game{0};
constexpr GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode  GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode::PlayTest{1};
//  Writing Method size for method: GlobalNamespace::AppInitSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitSetupData::*)()>(&GlobalNamespace::AppInitSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20b46cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AppInitSetupData::__set_runMode(GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode>(value));
}
constexpr GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode GlobalNamespace::AppInitSetupData::__get_runMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__AppInitSetupData__RunMode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::AppInitSetupData GlobalNamespace::AppInitSetupData::New_ctor()  {
GlobalNamespace::AppInitSetupData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AppInitSetupData>())};
return o;
}
 void GlobalNamespace::AppInitSetupData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AppInitSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
