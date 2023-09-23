#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__StringFormatMethodAttribute_def.hpp"
//  Writing Method size for method: JetBrains::Annotations::StringFormatMethodAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(&JetBrains::Annotations::StringFormatMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d40a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::StringFormatMethodAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: JetBrains::Annotations::StringFormatMethodAttribute.get_FormatParameterName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::StringFormatMethodAttribute::*)()>(&JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d40aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::StringFormatMethodAttribute>::get(),
                            "get_FormatParameterName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: JetBrains::Annotations::StringFormatMethodAttribute.set_FormatParameterName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(&JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d40aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::StringFormatMethodAttribute>::get(),
                            "set_FormatParameterName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void JetBrains::Annotations::StringFormatMethodAttribute::__set__FormatParameterName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW JetBrains::Annotations::StringFormatMethodAttribute::__get__FormatParameterName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "formatParameterName", ty: "::StringW", modifiers: "", def_value: None }]
 JetBrains::Annotations::StringFormatMethodAttribute::StringFormatMethodAttribute(::StringW formatParameterName)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<StringFormatMethodAttribute>(formatParameterName))) {}
 void JetBrains::Annotations::StringFormatMethodAttribute::_ctor(::StringW formatParameterName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::StringFormatMethodAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, formatParameterName);
}
 ::StringW JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::StringFormatMethodAttribute>::get(),
                            "get_FormatParameterName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::StringFormatMethodAttribute>::get(),
                            "set_FormatParameterName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
