#pragma once
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__MemberExpression_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: System::Linq::Expressions::MemberExpression.get_Member
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberInfo (System::Linq::Expressions::MemberExpression::*)()>(&System::Linq::Expressions::MemberExpression::get_Member)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x268240c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::MemberExpression>::get(),
                            "get_Member",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::Expressions::MemberExpression.GetMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberInfo (System::Linq::Expressions::MemberExpression::*)()>(&System::Linq::Expressions::MemberExpression::GetMember)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2682418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::Expressions::MemberExpression),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::MemberExpression>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
 System::Reflection::MemberInfo System::Linq::Expressions::MemberExpression::get_Member()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::MemberExpression>::get(),
                            "get_Member",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MemberInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MemberInfo System::Linq::Expressions::MemberExpression::GetMember()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::MemberExpression>::get(),
                            "GetMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MemberInfo, false>(const_cast<void*>(instance), ___internal_method);
}
