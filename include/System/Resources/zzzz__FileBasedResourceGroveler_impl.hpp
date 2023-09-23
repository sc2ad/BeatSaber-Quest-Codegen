#pragma once
#include "System/Resources/zzzz__FileBasedResourceGroveler_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: System::Resources::FileBasedResourceGroveler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::FileBasedResourceGroveler::*)(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator)>(&System::Resources::FileBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23732ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::FileBasedResourceGroveler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Resources::IResourceGroveler
constexpr  System::Resources::FileBasedResourceGroveler::operator System::Resources::IResourceGroveler() const noexcept {
return System::Resources::IResourceGroveler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Resources::FileBasedResourceGroveler::__set__mediator(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator value)  {
::cordl_internals::setInstanceField<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>(value));
}
constexpr System::Resources::System__Resources__ResourceManager__ResourceManagerMediator System::Resources::FileBasedResourceGroveler::__get__mediator() const {
return ::cordl_internals::getInstanceField<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mediator", ty: "System::Resources::System__Resources__ResourceManager__ResourceManagerMediator", modifiers: "", def_value: None }]
 System::Resources::FileBasedResourceGroveler::FileBasedResourceGroveler(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FileBasedResourceGroveler>(mediator))) {}
 void System::Resources::FileBasedResourceGroveler::_ctor(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Resources::FileBasedResourceGroveler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Resources::System__Resources__ResourceManager__ResourceManagerMediator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mediator);
}
