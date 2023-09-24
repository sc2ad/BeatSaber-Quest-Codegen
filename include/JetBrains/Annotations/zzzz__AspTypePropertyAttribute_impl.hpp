#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspTypePropertyAttribute_def.hpp"
//  Writing Method size for method: JetBrains::Annotations::AspTypePropertyAttribute.get_CreateConstructorReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (JetBrains::Annotations::AspTypePropertyAttribute::*)()>(&JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d41334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspTypePropertyAttribute>::get(),
                            "get_CreateConstructorReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: JetBrains::Annotations::AspTypePropertyAttribute.set_CreateConstructorReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(&JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d4133c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspTypePropertyAttribute>::get(),
                            "set_CreateConstructorReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: JetBrains::Annotations::AspTypePropertyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(&JetBrains::Annotations::AspTypePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d41348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspTypePropertyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void JetBrains::Annotations::AspTypePropertyAttribute::__set__CreateConstructorReferences_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool JetBrains::Annotations::AspTypePropertyAttribute::__get__CreateConstructorReferences_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspTypePropertyAttribute>::get(),
                            "get_CreateConstructorReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspTypePropertyAttribute>::get(),
                            "set_CreateConstructorReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 JetBrains::Annotations::AspTypePropertyAttribute JetBrains::Annotations::AspTypePropertyAttribute::New_ctor(bool createConstructorReferences)  {
JetBrains::Annotations::AspTypePropertyAttribute o{THROW_UNLESS(::il2cpp_utils::New<JetBrains::Annotations::AspTypePropertyAttribute>(createConstructorReferences))};
return o;
}
 void JetBrains::Annotations::AspTypePropertyAttribute::_ctor(bool createConstructorReferences)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspTypePropertyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, createConstructorReferences);
}
