#pragma once
namespace {
#include "System/zzzz__TypeNameParser_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::TypeNameParser.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (*)(::StringW, ::System::Func_2<::System::Reflection::AssemblyName,::System::Reflection::Assembly>, ::System::Func_4<::System::Reflection::Assembly,::StringW,bool,::System::Type>, bool, bool, ByRef<::System::Threading::StackCrawlMark>)>(&::System::TypeNameParser::GetType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2487e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeNameParser>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::AssemblyName,::System::Reflection::Assembly>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::System::Reflection::Assembly,::StringW,bool,::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::System::Type ::System::TypeNameParser::GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName,::System::Reflection::Assembly> assemblyResolver, ::System::Func_4<::System::Reflection::Assembly,::StringW,bool,::System::Type> typeResolver, bool throwOnError, bool ignoreCase, ByRef<::System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeNameParser>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::AssemblyName,::System::Reflection::Assembly>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::System::Reflection::Assembly,::StringW,bool,::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(nullptr, ___internal_method, typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark);
}
} // end anonymous namespace
