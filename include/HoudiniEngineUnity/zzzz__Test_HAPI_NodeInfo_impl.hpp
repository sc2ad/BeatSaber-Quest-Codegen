#pragma once
#include "HoudiniEngineUnity/zzzz__Test_HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_NodeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_HAPI_NodeInfo::*)(HoudiniEngineUnity::HAPI_NodeInfo)>(&HoudiniEngineUnity::Test_HAPI_NodeInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x206ffb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_NodeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_NodeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_NodeInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_NodeInfo::*)(HoudiniEngineUnity::Test_HAPI_NodeInfo)>(&HoudiniEngineUnity::Test_HAPI_NodeInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x206ffec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_NodeInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_NodeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_NodeInfo>
constexpr  HoudiniEngineUnity::Test_HAPI_NodeInfo::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_NodeInfo>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_NodeInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_HAPI_NodeInfo::__set_self(HoudiniEngineUnity::HAPI_NodeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_NodeInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_NodeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_NodeInfo HoudiniEngineUnity::Test_HAPI_NodeInfo::__get_self() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_NodeInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::Test_HAPI_NodeInfo HoudiniEngineUnity::Test_HAPI_NodeInfo::New_ctor(HoudiniEngineUnity::HAPI_NodeInfo self)  {
HoudiniEngineUnity::Test_HAPI_NodeInfo o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::Test_HAPI_NodeInfo>(self))};
return o;
}
 void HoudiniEngineUnity::Test_HAPI_NodeInfo::_ctor(HoudiniEngineUnity::HAPI_NodeInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_NodeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_NodeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_HAPI_NodeInfo::IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_NodeInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_NodeInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_HAPI_NodeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
