#pragma once
namespace {
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__Expression_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplier_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionCombinator_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionType_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__DataType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::Expression._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::Expression::*)(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::Expression::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c7e068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_multiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_multiplier() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_dataType(::UnityEngine::UIElements::StyleSheets::Syntax::DataType value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::DataType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::DataType>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_dataType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::DataType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_combinator(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_combinator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_subExpressions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression> ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_subExpressions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_keyword(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_keyword() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::Expression(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Expression>(type))) {}
 void ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::Expression>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
} // end anonymous namespace
