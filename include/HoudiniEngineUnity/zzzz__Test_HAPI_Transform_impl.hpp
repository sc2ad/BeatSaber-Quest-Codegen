#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__Test_HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_Transform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_Transform::*)(::HoudiniEngineUnity::HAPI_Transform)>(&::HoudiniEngineUnity::Test_HAPI_Transform::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2070630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_Transform.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_Transform::*)(::HoudiniEngineUnity::Test_HAPI_Transform)>(&::HoudiniEngineUnity::Test_HAPI_Transform::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2070664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_Transform>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform>
constexpr  ::HoudiniEngineUnity::Test_HAPI_Transform::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::Test_HAPI_Transform::__set_self(::HoudiniEngineUnity::HAPI_Transform value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_Transform>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_Transform ::HoudiniEngineUnity::Test_HAPI_Transform::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "::HoudiniEngineUnity::HAPI_Transform", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::Test_HAPI_Transform::Test_HAPI_Transform(::HoudiniEngineUnity::HAPI_Transform self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_HAPI_Transform>(self))) {}
 void ::HoudiniEngineUnity::Test_HAPI_Transform::_ctor(::HoudiniEngineUnity::HAPI_Transform self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool ::HoudiniEngineUnity::Test_HAPI_Transform::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_Transform other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_Transform>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
