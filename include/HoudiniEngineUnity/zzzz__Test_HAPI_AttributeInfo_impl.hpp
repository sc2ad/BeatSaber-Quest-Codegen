#pragma once
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_AttributeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(HoudiniEngineUnity::HAPI_AttributeInfo)>(&HoudiniEngineUnity::Test_HAPI_AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2070ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AttributeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_AttributeInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(HoudiniEngineUnity::Test_HAPI_AttributeInfo)>(&HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2070cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AttributeInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_AttributeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo>
constexpr  HoudiniEngineUnity::Test_HAPI_AttributeInfo::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_HAPI_AttributeInfo::__set_self(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::Test_HAPI_AttributeInfo::__get_self() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::Test_HAPI_AttributeInfo HoudiniEngineUnity::Test_HAPI_AttributeInfo::New_ctor(HoudiniEngineUnity::HAPI_AttributeInfo self)  {
HoudiniEngineUnity::Test_HAPI_AttributeInfo o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::Test_HAPI_AttributeInfo>(self))};
return o;
}
 void HoudiniEngineUnity::Test_HAPI_AttributeInfo::_ctor(HoudiniEngineUnity::HAPI_AttributeInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AttributeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_AttributeInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AttributeInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_AttributeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
