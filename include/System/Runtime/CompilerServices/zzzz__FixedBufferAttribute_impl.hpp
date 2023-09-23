#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__FixedBufferAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::FixedBufferAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::FixedBufferAttribute::*)(System::Type, int32_t)>(&System::Runtime::CompilerServices::FixedBufferAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x236df0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FixedBufferAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::FixedBufferAttribute.get_ElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(&System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236df3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FixedBufferAttribute>::get(),
                            "get_ElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::FixedBufferAttribute.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(&System::Runtime::CompilerServices::FixedBufferAttribute::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236df44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FixedBufferAttribute>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::FixedBufferAttribute::__set__ElementType_k__BackingField(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Runtime::CompilerServices::FixedBufferAttribute::__get__ElementType_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::CompilerServices::FixedBufferAttribute::__set__Length_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::CompilerServices::FixedBufferAttribute::__get__Length_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "elementType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::FixedBufferAttribute::FixedBufferAttribute(System::Type elementType, int32_t length)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<FixedBufferAttribute>(elementType, length))) {}
 void System::Runtime::CompilerServices::FixedBufferAttribute::_ctor(System::Type elementType, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FixedBufferAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elementType, length);
}
 System::Type System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FixedBufferAttribute>::get(),
                            "get_ElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Runtime::CompilerServices::FixedBufferAttribute::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::FixedBufferAttribute>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
