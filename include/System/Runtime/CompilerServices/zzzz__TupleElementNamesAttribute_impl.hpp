#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TupleElementNamesAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::TupleElementNamesAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TupleElementNamesAttribute::*)(::ArrayW<::StringW>)>(&System::Runtime::CompilerServices::TupleElementNamesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x236e3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TupleElementNamesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::TupleElementNamesAttribute::__set__transformNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Runtime::CompilerServices::TupleElementNamesAttribute::__get__transformNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "transformNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::TupleElementNamesAttribute::TupleElementNamesAttribute(::ArrayW<::StringW> transformNames)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TupleElementNamesAttribute>(transformNames))) {}
 void System::Runtime::CompilerServices::TupleElementNamesAttribute::_ctor(::ArrayW<::StringW> transformNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TupleElementNamesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transformNames);
}
