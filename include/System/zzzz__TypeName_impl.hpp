#pragma once
#include "System/zzzz__TypeName_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: System::TypeName.get_DisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeName::*)()>(&System::TypeName::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::TypeName),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeName>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<System::TypeName>
constexpr  System::TypeName::operator System::IEquatable_1<System::TypeName>() const noexcept {
return System::IEquatable_1<System::TypeName>(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::TypeName::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeName>::get(),
                            "get_DisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
