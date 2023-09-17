#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "JetBrains/Annotations/zzzz__AspChildControlTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::StringW, ::System::Type)>(&::JetBrains::Annotations::AspChildControlTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d41298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.get_TagName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(&::JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d412c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "get_TagName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.set_TagName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d412cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "set_TagName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.get_ControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(&::JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d412d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "get_ControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.set_ControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::System::Type)>(&::JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d412dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "set_ControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::JetBrains::Annotations::AspChildControlTypeAttribute::__set__TagName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::JetBrains::Annotations::AspChildControlTypeAttribute::__get__TagName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::JetBrains::Annotations::AspChildControlTypeAttribute::__set__ControlType_k__BackingField(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::JetBrains::Annotations::AspChildControlTypeAttribute::__get__ControlType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "tagName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "controlType", ty: "::System::Type", modifiers: "", def_value: None }]
 ::JetBrains::Annotations::AspChildControlTypeAttribute::AspChildControlTypeAttribute(::StringW tagName, ::System::Type controlType)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AspChildControlTypeAttribute>(tagName, controlType))) {}
 void ::JetBrains::Annotations::AspChildControlTypeAttribute::_ctor(::StringW tagName, ::System::Type controlType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagName, controlType);
}
 ::StringW ::JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "get_TagName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "set_TagName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Type ::JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "get_ControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType(::System::Type value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute>::get(),
                            "set_ControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
