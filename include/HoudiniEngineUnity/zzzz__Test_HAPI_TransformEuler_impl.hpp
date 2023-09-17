#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__Test_HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_TransformEuler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_TransformEuler::*)(::HoudiniEngineUnity::HAPI_TransformEuler)>(&::HoudiniEngineUnity::Test_HAPI_TransformEuler::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2070e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_TransformEuler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_TransformEuler.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_TransformEuler::*)(::HoudiniEngineUnity::Test_HAPI_TransformEuler)>(&::HoudiniEngineUnity::Test_HAPI_TransformEuler::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2070e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_TransformEuler>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler>
constexpr  ::HoudiniEngineUnity::Test_HAPI_TransformEuler::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_TransformEuler>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::Test_HAPI_TransformEuler::__set_self(::HoudiniEngineUnity::HAPI_TransformEuler value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_TransformEuler>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler ::HoudiniEngineUnity::Test_HAPI_TransformEuler::__get_self() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_TransformEuler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "::HoudiniEngineUnity::HAPI_TransformEuler", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::Test_HAPI_TransformEuler::Test_HAPI_TransformEuler(::HoudiniEngineUnity::HAPI_TransformEuler self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_HAPI_TransformEuler>(self))) {}
 void ::HoudiniEngineUnity::Test_HAPI_TransformEuler::_ctor(::HoudiniEngineUnity::HAPI_TransformEuler self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_TransformEuler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool ::HoudiniEngineUnity::Test_HAPI_TransformEuler::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_TransformEuler other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_TransformEuler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
