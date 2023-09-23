#pragma once
#include "System/Text/RegularExpressions/zzzz__RegexRunnerFactory_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
//  Writing Method size for method: System::Text::RegularExpressions::RegexRunnerFactory.CreateInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::RegularExpressions::RegexRunner (System::Text::RegularExpressions::RegexRunnerFactory::*)()>(&System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::RegularExpressions::RegexRunnerFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexRunnerFactory>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 System::Text::RegularExpressions::RegexRunner System::Text::RegularExpressions::RegexRunnerFactory::CreateInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::RegularExpressions::RegexRunnerFactory>::get(),
                            "CreateInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::RegularExpressions::RegexRunner, false>(const_cast<void*>(instance), ___internal_method);
}
