#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResult_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::MatchResult.get_success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::MatchResult::*)()>(&UnityEngine::UIElements::StyleSheets::MatchResult::get_success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c778a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::MatchResult>::get(),
                            "get_success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "errorCode", ty: "UnityEngine::UIElements::StyleSheets::MatchResultErrorCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "errorValue", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::StyleSheets::MatchResult::MatchResult(UnityEngine::UIElements::StyleSheets::MatchResultErrorCode errorCode, ::StringW errorValue) noexcept : ::bs_hook::ValueTypeWrapper() {this->errorCode = errorCode;
this->errorValue = errorValue;
}
constexpr void UnityEngine::UIElements::StyleSheets::MatchResult::__set_errorCode(UnityEngine::UIElements::StyleSheets::MatchResultErrorCode value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleSheets::MatchResultErrorCode>(value));
}
constexpr UnityEngine::UIElements::StyleSheets::MatchResultErrorCode UnityEngine::UIElements::StyleSheets::MatchResult::__get_errorCode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleSheets::MatchResult::__set_errorValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::StyleSheets::MatchResult::__get_errorValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 bool UnityEngine::UIElements::StyleSheets::MatchResult::get_success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::MatchResult>::get(),
                            "get_success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
