#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_AssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetPreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetPreset::*)()>(&::HoudiniEngineUnity::HEU_AssetPreset::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1fdad2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPreset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set__identifier(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::HoudiniEngineUnity::HEU_AssetPreset::__get__identifier() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set__version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_AssetPreset::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set__assetOPName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_AssetPreset::__get__assetOPName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set__parameterPreset(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::HoudiniEngineUnity::HEU_AssetPreset::__get__parameterPreset() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set__curveNames(::System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW> ::HoudiniEngineUnity::HEU_AssetPreset::__get__curveNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set__curvePresets(::System::Collections::Generic::List_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> ::HoudiniEngineUnity::HEU_AssetPreset::__get__curvePresets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set_inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> ::HoudiniEngineUnity::HEU_AssetPreset::__get_inputPresets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_AssetPreset::__set_volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> ::HoudiniEngineUnity::HEU_AssetPreset::__get_volumeCachePresets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_AssetPreset::HEU_AssetPreset()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_AssetPreset>())) {}
 void ::HoudiniEngineUnity::HEU_AssetPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPreset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
