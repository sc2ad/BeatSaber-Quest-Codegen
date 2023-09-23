#pragma once
#include "System/Linq/Expressions/zzzz__Error_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::Linq::Expressions::Error.ExtensionNodeMustOverrideProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(::bs_hook::Il2CppWrapperType)>(&System::Linq::Expressions::Error::ExtensionNodeMustOverrideProperty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26822b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Error>::get(),
                            "ExtensionNodeMustOverrideProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Exception System::Linq::Expressions::Error::ExtensionNodeMustOverrideProperty(::bs_hook::Il2CppWrapperType p0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::Expressions::Error>::get(),
                            "ExtensionNodeMustOverrideProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, p0);
}
