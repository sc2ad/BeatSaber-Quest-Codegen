#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferInstancer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_LoadBufferInstancer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_LoadBufferInstancer::*)()>(&HoudiniEngineUnity::HEU_LoadBufferInstancer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x203a514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_LoadBufferInstancer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instanceTransforms(::ArrayW<HoudiniEngineUnity::HAPI_Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<HoudiniEngineUnity::HAPI_Transform>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<HoudiniEngineUnity::HAPI_Transform>>(value));
}
constexpr ::ArrayW<HoudiniEngineUnity::HAPI_Transform> HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceTransforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<HoudiniEngineUnity::HAPI_Transform>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instancePrefixes(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instancePrefixes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instanceNodeIDs(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceNodeIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__assetPaths(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__assetPaths() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__collisionAssetPaths(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__collisionAssetPaths() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_LoadBufferInstancer::HEU_LoadBufferInstancer()  : HoudiniEngineUnity::HEU_LoadBufferBase(THROW_UNLESS(::il2cpp_utils::New<HEU_LoadBufferInstancer>())) {}
 void HoudiniEngineUnity::HEU_LoadBufferInstancer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_LoadBufferInstancer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
