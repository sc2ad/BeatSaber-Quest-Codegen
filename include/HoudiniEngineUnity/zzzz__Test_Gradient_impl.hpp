#pragma once
#include "HoudiniEngineUnity/zzzz__Test_Gradient_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_Gradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::Test_Gradient::*)(UnityEngine::Gradient)>(&HoudiniEngineUnity::Test_Gradient::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2074250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Gradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Gradient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_Gradient.IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Gradient::*)()>(&HoudiniEngineUnity::Test_Gradient::IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2074278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Gradient>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::Test_Gradient.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_Gradient::*)(HoudiniEngineUnity::Test_Gradient)>(&HoudiniEngineUnity::Test_Gradient::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2074288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Gradient>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_Gradient>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient>
constexpr  HoudiniEngineUnity::Test_Gradient::operator HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient>() const noexcept {
return HoudiniEngineUnity::IEquivableWrapperClass_1<HoudiniEngineUnity::Test_Gradient>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Gradient>
constexpr  HoudiniEngineUnity::Test_Gradient::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Gradient>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_Gradient>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::Test_Gradient::__set_self(UnityEngine::Gradient value)  {
::cordl_internals::setInstanceField<UnityEngine::Gradient, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Gradient>(value));
}
constexpr UnityEngine::Gradient HoudiniEngineUnity::Test_Gradient::__get_self() const {
return ::cordl_internals::getInstanceField<UnityEngine::Gradient, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "self", ty: "UnityEngine::Gradient", modifiers: "", def_value: None }]
 HoudiniEngineUnity::Test_Gradient::Test_Gradient(UnityEngine::Gradient self)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Test_Gradient>(self))) {}
 void HoudiniEngineUnity::Test_Gradient::_ctor(UnityEngine::Gradient self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Gradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Gradient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, self);
}
 bool HoudiniEngineUnity::Test_Gradient::IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Gradient>::get(),
                            "IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HoudiniEngineUnity::Test_Gradient::IsEquivalentTo(HoudiniEngineUnity::Test_Gradient other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_Gradient>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::Test_Gradient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
