#pragma once
#include "System/ComponentModel/zzzz__INestedSite_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
//  Writing Method size for method: System::ComponentModel::INestedSite.get_FullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::INestedSite::*)()>(&System::ComponentModel::INestedSite::get_FullName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::INestedSite),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::INestedSite>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ComponentModel::ISite
constexpr  System::ComponentModel::INestedSite::operator System::ComponentModel::ISite() const noexcept {
return System::ComponentModel::ISite(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IServiceProvider
constexpr  System::ComponentModel::INestedSite::operator System::IServiceProvider() const noexcept {
return System::IServiceProvider(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::ComponentModel::INestedSite::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::INestedSite>::get(),
                            "get_FullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
