#pragma once
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: System::TypeIdentifier.get_InternalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeIdentifier::*)()>(&System::TypeIdentifier::get_InternalName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::TypeIdentifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeIdentifier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::TypeName
constexpr  System::TypeIdentifier::operator System::TypeName() const noexcept {
return System::TypeName(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IEquatable_1<System::TypeName>
constexpr  System::TypeIdentifier::operator System::IEquatable_1<System::TypeName>() const noexcept {
return System::IEquatable_1<System::TypeName>(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::TypeIdentifier::get_InternalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TypeIdentifier>::get(),
                            "get_InternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
