#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ObjectInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_ObjectInfo::*)(::HoudiniEngineUnity::HAPI_ObjectInfo)>(&::HoudiniEngineUnity::Test_HAPI_ObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20703b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ObjectInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_ObjectInfo::*)(::HoudiniEngineUnity::Test_HAPI_ObjectInfo)>(&::HoudiniEngineUnity::Test_HAPI_ObjectInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x20703f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>
constexpr  ::HoudiniEngineUnity::Test_HAPI_ObjectInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::Test_HAPI_ObjectInfo::__set_self(::HoudiniEngineUnity::HAPI_ObjectInfo value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_ObjectInfo>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo ::HoudiniEngineUnity::Test_HAPI_ObjectInfo::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "::HoudiniEngineUnity::HAPI_ObjectInfo", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::Test_HAPI_ObjectInfo::Test_HAPI_ObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_HAPI_ObjectInfo>(self))) {}
 void ::HoudiniEngineUnity::Test_HAPI_ObjectInfo::_ctor(::HoudiniEngineUnity::HAPI_ObjectInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool ::HoudiniEngineUnity::Test_HAPI_ObjectInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ObjectInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_ObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
