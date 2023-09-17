#pragma once
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
namespace {
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::LambdaExpression.get_Body
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression (::System::Linq::Expressions::LambdaExpression::*)()>(&::System::Linq::Expressions::LambdaExpression::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2682404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LambdaExpression>::get(),
                            "get_Body",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Linq::Expressions::LambdaExpression::__set__body(::System::Linq::Expressions::Expression value)  {
::cordl_internals::setInstanceField<::System::Linq::Expressions::Expression, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Linq::Expressions::Expression>(value));
}
constexpr ::System::Linq::Expressions::Expression ::System::Linq::Expressions::LambdaExpression::__get__body() const {
return ::cordl_internals::getInstanceField<::System::Linq::Expressions::Expression, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Linq::Expressions::Expression ::System::Linq::Expressions::LambdaExpression::get_Body()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LambdaExpression>::get(),
                            "get_Body",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
