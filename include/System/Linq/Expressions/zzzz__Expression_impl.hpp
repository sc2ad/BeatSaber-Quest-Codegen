#pragma once
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
constexpr void System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo::__set_NodeType(System::Linq::Expressions::ExpressionType value)  {
::cordl_internals::setInstanceField<System::Linq::Expressions::ExpressionType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Linq::Expressions::ExpressionType>(value));
}
constexpr System::Linq::Expressions::ExpressionType System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo::__get_NodeType() const {
return ::cordl_internals::getInstanceField<System::Linq::Expressions::ExpressionType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
//  Writing Method size for method: System::Linq::Expressions::Expression.get_NodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Linq::Expressions::ExpressionType (System::Linq::Expressions::Expression::*)()>(&System::Linq::Expressions::Expression::get_NodeType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26821c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::Expressions::Expression),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Expression>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 void System::Linq::Expressions::Expression::__set_s_lambdaDelegateCache(System::Dynamic::Utils::CacheDict_2<System::Type,System::Reflection::MethodInfo> value)  {
::cordl_internals::setStaticField<System::Dynamic::Utils::CacheDict_2<System::Type,System::Reflection::MethodInfo>, "s_lambdaDelegateCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Expression>::get>(std::forward<System::Dynamic::Utils::CacheDict_2<System::Type,System::Reflection::MethodInfo>>(value));
}
 System::Dynamic::Utils::CacheDict_2<System::Type,System::Reflection::MethodInfo> System::Linq::Expressions::Expression::__get_s_lambdaDelegateCache()  {
return ::cordl_internals::getStaticField<System::Dynamic::Utils::CacheDict_2<System::Type,System::Reflection::MethodInfo>, "s_lambdaDelegateCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Expression>::get>();
}
 void System::Linq::Expressions::Expression::__set_s_legacyCtorSupportTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Linq::Expressions::Expression,System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo> value)  {
::cordl_internals::setStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Linq::Expressions::Expression,System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo>, "s_legacyCtorSupportTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Expression>::get>(std::forward<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Linq::Expressions::Expression,System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo>>(value));
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Linq::Expressions::Expression,System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo> System::Linq::Expressions::Expression::__get_s_legacyCtorSupportTable()  {
return ::cordl_internals::getStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Linq::Expressions::Expression,System::Linq::Expressions::System__Linq__Expressions__Expression__ExtensionInfo>, "s_legacyCtorSupportTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Expression>::get>();
}
 System::Linq::Expressions::ExpressionType System::Linq::Expressions::Expression::get_NodeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Expression>::get(),
                            "get_NodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Linq::Expressions::ExpressionType, false>(const_cast<void*>(instance), ___internal_method);
}
