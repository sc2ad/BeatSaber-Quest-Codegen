#pragma once
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_AssetInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_HAPI_AssetInfo::*)(HoudiniEngineUnity::HAPI_AssetInfo)>(&HoudiniEngineUnity::Test_HAPI_AssetInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x206fc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AssetInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AssetInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_AssetInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_AssetInfo::*)(HoudiniEngineUnity::Test_HAPI_AssetInfo)>(&HoudiniEngineUnity::Test_HAPI_AssetInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x206fc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AssetInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_AssetInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AssetInfo>
constexpr  HoudiniEngineUnity::Test_HAPI_AssetInfo::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AssetInfo>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AssetInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_HAPI_AssetInfo::__set_self(HoudiniEngineUnity::HAPI_AssetInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AssetInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AssetInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AssetInfo HoudiniEngineUnity::Test_HAPI_AssetInfo::__get_self() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AssetInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::Test_HAPI_AssetInfo HoudiniEngineUnity::Test_HAPI_AssetInfo::New_ctor(HoudiniEngineUnity::HAPI_AssetInfo self)  {
HoudiniEngineUnity::Test_HAPI_AssetInfo o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::Test_HAPI_AssetInfo>(self))};
return o;
}
 void HoudiniEngineUnity::Test_HAPI_AssetInfo::_ctor(HoudiniEngineUnity::HAPI_AssetInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AssetInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AssetInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_HAPI_AssetInfo::IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_AssetInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AssetInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_AssetInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
