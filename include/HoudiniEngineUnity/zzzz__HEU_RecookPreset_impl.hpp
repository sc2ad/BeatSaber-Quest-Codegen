#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_RecookPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_RecookPreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_RecookPreset::*)()>(&::HoudiniEngineUnity::HEU_RecookPreset::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1fdb068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_RecookPreset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_RecookPreset::__set__volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> ::HoudiniEngineUnity::HEU_RecookPreset::__get__volumeCachePresets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_RecookPreset::__set__inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> ::HoudiniEngineUnity::HEU_RecookPreset::__get__inputPresets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_RecookPreset::HEU_RecookPreset()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_RecookPreset>())) {}
 void ::HoudiniEngineUnity::HEU_RecookPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_RecookPreset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
