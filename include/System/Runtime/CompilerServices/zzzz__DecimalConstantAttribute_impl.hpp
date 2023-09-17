#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/CompilerServices/zzzz__DecimalConstantAttribute_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DecimalConstantAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::DecimalConstantAttribute::*)(uint8_t, uint8_t, uint32_t, uint32_t, uint32_t)>(&::System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x236de5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::DecimalConstantAttribute.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Runtime::CompilerServices::DecimalConstantAttribute::*)()>(&::System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236def8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::CompilerServices::DecimalConstantAttribute::__set__dec(::System::Decimal value)  {
::cordl_internals::setInstanceField<::System::Decimal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Decimal>(value));
}
constexpr ::System::Decimal ::System::Runtime::CompilerServices::DecimalConstantAttribute::__get__dec() const {
return ::cordl_internals::getInstanceField<::System::Decimal, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "scale", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sign", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "hi", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "mid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "low", ty: "uint32_t", modifiers: "", def_value: None }]
 ::System::Runtime::CompilerServices::DecimalConstantAttribute::DecimalConstantAttribute(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DecimalConstantAttribute>(scale, sign, hi, mid, low))) {}
 void ::System::Runtime::CompilerServices::DecimalConstantAttribute::_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scale, sign, hi, mid, low);
}
 ::System::Decimal ::System::Runtime::CompilerServices::DecimalConstantAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DecimalConstantAttribute>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
