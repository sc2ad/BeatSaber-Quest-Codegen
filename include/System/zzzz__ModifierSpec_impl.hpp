#pragma once
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::ModifierSpec.Resolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::ModifierSpec::*)(System::Type)>(&System::ModifierSpec::Resolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ModifierSpec),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ModifierSpec>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ModifierSpec.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (System::ModifierSpec::*)(System::Text::StringBuilder)>(&System::ModifierSpec::Append)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ModifierSpec),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ModifierSpec>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 System::Type System::ModifierSpec::Resolve(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ModifierSpec>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, type);
}
 System::Text::StringBuilder System::ModifierSpec::Append(System::Text::StringBuilder sb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ModifierSpec>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(const_cast<void*>(instance), ___internal_method, sb);
}
