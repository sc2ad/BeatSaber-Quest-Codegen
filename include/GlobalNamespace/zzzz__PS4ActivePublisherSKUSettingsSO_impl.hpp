#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PS4ActivePublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4PublisherSKUSettingsSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::PS4ActivePublisherSKUSettingsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4ActivePublisherSKUSettingsSO::*)()>(&GlobalNamespace::PS4ActivePublisherSKUSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4ActivePublisherSKUSettingsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS4ActivePublisherSKUSettingsSO::__set_activePublisherSKUSettings(GlobalNamespace::PS4PublisherSKUSettingsSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PS4PublisherSKUSettingsSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PS4PublisherSKUSettingsSO>(value));
}
constexpr GlobalNamespace::PS4PublisherSKUSettingsSO GlobalNamespace::PS4ActivePublisherSKUSettingsSO::__get_activePublisherSKUSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PS4PublisherSKUSettingsSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::PS4ActivePublisherSKUSettingsSO::PS4ActivePublisherSKUSettingsSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<PS4ActivePublisherSKUSettingsSO>())) {}
 void GlobalNamespace::PS4ActivePublisherSKUSettingsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4ActivePublisherSKUSettingsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
