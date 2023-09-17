#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__Test_Transform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Transform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_Transform::*)(::UnityEngine::Transform)>(&::HoudiniEngineUnity::Test_Transform::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2071fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Transform.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_Transform::*)()>(&::HoudiniEngineUnity::Test_Transform::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x207200c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Transform>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Transform.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_Transform::*)(::HoudiniEngineUnity::Test_Transform)>(&::HoudiniEngineUnity::Test_Transform::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x207206c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Transform>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_Transform>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform>
constexpr  ::HoudiniEngineUnity::Test_Transform::operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform>() const noexcept {
return ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform>
constexpr  ::HoudiniEngineUnity::Test_Transform::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform>() const noexcept {
return ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::Test_Transform::__set_self(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::HoudiniEngineUnity::Test_Transform::__get_self() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
 ::HoudiniEngineUnity::Test_Transform::Test_Transform(::UnityEngine::Transform self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_Transform>(self))) {}
 void ::HoudiniEngineUnity::Test_Transform::_ctor(::UnityEngine::Transform self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool ::HoudiniEngineUnity::Test_Transform::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Transform>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::Test_Transform::IsEquivalentTo(::HoudiniEngineUnity::Test_Transform other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Transform>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
