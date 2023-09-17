#pragma once
namespace {
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IComponent.get_Site
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite (::System::ComponentModel::IComponent::*)()>(&::System::ComponentModel::IComponent::get_Site)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::IComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IComponent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::ComponentModel::IComponent::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 ::System::ComponentModel::ISite ::System::ComponentModel::IComponent::get_Site()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::IComponent>::get(),
                            "get_Site",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
