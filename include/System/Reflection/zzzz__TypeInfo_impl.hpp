#pragma once
#include "System/zzzz__Type_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
//  Writing Method size for method: System::Reflection::TypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::TypeInfo::*)()>(&System::Reflection::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x237f61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::TypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr System::Reflection::BindingFlags  System::Reflection::TypeInfo::DeclaredOnlyLookup{62};
 System::Reflection::TypeInfo System::Reflection::TypeInfo::New_ctor()  {
System::Reflection::TypeInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Reflection::TypeInfo>())};
return o;
}
 void System::Reflection::TypeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::TypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
