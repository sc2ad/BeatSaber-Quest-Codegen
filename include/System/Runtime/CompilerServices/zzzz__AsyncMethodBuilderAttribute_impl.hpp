#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::*)(::System::Type)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236d98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__set__BuilderType_k__BackingField(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__get__BuilderType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "builderType", ty: "::System::Type", modifiers: "", def_value: None }]
 ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::AsyncMethodBuilderAttribute(::System::Type builderType)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AsyncMethodBuilderAttribute>(builderType))) {}
 void ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::_ctor(::System::Type builderType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, builderType);
}
} // end anonymous namespace
